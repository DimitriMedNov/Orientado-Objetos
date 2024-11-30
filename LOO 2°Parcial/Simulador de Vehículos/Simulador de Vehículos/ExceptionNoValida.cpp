#include "ExceptionNoValida.h"
const char* ExceptionNoValida::what() const throw() {
	return "No es un valor valido para modificar la velocidad.";
}