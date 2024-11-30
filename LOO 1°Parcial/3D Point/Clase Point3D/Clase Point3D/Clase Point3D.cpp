// Clase Point3D.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cmath>
using namespace std;

class Point3D {
private:
    float x, y, z;
    float rx, ry, rz;
public:
    Point3D() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
        this->rx = 0;
        this->ry = 0;
        this->rz = 0;
    }
    Point3D(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void transladar(float dx, float dy, float dz) {
        x += dx;
        y += dy;
        z += dz;
    }
    void angulos(float ax, float ay, float az) {
        rx = ((cos(y * 3.1416 / ay)) - (sin(z * 3.1416 / az))) / ((sin(y * 3.1416 / ay)) + (cos(z * 3.1416 / az)));
        ry = ((cos(z * 3.1416 / az)) - (sin(x * 3.1416 / ax))) / ((sin(z * 3.1416 / az)) + (cos(x * 3.1416 / ax)));
        rz = ((cos(x * 3.1416 / ax)) - (sin(y * 3.1416 / ay))) / ((sin(x * 3.1416 / ax)) + (cos(y * 3.1416 / ay)));
    }
    /*
        rx = ((cos(y * 3.1416 / ay)) - (sin(z * 3.1416 / az))) / ((sin(y * 3.1416 / ay)) + (cos(z * 3.1416 / az)));

    */
    void imprimir(void) {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
    }
    void printRotacion(void) {
        cout << "(" << rx << "," << ry << "," << rz << ")" << endl;
    }
};

//Proff aun no domino separar todo  en cpp :(

int main()
{
    Point3D p1;
    cout << "X, Y, Z sin valores: " << endl;;
    p1.imprimir();
    cout << endl;
    Point3D p2(3.45f, 8.9f, 8.36f); 
    cout << "X, Y, Z se encuentran en: " << endl;;
    p2.imprimir();
    cout << endl;
    float dx, dy, dz;
    float ax, ay, az;
    cout << "Cuanto quieres de desplazamineto en x? ";
    cin >> dx;
    cout << "Cuanto quieres de desplazamineto en y? ";
    cin >> dy;
    cout << "Cuanto quieres de desplazamineto en z? ";
    cin >> dz;
    cout << "Cual es el angulo de x? ";
    cin >> ax;
    cout << "Cual es el angulo de y? ";
    cin >> ay;
    cout << "Cual es el angulo de z? ";
    cin >> az;
    p2.transladar(dx, dy, dz);
    p2.angulos(ax, ay, az);
    cout << endl;
    cout << "Ahora X, Y, Z se desplazaron ha: " << endl;;
    p2.imprimir();
    cout << "Ahora X, Y, Z se rotaron ha: " << endl;;
    p2.printRotacion();
}

