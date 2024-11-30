#include "DemasiadoRapidoException.h"
const char* DemasiadoRapidoException::what() const throw() {
	return "La velocidad es demasiado rapida.";
}