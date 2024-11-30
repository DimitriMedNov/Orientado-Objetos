#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name, secondname, mail;
public:
    Person() {
        this->name = "*Sin informacion previa*";
        this->secondname = "*Sin informacion previa*";
        this->mail = "*Sin informacion previa*";
    }
    Person(string name, string secondname, string mail) {
        this->name = name;
        this->secondname = secondname;
        this->mail = mail;
    }
    void persona(string nombre, string apellido, string correo) {
        name = nombre;
        secondname = apellido;
        mail = correo;
    }
    void imprimir(void) {
        cout <<"Nombre: "+ name + "\n" + "Apellido: " + secondname + "\n" + "Correo: " + mail + "\n" << endl;
    }
};

class Meeting {
private:
    int day, month, year, number, h, m;
public:
    Meeting() {
        this->day = 0;
        this->month = 0;
        this->year = 0000;
        this->h = 0;
        this->m = 0;
        this->number = 0000000000;
    }
    Meeting(int day, int month, int year, int number, int h, int m) {
        this->day = day;
        this->month = month;
        this->year = year;
        this->number = number;
        this->h = h;
        this->m = m;
    }
    void cita(int dia, int mes, int año, int numero, int hora, int minutos) {
        day = dia;
        month = mes;
        year = año;
        number = numero;
        h = hora;
        m = minutos;
    }
    string Imprimir() {
        string daystr = "0";
        daystr = to_string(this->day);

        string monthstr = "0";
        monthstr = to_string(this->month);

        string Yearstr = "0";
        Yearstr = to_string(this->year);

        string numberstr = "0";
        numberstr = to_string(this->number);

        string Hrstr = "0";
        Hrstr = to_string(this->h);

        string Minstr = "0";
        Minstr = to_string(this->m);

        string str = ("Dia: " + daystr + "\n" + "Mes: " + monthstr + "\n" + "Año: " + Yearstr + "\n" + "Numero Telefonico: " + numberstr + "\n" + "Hora: " + Hrstr + ":" + Minstr);
        return str;
    }
    /*
    void imprimir(void) {
        cout << "Dia: " + day + "\n" + "Mes: " + month + "\n" + "Año: " + year + "\n" + "Numero Telefonico: " + number + "\n" + "Hora: " + h + ":"+ m + "\n" << endl;
    }*/
};

int main()
{
    //Clase Person
    Person p1;
    cout << "Persona 1: " << endl;
    p1.imprimir();
    Person p2;
    string nombre, apellido, correo;
    cout << "Cual es el nombre de la persona? ";
    cin >> nombre;
    cout << "Cuales son sus apellidos? ";
    cin >> apellido;
    cout << "Cual es su correo? ";
    cin >> correo;
    cout << endl;
    cout << "Persona 2: " << endl;;
    p2.persona(nombre, apellido, correo);
    p2.imprimir();

    //Clase Person
    cout << "Meeting 1: " << endl;
    Meeting c2;
    int dia, mes, año, numero, hora, minutos;
    cout << "Que dia se veran? ";
    cin >> dia;
    cout << "En que mes se veran? ";
    cin >> mes;
    cout << "De que año? ";
    cin >> año;
    cout << "Cual es el numero su numero? ";
    cin >> numero;
    cout << "(Esta parte coloque solamente la hora sin los minutos ya sea en formato 24 o 12 hrs)" << endl;
    cout << "A que hora? ";
    cin >> hora;
    cout << "Especifique los minutos? ";
    cin >> minutos;
    c2.cita(dia, mes, año, numero, hora, minutos);
    c2.Imprimir();
    //Clase Meeting
}