#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class MyArray
{
private:
	int tam;
	int* arr;
public:
	MyArray();
	MyArray(int tam);
	void setSize(int tam);
	int getSize(void);
	int getElementAtIndex(int indx);
	void print(bool vertical);
	bool find(int value);
	int getIndex(int value);
	MyArray ordered(void);
	void setElementAtIndex(int indx, int value);
	void fillRandom(void);
};