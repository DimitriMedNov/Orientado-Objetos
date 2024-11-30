#pragma once
#include <exception> 
using namespace std;
class ExceptionDivZero : public exception {
public:
    const char* what() const throw();
};
