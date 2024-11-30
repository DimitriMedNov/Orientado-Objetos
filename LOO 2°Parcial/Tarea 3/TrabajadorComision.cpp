#include "TrabajadorComision.h"

TrabajadorComision::TrabajadorComision():Empleado() {
    this->salarioBase = 0;
    this->porcentajeComision = 0;
    this->montoVentas = 0;
}
TrabajadorComision::TrabajadorComision(string nombre, double salario, double comision, double ventas): Empleado(nombre){
    this->salarioBase = salario > 0 ? salario : 0;
    this->porcentajeComision = comision >= 0 && comision <= 1 ? comision : 0;
    this->montoVentas = ventas > 0 ? ventas : 0;
}
double TrabajadorComision::getSalarioBase(void){
    return this->salarioBase;
}
void TrabajadorComision::setSalarioBase(double salario){
    this->salarioBase = salario > 0 ? salario : 0;
}
double TrabajadorComision::getPorcentajeComision(void){
    return this->porcentajeComision;
}
void TrabajadorComision::setPorcentajeComision(double comision){
    this->porcentajeComision = comision >= 0 && comision <= 1 ? comision : 0;
}
double TrabajadorComision::getmontoVentas(void){
    return this->montoVentas;
}
void TrabajadorComision::setmontoVentas(double ventas){
    this->montoVentas = ventas > 0 ? ventas : 0;
}
double TrabajadorComision::pagoDiario(void){
    return this->salarioBase + this->porcentajeComision * this->montoVentas;
}
void TrabajadorComision::imprimir(void){
    cout << "Empleado tipo TRABAJADOR POR COMISION" << endl;
    cout << "NOMBRE: " << this->nombre << "\nSALARIO BASE: " << this->salarioBase << "\nPORCENTAJE COMISIÓN: " << this->porcentajeComision * 100 <<"%"<< "\nMONTO VENTAS: " << this->montoVentas << "\nPAGO DIARIO: " << this->pagoDiario() << endl;
}

