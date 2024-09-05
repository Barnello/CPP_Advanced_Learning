#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream outFile;

    fstream inFile;

    string inputFileName = "test.txt";

    inFile.open(inputFileName, ios::in);
    
    if(inFile.is_open()){
        string line;
        while (!inFile.eof()){
            //inFile >> line;
            getline(inFile, line);
            cout << line << endl;
        }
        // getline(inFile, line);
        // cout << line << endl;
        inFile.close();
    }
    else{
        cout << "Could not create the file " << inputFileName << endl;
    }
}