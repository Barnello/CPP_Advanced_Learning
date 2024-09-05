// Making sure to catch exceptions in the right order
#include <iostream>
#include <exception>
using namespace std;


void wentWrong(){
    bool error1 = false;
    bool error2 = true; 

    if(error1){
        throw bad_alloc();
    }  
    
    if(error2){
        throw exception();
    }     
}
int main(){

    try{
        wentWrong();
    }
    catch(bad_alloc &e){
        cout << e.what() << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;    
    }

    //instead of exeption first before the specific bad_alloc exepction due to polymorphisism

    return 0;
}