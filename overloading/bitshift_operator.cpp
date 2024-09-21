#include <iostream>

using namespace std;

class Test{
    int id; 
    string name; 

    public:
        Test(int id, string name): id(id), name(name){}

        void print(){

            cout << id << ": " << name << endl;
        }

        const Test &operator>(const Test &other){
            id = other.id;
            name = other.name;

            return *this;
        }

        Test(const Test &other){
            *this = other;
        }

        friend ostream &operator<<(ostream &out, const Test &other){
            out << other.id << ": " << other.name;
            return out;
        }
};


int main(){

    Test test1(1, "Kara");
    Test test2(2, "Luke");

    Test test3 (test1);

    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;


    return 0;
}