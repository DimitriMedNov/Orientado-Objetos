#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

struct Punto2D {
    float x, y;
};

void randomsImpresion(int cordenadas, Punto2D* Puntos2D) {
    //int aleatorio;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "   |   Puntos|     x     |    y    |" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    for (int r = 0; r < cordenadas; r++) {
        //aleatorio = rand();
        //Puntos2D[r].x = (aleatorio % 10) - 10;
        //Puntos2D[r].y = (aleatorio % 10) - 10;
        Puntos2D[r].x = rand() % 21 - 10;
        Puntos2D[r].y = rand() % 21 - 10;
        cout << setw(9) << r + 1 << setw(11) << Puntos2D[r].x << setw(11) << Puntos2D[r].y << endl;
    }
}

void origen(int cordenadas, Punto2D* Puntos2D, int& lamasx, int& lamasy, int& mascortoX, int& mascortoY) {
    float may = 0;
    float men = 100;
    for (int k = 0; k < cordenadas; k++) {
        float distance = sqrt((pow(Puntos2D[k].x, 2)) + (pow(Puntos2D[k].y, 2)));
        if (distance > may) {
            may = distance;
            lamasx = Puntos2D[k].x, lamasy = Puntos2D[k].y;
        }
    }
    for (int a = 0; a < cordenadas; a++) {
        float distancemen = sqrt((pow(Puntos2D[a].x, 2)) + (pow(Puntos2D[a].y, 2)));
        if (distancemen < men) {
            men = distancemen;
            mascortoX = Puntos2D[a].x, mascortoY = Puntos2D[a].y;
        }
    }
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cout << "coordenada alejada al origen: (" << lamasx << "," << lamasy << ")" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
    cout << "coordenada mas cerca al origen: (" << mascortoX << "," << mascortoY << ")" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
}

void unionpuntos(float lamasx, float lamasy, float mascortoX, float mascortoY) {
    float longitud = sqrt(pow((lamasx - mascortoX), 2) + pow((lamasy - mascortoY), 2));
    cout << "La longitud que une los puntos" << endl;
    cout << "(mas alejado y mas cercano al origen es: " << longitud << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
}

void midpoint(float coordenaX, float coordenaY, float coordenaX2, float coordenaY2, float cordenadas) {
    float x = (coordenaX + coordenaX2) / 2, y = (coordenaY + coordenaY2) / 2;
    cout << "El punto medio es: (" << x << "," << y << ")" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
}

int main() {
    srand(time(NULL));
    int alejadoX, alejadoY, mascortoX, mascortoY, cordenadas;
    char continuar;
    do
    {
        cout << "Digite el tamanio el arreglo? ";
        cin >> cordenadas;
        Punto2D* Puntos2D;
        Puntos2D = new Punto2D[cordenadas];
        randomsImpresion(cordenadas, Puntos2D);
        origen(cordenadas, Puntos2D, alejadoX, alejadoY, mascortoX, mascortoY);
        unionpuntos(alejadoX, alejadoY, mascortoX, mascortoY);
        midpoint(Puntos2D[0].x, Puntos2D[0].y, Puntos2D[cordenadas - 1].x, Puntos2D[cordenadas - 1].y, cordenadas);
        cout << "Desea continuar? s/n " << endl;
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
}

/*
int main()
{
    char continuar;
    do
    {
        int puntos2D, aleatorio, mayor, idxmax;
        cout << "Tamanio del arreglo? ";
        cin >> puntos2D;
        //}

        //int main() {
        Punto2D* Cordenadas;
        Cordenadas = new Punto2D[puntos2D];
        srand(time(NULL));
        for (int i = 0; i < puntos2D; i++)
        {
            aleatorio = rand();
            Cordenadas[i].x = (aleatorio % 10) - 10;
        }
        for (int i = 0; i < puntos2D; i++)
        {
            aleatorio = rand();
            Cordenadas[i].y = (aleatorio % 10) - 10;
        }
        cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
        cout << "   |   Puntos|     x     |    y    |" << endl;
        cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

        for (int i = 0; i < puntos2D; i++)
        {
            cout << setw(9) << i + 1 << setw(11) << Cordenadas[i].x << setw(11) << Cordenadas[i].y << endl;
            cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

        }
        cout << "Desea continuar? s/n  ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    void punto(float uno, float dos, float tres, float cuatro, float cordenadas) {
    float x = (uno + tres) / 2;
    float y = (dos + cuatro) / 2;
    cout << "El punto medio es: (" << x << "," << y << ")" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
}

}*/
