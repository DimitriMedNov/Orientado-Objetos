#pragma once
#include "Caracteristicas.h"
class Magazine : public Caracteristicas
{
protected:
	int volumen;
public:
	Magazine();
	Magazine(string title, int ci, int year, int volumen);
	void setVol(int volumen);
	int getVol(void);
	void setRevista(string title, int ci, int year, int volumen);

	void showDetails(void);
};

