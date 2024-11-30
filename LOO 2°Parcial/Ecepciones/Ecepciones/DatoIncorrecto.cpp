#include "DatoIncorrecto.h"
const char* DatoIncorrecto::what() const throw() {
	return "Uys, al parecer pusiste una letra o un caracter no permitido o algun numero con decimales, recuerda que solo puedes poner numeros sin decimales y ya que necesitan ser enteros recuerdalo no es tan dificil.";
}