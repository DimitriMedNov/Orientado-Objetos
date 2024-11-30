#include "ClaseTemplate.h"

template <class T>
ClaseTemplate<T>::ClaseTemplate(T value) {
    this->value = value;
}

template <class T>
T ClaseTemplate<T>::getValue() {
    return this->value;
}

template <class T>
void ClaseTemplate<T>::setValue(T val) {
    this->value = val;
}

template <class T>
void ClaseTemplate<T>::showType()
{
    cout << "Type:" << typeid(this->value).name() << endl;
    cout << "Value: " << value << endl;
}