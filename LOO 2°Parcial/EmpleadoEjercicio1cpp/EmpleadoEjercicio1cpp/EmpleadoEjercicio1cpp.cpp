#include <iostream>
#include"EmpleadoPiezas.h"
#include"Jefe.h"
#include"TrabajadorComision.h"
#include "TrabajadorPorHoras.h"

int main()
{
    Jefe jefe1("Juan Perez", 40000);
    TrabajadorComision trabajador1("Felipe Rodriguez", 5000, 0.3, 10000);
    EmpleadoPiezas empleado1("Fulano de Tal", 8000, 50);
    TrabajadorPorHoras emplado2("Rodolfo",68,150);
    //mostramos que funciona con cada objeto
    cout << "************* PROBANDO CON OBJETOS *************" << endl;
    jefe1.imprimir();
    cout << "--------------------------------" << endl;
    trabajador1.imprimir();
    cout << "--------------------------------" << endl;
    empleado1.imprimir();
    cout << "--------------------------------" << endl;
    emplado2.imprimir();
    cout << "--------------------------------" << endl;

    cout << "************* PROBANDO POLIMORFISMO *************" << endl;
    Empleado* empleado;
    empleado = new Jefe(jefe1);
    empleado->imprimir();
    cout << "--------------------------------" << endl;
    empleado = new TrabajadorComision(trabajador1);
    empleado->imprimir();
    cout << "--------------------------------" << endl;
    empleado = new EmpleadoPiezas(empleado1);
    empleado->imprimir();
    cout << "--------------------------------" << endl;
    empleado = new TrabajadorPorHoras(emplado2);
    empleado->imprimir();
}