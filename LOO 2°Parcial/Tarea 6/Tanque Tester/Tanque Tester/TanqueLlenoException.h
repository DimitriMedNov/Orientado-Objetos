#pragma once
#include <exception>
#include <string>
using namespace std;
class TanqueLlenoException : public exception
{
public:
	const char* what() const throw();
};

