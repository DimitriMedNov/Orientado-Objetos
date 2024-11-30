#include <iostream> //entrada y salida de datos
#include<ctime> //aleatorios
#include<iomanip> //manipulacion de como quiero mostrar la matriz
#include<cstdlib>

using namespace std;
int matriz[10][5];
int getmayor(int fila, int col);
double getpromedio(int fila, int col);
int getnumpares(int fila, int col);
int getmenor(int fila, int col);
float getfactorial(int menor);
int getnumprimos(int fila, int col);
int cuentamultiplos(int num, int fila, int col);

int main()
{
    char continuar = 's';
    srand(time(NULL));
    double promedio;
    float factorial;
    int mayor,pares, menor, solicitado, multiplos, primos;
    while (continuar == 's' or continuar == 'S') {
        
        for (int fila = 0; fila < 10; fila++) {
            for (int col = 0; col < 5; col++) {
                matriz[fila][col]= 1 + rand() % 301;
                promedio = getpromedio(fila, col);
                mayor = getmayor(fila, col);
                pares = getnumpares(fila, col);
                menor = getmenor(fila, col);
                primos = getnumprimos(fila, col);
            }
        }
        
        cout << "Introduce el numero X del que quieres buscar multiplos: ";
        cin >> solicitado;
        cout << endl;
        factorial = getfactorial(menor);
        for (int fila = 0; fila < 10; fila++) {
            for (int col = 0; col < 5; col++) {
                multiplos = cuentamultiplos(solicitado, fila, col);
            }
        }
        cout << "Matriz" << endl;

        for (int fila = 0; fila < 10; fila++) {
            cout << endl;
            for (int col = 0; col < 5; col++) {
                cout << matriz[fila][col] << "\t";
            }
        }

        cout << endl;
        cout << "El promedio es de: " << promedio << endl;
        cout << "El numero mayor es: " << mayor << endl;
        cout << "El numero de valores pares en la matriz es de: " << pares << endl;
        cout << "El numero menor es: " << menor << endl;
        cout << "El factorial de " << menor << " es: " << factorial << endl;
        cout << "El numero de multiplos de " << solicitado << " es de: " << multiplos << endl;
        cout << "El numero de valores primos es de: " << primos << endl;
        cout << endl;
        cout << "¿Desea imprimir una nueva matriz?S/N";
        cin >> continuar;
    }
}

int getmayor(int fila, int col)
{
    int mayor = matriz[0][0];
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            if (matriz[fila][col]>mayor) {
                mayor = matriz[fila][col];
            }
        }
    }

    return mayor;
}

double getpromedio(int fila, int col)
{
    double suma=0;
    double prom;
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            suma += matriz[fila][col];
        }
    }
    prom = suma / 50;
    return prom;
}

int getnumpares(int fila, int col)
{
    int par = 0;
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            if (matriz[fila][col] % 2 == 0) {
                par ++;
            }
        }
    }

    return par;
}

int getmenor(int fila, int col)
{
    int menor = matriz[0][0];
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            if (matriz[fila][col] < menor) {
                menor = matriz[fila][col];
            }
        }
    }

    return menor;
}

float getfactorial(int menor)
{
    int factorial = 1;
    if (menor > 0) {
        for (int i = menor; i > 0; i--) {
            factorial *= i;
        }
    }
    return factorial;
}

bool esPrimo(int num) {
    int contador = 0;
    for (int n = num - 1; n > 1; n--) {
        if (num % n == 0) {
            contador++;
        }
    }
    if (contador > 0) {
        return false;
    }
    return true;
}

int getnumprimos(int fila, int col)
{
    int primos = 1;
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            if (esPrimo(matriz[fila][col])) {
                primos++;
            }
        }
    }

    return primos;
}


int cuentamultiplos(int num, int fila, int col)
{
    int multiplos=0; 
    for (fila = 0; fila < 10; fila++) {
        for (col = 0; col < 5; col++) {
            if (matriz[fila][col] % num == 0) {
                multiplos++;
            }
        }
    }
    return multiplos;
}

