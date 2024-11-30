#include <iostream>
using namespace std;

class Punto {
//private:
    float x, y;
    //Para los contructores hay que delarar explicitamente el nivel de acceso publico
public:
    Punto() {
        x = 0;
        y = 0;
    }
    Punto (float vx, float vy) {
        cout << "(x , y)" << " se encunetran en: " << "( " << vx << " , " << vy << " )" << endl;
        x = vx;
        y = vy;
    }
    void trasladar(float dx, float dy) {
        //x += dx; //equivale a poner x = x + dx;
        //y += dy; //equivale a poner y = y + dy;
        //cout << "(x , y)" << " se encunetran en: " << "( " << dx << " , " << dy << " )" << endl;
        //cout << dx << endl;
        //cout << dy << endl; // ESTE LO OMITI PORQUE NO  ME JALABA LA SUMA ASI QUE HIZE OTRO VOID COMO = "trasladar2" Y ESE SI JALO xd
    }

    void trasladar2(float dx, float dy) {
        x += dx; //equivale a poner x = x + dx;
        y += dy; //equivale a poner y = y + dy;
        cout << "Y Ahora (x,y)" << endl;
        cout << "Se desplazaron a: " <<  "(" << x << " , " << y << ")" << endl;
    }
    /*
    Punto(float x, float y) {
        this->x = x;
        this->y = y;
    }
    */
};

int main()
{
    //Declaramos una INSTANCIA de la clase Punto, creamos un Objeto de esa clase
    Punto p1; //este objeto llamara al contructor vacio (sin argumentos)
    Punto p2(3.45f, 8.89f); //este objeto llamara al contructor con argumentos
    float dx, dy;
    cout << "Cuanto quieres que se desplaze X? ";
    cin >> dx;
    cout << "Cuanto quieres que se desplaze Y? ";
    cin >> dy;
    //Supongamos que queremos desplazar el objeto p1
    p1.trasladar(dx, dy);
    p2.trasladar2(dx, dy);
}