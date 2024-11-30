#pragma once
#include <exception>
using namespace std;
class FueraRango : public exception
{
public:
	const char* what() const throw();
};