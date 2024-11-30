#include "VehiculoDetenidoException.h"
const char* VehiculoDetenidoException::what() const throw() {
	return "El auto ya esta detenido.";
}