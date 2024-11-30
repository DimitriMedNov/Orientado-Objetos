#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

struct Punto2D {
    float x, y;
};

void aleatorio(int cordenadas, Punto2D* datos) {
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "   |   Puntos|     x     |    y    |" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    for (int r = 0; r < cordenadas; r++) {
        //aleatorio = rand();
        datos[r].x = rand() % 21 - 10;
        datos[r].y = rand() % 21 - 10;
        cout << setw(9) << r + 1 << setw(11) << datos[r].x << setw(11) << datos[r].y << endl;
    }
}
void alejados(int cordenadas, Punto2D* datos, int& lx, int& ly) {
    float mayor = 0;
    for (int i = 0; i < cordenadas; i++) {
        float d = sqrt((pow(datos[i].x, 2)) + (pow(datos[i].y, 2)));
        if (d > mayor) {
            mayor = d;
            lx = datos[i].x;
            ly = datos[i].y;
        }
    }
    cout << "La coordenada mas alejada al origen es: (" << lx << "," << ly << ")" << endl;
}
void cortos(int cordenadas, Punto2D* datos, int& cortox, int& cortoy) {
    float menor = 100;
    for (int i = 0; i < cordenadas; i++) {
        float d = sqrt((pow(datos[i].x, 2)) + (pow(datos[i].y, 2)));
        if (d < menor) {
            menor = d;
            cortox = datos[i].x;
            cortoy = datos[i].y;
        }
    }
    cout << "La coordenada mas cerca al origen es: (" << cortox << "," << cortoy << ")" << endl;
}
void distancia(float lx, float ly, float cx, float cy) {
    float d = sqrt(pow((lx - cx), 2) + pow((ly - cy), 2));
    cout << "La longitud de la linea que une los puntos (" << lx << "," << ly << ") y (" << cx << "," << cy << ") es : " << d << endl;
}
void punto(float 8
    float yc, float xu, float yu, float cordenadas) {
    float x = (xc + xu) / 2;
    float y = (yc + yu) / 2;
    cout << "El punto medio entre el Punto 1 y el Punto " << cordenadas << " es: (" << x << "," << y << ")" << endl;
}


int main() {
    srand(time(NULL));
    int alx, aly, cortox, cortoy;
    int cordenadas;
    char continuar = 's';
    while (continuar == 's' || continuar == 'S')
    {
        cout << "Tamanio del arreglo? ";
        cin >> cordenadas;
        Punto2D* datos;
        datos = new Punto2D[cordenadas];
        aleatorio(cordenadas, datos);
        alejados(cordenadas, datos, alx, aly);
        /*cortos(cordenadas, datos, cortox, cortoy);
        distancia(alx, aly, cortox, cortoy);
        punto(datos[0].x, datos[0].y, datos[cordenadas - 1].x, datos[cordenadas - 1].y, cordenadas);*/
        cout << "Desea continuar? s/n " << endl;
        cin >> continuar;
    }
}