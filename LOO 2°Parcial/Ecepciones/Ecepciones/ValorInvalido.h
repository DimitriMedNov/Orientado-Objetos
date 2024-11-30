#pragma once
#include <exception>
using namespace std;
class ValorInvalido : public exception
{
public:
	const char* what() const throw();
};