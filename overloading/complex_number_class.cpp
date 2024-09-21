#include <iostream>
#include "Complex.h"

using namespace std;
using namespace numberProgramming;

int main(){

    Complex c1(1,2);
    Complex c2(1,3);

    cout << "This is C2 " << c2 << endl;

    cout << "This is C1 " << c1 << endl;

    c2 = c1;

    cout << "This is now C2 " << c2 << endl;

    return 0;
}