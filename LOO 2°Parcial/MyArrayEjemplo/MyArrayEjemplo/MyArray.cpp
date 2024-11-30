#include "MyArray.h"

MyArray::MyArray() {
	this->tam = 5;
	arr = new int[this->tam];
}

MyArray::MyArray(int tam) {
	this->setSize(tam);
	arr = new int[this->tam];
}

void MyArray::setSize(int tam) {
	this->tam = (tam > 0 ? tam : 5);
	if (tam <= 0)
		cout << "ERROR: se recibio un tamano invalido. Se usa tamano 5." << endl;
}

int MyArray::getSize(void) {
	return this->tam;
}

int MyArray::getElementAtIndex(int indx) {
	if (indx >= 0 && indx < this->tam) {
		return arr[indx];
	}
	cout << "ERROR: se solicita un indice del arreglo que no existe. Se regresa 0." << endl;
	return 0;
}

void MyArray::print(bool vertical) {
	if (vertical)
		for (int i = 0; i < this->tam; i++)
			cout << this->arr[i] << endl;
	else
		for (int i = 0; i < this->tam; i++)
			cout << setw(4) << this->arr[i];
}

bool MyArray::find(int value) {
	for (int i = 0; i < this->tam; i++)
		if (this->arr[i] == value)
			return true;
	return false;
}

int MyArray::getIndex(int value) {
	for (int i = 0; i < this->tam; i++)
		if (this->arr[i] == value)
			return i;
	cout << "ERROR: El elemento no se encontro. Se devuelve -1." << endl;
	return -1;
}

MyArray MyArray::ordered(void) {
	MyArray newArr(this->tam);
	//copio el arreglo
	for (int i = 0; i < this->tam; i++)
		newArr.setElementAtIndex(i, this->arr[i]);
	int temp;
	//ahora ordeno el nuevo arreglo
	for (int i = 1; i < this->tam; i++) {
		for (int j = 0; j < this->tam - i; j++) {
			if (newArr.getElementAtIndex(j) > newArr.getElementAtIndex(j + 1)) {
				temp = newArr.getElementAtIndex(j);
				newArr.setElementAtIndex(j, newArr.getElementAtIndex(j + 1));
				newArr.setElementAtIndex(j + 1, temp);
			}
		}
	}
}

void MyArray::setElementAtIndex(int indx, int value) {
	if (indx >= 0 && indx < this->tam) {
		this->arr[indx] = value;
	}
	cout << "ERROR: Indice no valido para asignar valor. No se asigna nada" << endl;
}

void MyArray::fillRandom(void) {
	for (int i = 0; i < this->tam; i++) {
		this->arr[i] = rand() % 99 + 1;
	}
}