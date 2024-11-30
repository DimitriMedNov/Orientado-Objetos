//
// Created by mmcan on 15/05/2021.
//

#include "EntradaIncorrecta.h"

const char* EntradaIncorrecta::what() const throw() {
    return "Ups, al parecer pusiste una letra o un caracter no permitido o algun numero con decimales. Intenta otra vez";
}
