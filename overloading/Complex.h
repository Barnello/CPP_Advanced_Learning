#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace numberProgramming{

    class Complex{
        private: 
            double real; 
            double imaginary;
        public: 
            Complex();
            Complex(double real, double imaginary);
            Complex(const Complex &other);
            const Complex &operator=(const Complex &other);
            double getReal() const{return real;}
            double getImaginary() const {return imaginary;}
            bool operator==(const Complex &c) const;
            bool operator!=(const Complex &c) const;    
    };

    ostream &operator<<(ostream &out, const Complex &c);
    Complex operator+(double d, const Complex &c);
    Complex operator+(const Complex &c,double d);
    Complex operator+(const Complex &c, const Complex &d);
}

#endif