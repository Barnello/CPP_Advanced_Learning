#include <iostream> 

using namespace std;

void test(){
    cout << "Hello World" << endl;
}

int main (){

    void (*p)() = test;

    p();

    return 0;
}