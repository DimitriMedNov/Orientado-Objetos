#include "TanqueLlenoException.h"
const char* TanqueLlenoException::what() const throw() {
	return "Se ha alcanzado el limite de capacidad.";
}
