#include <iostream>

using namespace std; 

class Animal{
    public: 
        Animal(){
        cout << "Animal created" << endl;
    }
    virtual void show() = 0;
    virtual void speak() = 0;

    // The following has to be commented out since it is not implemented in the child class Dogs, or the Child of Dogs, LargeDogs. 
    // This is not a pure virtual function, but the same goes for a pure virtual function as well. 
    // By creating even one PURE virtual function, the class becomes abstact, meaning that you cannot create an object of type animal
    // However as demonstrated in this small script, you can create objects of those that inherit from type animal
    // virtual void somethingelse();
};

class Dogs : public Animal{
private:
    int age = 20;
public: 
    Dogs(){
        cout << "Dog created" << endl;
    }
    virtual void show(){
        cout << "The dogs age is " << age << endl;
    }
    virtual void speak(){
        cout << "dog woof" << endl;
    }
    int getAge(){
        return age;
    }

};

//If this function did not implement all of the pure virtual functions in the Animal class then itself would be an abstract class. 
class LargeDogs : public Dogs {
    private:
        int LDAGE;
    public:
        LargeDogs(){
            cout << "Large Dog Created" << endl;
        }
        LargeDogs(int age): LDAGE(age){
            cout << "Large dogs age established" << endl;
        }
        virtual void show(){
            cout << "The large dogs age is " << LDAGE << endl;
        }
        virtual void speak(){
            cout << "Woof!" << endl;
        }
};

class Lab: public LargeDogs{
    public:
    Lab(){
        cout << "Test" << endl;
    }
    virtual void speak(){
        cout << "Lab woof" << endl;
    }
};

int main(){
     cout << endl;
    Dogs dog1;
    dog1.show();
    dog1.speak();
    cout << endl;
    int tempAge = dog1.getAge();
    LargeDogs dog(tempAge);
    dog.show();
    dog.speak();
    cout << endl;
    Lab test;
    test.speak();


    // This created an array of animal pointers
    Animal *animals[7];
    // Setting one of the animal pointers to the memory of the dog object
    animals[0]=&dog;
    // Calling a function from the animal pointer using the '->' operator - works because of inheritance 
    animals[0]->speak();

    return 0;
}