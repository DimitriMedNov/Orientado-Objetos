#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class ClaseTemplate
{
private:
    T value;
public:
    ClaseTemplate(T value);
    T getValue();
    void setValue(T val);
    void showType();
};