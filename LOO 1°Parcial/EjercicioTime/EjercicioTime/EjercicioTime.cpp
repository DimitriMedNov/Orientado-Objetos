// EjercicioTime.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
class Time {
private:
    int h, m, s;
public:
    Time() {
        this->h = 0;
        this->m = 0;
        this->s = 0;
    }
    Time(int h, int m, int s) {
        this->setHour(h);
        this->setMinute(m);
        this->setSecond(s);
    }
    void show(bool formato) {
        //si formato es true, sera impreso en formato 12hrs
        //pero si es false, sera impreso en formato 24hrs
        if (formato)
        {
            //aqui imrpimo formato 12hrs
            if (this->h <= 12)
                cout << (this->h < 10 ? "0" : "") << this->h << ":" << (this->m < 10 ? "0" : "") << this->m << ":" << (this->s < 10 ? "0" : "") << this->s << (this->h == 12 ? " PM" : " AM") << endl;
            else
                cout << ((this->h - 12 < 10) ? "0" : "") << this->h - 12 << ":" << (this->m < 10 ? "0" : "") << this->m << ":" << (this->s < 10 ? "0" : "") << this->s << " PM" << endl;
            //cout << ":" << (this->m < 10 ? "0" : "") << this->m << ":" << (this->s < 10 ? "0" : "") << this->s << endl;
        }
        else
        {
            //aqui imprimo formato 24hrs
            cout << (this->h < 10 ? "0" : "") << this->h << ":" << (this->m < 10 ? "0" : "") << this->m << ":" << (this->s < 10 ? "0" : "") << this->s << endl;
        }
    }

    void setHour(int h) {
        //this->h<0 || h>23 ? 0 : h;
        if (h < 0 || h>23)
        {
            this->h = 0;
        }
        else
            this->h = h;
    }
    void setMinute(int m) {
        this->m = m >= 0 && m < 60 ? m : 0;
    }
    void setSecond(int s) {
        this->s = s < 0 || s > 59 ? 0 : s;
    }
    int getHour(void) {
        return this->h;
    }
    int getMinute(void) {
        return this->m;
    }
    int getSecond(void) {
        return this->s;
    }
};

int main()
{
    Time t1;
    cout << "********Objeto time t1 en 12hrs" << endl;
    t1.show(true);
    cout << "********Objeto time t1 en 24hrs" << endl;
    t1.show(false);
    Time t2(12, 56, 28);
    cout << "********Objeto time t1 en 12hrs" << endl;
    t2.show(true);
    cout << "********Objeto time t1 en 24hrs" << endl;
    t2.show(false);
    cout << "/////////////////////////////////////" << endl;
    Time* t3 = new Time();
    Time* t4 = new Time(23, 45, 6);
    cout << "********Objeto time t3 en 12hrs" << endl;
    t3->show(true);
    cout << "********Objeto time t3 en 24hrs" << endl;
    t3->show(false);
    cout << "********Objeto time t4 en 12hrs" << endl;
    t4->show(true);
    cout << "********Objeto time t4 en 24hrs" << endl;
    t4->show(false);
}

