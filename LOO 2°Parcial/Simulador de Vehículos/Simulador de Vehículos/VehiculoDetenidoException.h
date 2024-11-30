#pragma once
#include <exception> 
#include <string>
using namespace std;
class VehiculoDetenidoException : public exception
{
public:
	const char* what() const throw();
};
