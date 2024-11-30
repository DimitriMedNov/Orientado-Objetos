#pragma once
#include <exception>
using namespace std;
class DatoIncorrecto : public exception
{
public:
	const char* what() const throw();
};
