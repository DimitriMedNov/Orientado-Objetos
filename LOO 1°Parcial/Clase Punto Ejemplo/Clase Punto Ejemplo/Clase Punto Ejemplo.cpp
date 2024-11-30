#include <iostream>


using namespace std;

class Punto {
private:
    float x, y;
    // Para los metodos de constructores hay que declarar explicitamente el nivel de acceso publico
public:
    Punto() {
        x = 0;
        y = 0;
    }
    Punto(float vx, float vy) {
        x = vx;
        y = vy;
    }
    /*
   Punto(float x, float y) {
       this->x = x;
       this->y = y;
   }
   */
    void transladar(float dx, float dy) {
        x += dx;
        y += dy;
    }
    void imprimir(void) {
        cout << "(" << x << "," << y << ")" << endl;
    }
    float ontenerX(void) {
        return x;
    }
    float ontenerY(void) {
        return y;
    }
    void AsignarX(float vx) {
        x = vx;
    }
    void AsignarY(float vy) {
        y = vy;
    }
};

void imprimirExterna(Punto p) {
    cout << "(" << p.ontenerX() << "," << p.ontenerY() << ")" << endl;
}

int main()
{
    //Declaramos una INSTANCIA de la clase punto, es decir, creamos un OBJETO de la clase
    Punto p1; //llamar a la clase: NombreClase nombrepametro; este objeto llamara al constructor vacio (sin argumentos)
    Punto p2(3.45f, 8.9f); // este objeto llamara al constructor con argumentos; se usa la f cuando se escribe un numero decimal pra confirmar que es float y no double
    float dx, dy;
    cout << "Cuanto quieres de desplazamineto en x? ";
    cin >> dx;
    cout << "Cuanto quieres de desplazamineto en y? ";
    cin >> dy;
    //Supongamos que queremos desplazar el objeto p1
    p1.transladar(dx, dy);
    p2.transladar(dx, dy);
    cout << "X,Y se encuentran en: " << endl;;
    p1.imprimir();
    cout << "Ahora X,Y se desplazaron ha: " << endl;;
    p2.imprimir ();
    cout << "Funcion externa" << endl;
    imprimirExterna(p2);
    cout << "Funcion con Set  (x,y) valen ahora" << endl;
    p1.AsignarX(100);
    p1.AsignarY(469);
    p1.imprimir();

    Punto* p3;
    p3 = &p1;
    cout << "Las coordenadas de p3 son: "; p3->imprimir();
    p3 = &p2;
    cout << "Las coordenadas de p3 son: "; p3->imprimir();
    p3 = new Punto();
    cout << "Las coordenadas de p3 son: "; p3->imprimir();
    p3 = new Punto(-100, 746);
    cout << "Las coordenadas de p3 son: "; p3->imprimir();
    p3 = new Punto(p2);
    cout << "Las coordenadas de p3 son: "; p3->imprimir();
}