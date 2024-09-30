#include <iostream>

using namespace std;

struct Test{
    virtual int operator()(int &num1)=0;

    virtual ~Test(){}
};

struct MainStruct : public Test{
    int num2 = 2;
    
    int operator()(int &num1){
        return num1 + num2;
    }
};

void add2(int num, Test &test){
    cout << test(num) << endl;
}

int main(){

    MainStruct m; 

    add2(23, m);

    return 0;
}

