#include "TanqueVacioException.h"
const char* TanqueVacioException::what() const throw() {
	return "Se ha vaciado el tanque.";
}
