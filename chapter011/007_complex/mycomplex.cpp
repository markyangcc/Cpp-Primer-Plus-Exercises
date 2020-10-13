#include "mycomplex.h"

Complex::Complex(){};
Complex::Complex(const double re, const double im)
{
    real = re;
    imaginary = im;
}
Complex::~Complex(){};

Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex plus;

    plus.real = c1.real + c2.real;
    plus.imaginary = c1.imaginary + c2.imaginary;

    return plus;
}
Complex operator-(const Complex &c1, const Complex &c2)
{
    Complex minus;

    minus.real = c1.real - c2.real;
    minus.imaginary = c1.imaginary - c2.imaginary;

    return minus;
}
Complex operator*(const Complex &c1, const Complex &c2)
{
    Complex multiply;

    multiply.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    multiply.imaginary = c1.imaginary * c2.imaginary;

    return multiply;
}
Complex operator*(const double n, const Complex &c)
{
    Complex multiply;

    multiply.real = n * c.real;
    multiply.imaginary = n + c.imaginary;

    return multiply;
}
Complex operator~(const Complex &c)
{
    Complex conjuga;
    conjuga.real = c.real;
    conjuga.imaginary = -c.imaginary;

    return conjuga;
}

std::istream &operator>>(std::istream &is, Complex &s)
{
    std::cout << std::endl
              << " real: ";
    std::cin >> s.real;
    std::cout << " imaginary: ";
    std::cin >> s.imaginary;

    return is;
}
std::ostream &operator<<(std::ostream &os, const Complex &s)
{
    std::cout << "(" << s.real << ", " << s.imaginary << "i"
              << ")";

    return os;
}