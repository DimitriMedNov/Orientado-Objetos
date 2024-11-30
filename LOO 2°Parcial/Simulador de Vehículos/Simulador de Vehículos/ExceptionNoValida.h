#pragma once
#include <exception> 
#include <string>
using namespace std;
class ExceptionNoValida : public exception
{
public:
	const char* what() const throw();
};

