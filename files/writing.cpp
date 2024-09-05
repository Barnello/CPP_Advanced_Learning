#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream outFile;

    fstream outFile;

    string outputFileName = "test.txt";

    outFile.open(outputFileName, ios::out);
    
    if(outFile.is_open()){
        outFile << "Hello World" << endl;
        outFile << 1234 << endl;
        outFile.close();
    }
    else{
        cout << "Could not create the file " << outputFileName << endl;
    }
}