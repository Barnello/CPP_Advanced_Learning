#include <iostream>

using namespace std; 

void somethingWentWrong(){
    int error = 0;
    int error2 = 1;

    if(error){
        throw "something went wrong";
    }
    if(error2){
        throw string("something went wrong again");
    }
}

int main(){
    try{
        somethingWentWrong();
    }
    catch(int e){
        cout << "Error int: " << e << endl;
    }
    catch(char const* &e){
        cout << "Error message: " << e << endl;
    }
    catch(string &e){
        cout << "Error message: " << e << endl;
    }

    cout << "The program is still running" << endl;

    return 0;
}