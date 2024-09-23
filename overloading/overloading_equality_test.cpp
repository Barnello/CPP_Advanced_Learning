#include <iostream>
#include "Complex.h"

using namespace std;
using namespace numberProgramming;

int main(){

    Complex test1(5,2);
    Complex test2(1,3);

    cout << (test1 == test2) << endl;

    cout << (test1 != test2) << endl;


    return 0;
}