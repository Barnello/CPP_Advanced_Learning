#include <iostream>

using namespace std;

class Test{
    string name; 
    int id; 
    public: 
        Test(): id(0), name(""){

        }
        Test(int id, string name): id(id), name(name){
            //cout << id << ": " << name << " was just created as an object" << endl;
        }

        void print(){
            cout << id << ": " << name << endl;
        }

        // An assignment operation happens when you have values to an object and reassign data with another object
        const Test &operator=(const Test &other){
            cout << "Assignment operator running" << endl;
            
            id = other.id;
            name = other.name;

            return *this;
        }

        // A copy constructor can be used when creating an object that copies another object without initializing the object with data first
        Test(const Test &other){
            cout << "Copy Constructor running" << endl;
            
            *this = other;
        }

};

int main(){

    return 0;
}