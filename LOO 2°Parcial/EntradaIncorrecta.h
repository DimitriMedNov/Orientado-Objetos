#ifndef UNTITLED_ENTRADAINCORRECTA_H
#define UNTITLED_ENTRADAINCORRECTA_H

#pragma once
#include <exception>
using namespace std;
class EntradaIncorrecta : public exception
{
public:
    const char* what() const throw();
};

#endif //UNTITLED_ENTRADAINCORRECTA_H
