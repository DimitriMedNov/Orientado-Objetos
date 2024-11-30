#include <iostream> 
#include "ExceptionDivZero.h"

double divide(int n1, int n2) {
    if (n2 == 0)
        throw ExceptionDivZero();
    return n1 / n2;
}

int main() {
    int a = 10, b = 0;
    double c = 0;

    cout << "******** FORMA 1 ***************" << endl;
    try {
        if (b == 0)
            throw ExceptionDivZero();
        c = a / b;
    }
    catch (ExceptionDivZero e) {
        cout << e.what() << endl;
    }
    cout << "Valor final en c: " << c << endl;



    cout << "******** FORMA 2 ***************" << endl;
    try {
        c = divide(a, b);
    }
    catch (ExceptionDivZero e) {
        cout << e.what() << endl;
    }
    cout << "Valor final en c: " << c << endl;

    return 0;
}