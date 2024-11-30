#pragma once
#include <exception>
#include <string>
using namespace std;
class TanqueVacioException : public exception
{
public:
	const char* what() const throw();
};

