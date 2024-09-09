#include <iostream>
#include <fstream>

using namespace std;

//Using pragma to remove padding for binary file writing and reading

#pragma pack(push, 1)

struct Person{
    char name[50];
    int age;
    double weight;
};

#pragma pack(pop)

int main(){

    Person someone = {"Charlie", 20, 140};

    cout << sizeof(Person) << endl;

    string filename = "test.bin";


    // -- Write Binary File
    fstream outputFile; 

    outputFile.open(filename, ios::binary|ios::out);

    // To check if the system has room to store such a file
    if(outputFile.is_open()){

        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();

    }
    else{
        cout << "Error opening file: " << filename << endl;
    }

    // -- Read Binary File
    
    Person another = {};

    fstream inputFile; 

    inputFile.open(filename, ios::binary|ios::in);

    if(inputFile.is_open()){

        inputFile.read(reinterpret_cast<char *>(&another), sizeof(Person));

        inputFile.close();

    }
    else{
        cout << "Error opening file: " << filename << endl;
    }

    cout << another.name << ", " << another.age << ", " << another.weight << endl;

    return 0;
}