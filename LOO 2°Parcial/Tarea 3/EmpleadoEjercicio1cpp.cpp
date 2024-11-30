// EmpleadoEjercicio1cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include"EmpleadoPiezas.h"
#include"Jefe.h"
#include"TrabajadorComision.h"

int main()
{
    Jefe jefe1("Juan Perez", 40000);
    TrabajadorComision trabajador1("Felipe Rodriguez", 5000, 0.3, 10000);
    EmpleadoPiezas empleado1("Fulano de Tal", 8000, 50);
    //mostramos que funciona con cada objeto
    cout<<"************* PROBANDO CON OBJETOS *************"<<endl;
    jefe1.imprimir();
    cout << "--------------------------------" << endl;
    trabajador1.imprimir();
    cout << "--------------------------------" << endl;
    empleado1.imprimir();
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





}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
