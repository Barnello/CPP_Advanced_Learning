#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    string filename = "test.txt";
    
    ifstream input;

    input.open(filename);

    // Return 1 when file is not open
    if(!input.is_open()){
        return 1;
    }

    while(input){
        string line; 

        getline(input, line, ':');

        int pop; 
        input >> pop;

        // Accounting for the whitespace in c++11
        input >> ws;

        cout << line << " is " << pop << endl;

    }

    input.close();

    return 0;
}