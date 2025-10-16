#include "pch.h"
#include <iostream>

const int INIT = 4;

void Vektor::vektor_new(Vektor& v) {
	v.elementi = new int[INIT];
	v.logickaVelicina = 0;
	v.fizickaVelicina = INIT;
}

void vektor_delete(Vektor& v) {
	delete[] v.elementi;
	v.elementi = nullptr;
	v.logickaVelicina = 0;
	v.fizickaVelicina = 0;

}

void vektor_push_back(Vektor& v, int vrijednost) {
	if (v.logickaVelicina == v.fizickaVelicina) {
		int noviKapacitet = v.fizickaVelicina * 2;
		int* noviNiz = new int[noviKapacitet];
	}
	v.elementi[v.logickaVelicina++] = vrijednost;
}