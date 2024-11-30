#include "Course.h"
Course::Course(string courseName, string nrc, int cr) {
	this->courseName = courseName;
	this->nrc = nrc; 
	this->cr = cr < 0 ? 0 : cr;
}
void Course::setCourseName(string courseName) { 
	this->courseName = courseName; }
string Course::getCourseName(void) { 
	return this->courseName; }

void Course::setNRC(string nrc) {
	this->nrc = nrc;
}
string Course::getNRC(void) {
	return this->nrc;
}

void Course::setCR(int cr) {
	this->cr = cr < 0 ? 0 : cr;
}
int Course::getCR(void){
	return this->cr;
}

void Course::imprimir(void) {
	cout << "\nMateria: " << this->courseName << "\nNRC: " << this->nrc << "\nCreditos: " << this->cr;
}