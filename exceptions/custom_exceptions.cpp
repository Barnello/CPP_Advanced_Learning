#include <iostream>
#include <exception>

using namespace std;

class MyException: public exception{
    public: 
        virtual const char* what(){
            return "This is an exception and something happened";
        }
};

class TestForException{
    public: 
        void goesWrong(){
            throw MyException();
        }

};

int main(){

    TestForException test;

    try{
        test.goesWrong();
    }
    catch(MyException &e){
        cout << e.what() << endl;
    }

    return 0;
}