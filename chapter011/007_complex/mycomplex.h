#ifndef Mycomplex_H_
#define Mycomplex_H_

#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex();

    Complex(const double re, const double im);

    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend Complex operator*(const Complex &c1, const Complex &c2);
    friend Complex operator*(const double n, const Complex &c);
    friend Complex operator~(const Complex &c);

    friend std::ostream &operator<<(std::ostream &os, const Complex &s);
    friend std::istream &operator>>(std::istream &is, Complex &s);

    ~Complex();
};

#endif