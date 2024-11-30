#pragma once
#include <exception> 
#include <string>
using namespace std;
class DemasiadoRapidoException : public exception
{
public:
	const char* what() const throw();
};
