#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date();
    Date(int year, int month, int day);
    void increaseDay(void);      
    void increaseMonth(void);
    void increaseYear(void);
    void changeDate(int year, int month, int day);
    string toString();
    void setDay(int day);
    int getDay(void);
    void setMonth(int month);
    int getMonth(void);
    void setYear(int year);
    int getYear(void);

};
