//
// Created by mmcan on 15/05/2021.
//

#ifndef UNTITLED_LUGARINVALIDO_H
#define UNTITLED_LUGARINVALIDO_H


#pragma once
#include <exception>
using namespace std;
class LugarInvalido : public exception
{
public:
    const char* what() const throw();
};

#endif //UNTITLED_LUGARINVALIDO_H
