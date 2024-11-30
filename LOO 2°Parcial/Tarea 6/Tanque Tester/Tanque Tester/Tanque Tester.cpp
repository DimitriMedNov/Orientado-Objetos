#include <iostream>
#include <string>
using namespace std;
#include "Tanque.h"

int main()
{
	double carga = 0;
	Tanque t = Tanque(100, 3, "Gasolina");
	while (t.getCargaActual() < t.getCapacidadActual()) {
		cout << "Cuanto desea agregar al tanque?" << endl;
		cin >> carga;
		t.agregarCarga(carga);
	}
	while (t.getCargaActual() > 0) {
		cout << "Cuanto desea retirar del tanque?" << endl;
		cin >> carga;
		t.retirarCarga(carga);
	}
}