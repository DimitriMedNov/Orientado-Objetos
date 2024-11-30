#pragma once
#include <string>
using namespace std;

class Complex
{
private:
	float real, imag;
public:
	Complex();
	Complex(float r, float i);
	float module(void);
	Complex conjugate(void);
	void add(Complex n1, Complex n2);
	void subs(Complex n1, Complex n2);
	void mult(Complex n1, Complex n2);
	void divi(Complex n1, Complex n2);
	string toString(void);
	//métodos set y get
	void setReal(float r);
	float getReal(void);
	void setImag(float i);
	float getImag(void);
};
