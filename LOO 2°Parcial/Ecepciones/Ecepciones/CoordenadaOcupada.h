#pragma once
#include <exception>
using namespace std;
class CoordenadaOcupada : public exception
{
public:
	const char* what() const throw();
};
