#include <iostream>

using namespace std; 

void somethingWentWrong(){
    int error = 1;
    int error2 = 1;

    if(error){
        throw "somthing went wrong";
    }
    if(error2){
        throw string("sokmthing went wrong again")
    }
}

int main(){
    try{
        somethingWentWrong();
    }
    catch(char const* e){
        cout << "Error code: " << e << endl;
    }

    cout << "The program is still running" << endl;

    return 0;
}