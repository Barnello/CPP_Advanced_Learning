#include <iostream>
#include <string>

template<class T>
void print(T t){
    std::cout << t << std::endl;    
}

template<class N>
void add(N n1, N n2){
    std::cout << (n1 + n2) << std::endl;
}

int main(){

    print(5);
    print<double>(3.44);
    print<std::string>("aksjhdkjahds");

    add(1,2);


    return 0;
}