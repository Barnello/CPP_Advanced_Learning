#include <iostream>

template <class c>
class Test {
    private: 
        c obj;
    public:
        Test(){
            std::cout << "Nothing defined here" << std::endl;
        }
        Test(c paramObj){
            this->obj = paramObj;
        }
        void print(){
            std::cout << obj << std::endl; 
        }
};

int main(){

    Test<int> testInt(1);
    testInt.print();


    return 0;
}