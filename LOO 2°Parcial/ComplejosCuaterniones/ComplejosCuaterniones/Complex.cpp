#include "Complex.h"
#include <cmath>

Complex::Complex() {
	this->real = 0;
	this->imag = 0;
}
Complex::Complex(float r, float i) {
	this->real = r;
	this->imag = i;
}
float Complex::module(void) {
	return sqrt(this->real * this->real + this->imag * this->imag);
}
Complex Complex::conjugate(void) {
	Complex nuevo(this->real, -this->imag);
	return nuevo;
}
void Complex::add(Complex n1, Complex n2) {
	this->real = n1.getReal() + n2.getReal();
	this->imag = n1.getImag() + n2.getImag();
}
void Complex::subs(Complex n1, Complex n2) {
	this->real = n1.getReal() - n2.getReal();
	this->imag = n1.getImag() - n2.getImag();
}
void Complex::mult(Complex n1, Complex n2) {
	//(a*c – b*d) + (a*d + b*c)
	this->real = n1.getReal() * n2.getReal() - n1.getImag() * n2.getImag();
	this->imag = n1.getReal() * n2.getImag() + n1.getImag() * n2.getReal();
}
void Complex::divi(Complex n1, Complex n2) {
	this->real = (n1.getReal() * n2.getReal() + n1.getImag() * n2.getImag()) / (n2.getReal() * n2.getReal() + n2.getImag() * n2.getImag());
	this->imag = (-n1.getReal() * n2.getImag() + n2.getReal() * n1.getImag()) / (n2.getReal() * n2.getReal() + n2.getImag() * n2.getImag());
}
string Complex::toString(void) {
	string str;
	str = to_string(this->real) + (this->imag < 0 ? "" : "+") + to_string(this->imag) + " i";
	return str;
}
//métodos set y get
void Complex::setReal(float r) {
	this->real = r;
}
float Complex::getReal(void) {
	return this->real;
}
void Complex::setImag(float i) {
	this->imag = i;
}
float Complex::getImag(void) {
	return this->imag;
}
