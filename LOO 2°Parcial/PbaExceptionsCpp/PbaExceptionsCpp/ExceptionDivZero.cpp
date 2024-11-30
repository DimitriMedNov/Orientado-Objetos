#include "ExceptionDivZero.h"

const char* ExceptionDivZero::what() const throw() {
    return "Hubo un error de division entre cero...";
}
