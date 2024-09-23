#include "Complex.h"

namespace numberProgramming{
    ostream &operator<<(ostream &out, const Complex &c){
        out << "(" << c.getReal() << "," << c.getImaginary() << ")";
        return out;
        //cout << c1 << endl; 
    }

    Complex operator+(double d, const Complex &c){
        return Complex(d + c.getReal(), c.getImaginary());
    }
    Complex operator+(const Complex &c, double d){
        return Complex(d + c.getReal(), c.getImaginary());
    }

    Complex operator+(const Complex &c, const Complex &d){
        return Complex(d.getReal() + c.getReal(), d.getImaginary() + c.getImaginary());
    }

    bool Complex::operator==(const Complex &c) const{
        return ((real == c.getReal()) && (imaginary == c.getImaginary()));
    }

    bool Complex::operator!=(const Complex &c) const{
        return !(*this==c);
    }
    

    Complex::Complex(): real(0), imaginary(0){

    }

    Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){}

    Complex::Complex(const Complex &other){
        real = other.real;
        imaginary = other.imaginary;
    }

    const Complex &Complex::operator=(const Complex &other){
        real = other.real;
        imaginary = other.imaginary;

        return *this;
    }   

}