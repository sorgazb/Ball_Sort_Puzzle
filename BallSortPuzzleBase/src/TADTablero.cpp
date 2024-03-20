/*
 * TADTablero.cpp
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */
#include "TADTablero.h"

void iniciarTablero(TTablero &t, int tamano) {
	t.tamano = tamano;
	int i;
	for (i = 0; i < tamano; i++) {
		iniciar(t.M[i], tamano);
	}
}

void ponerValorTablero(TTablero &t, int bola, int columna) {
	apilar(t.M[columna], bola);
}

int cimaTablero(TTablero t, int columna) {
	return cima(t.M[columna]);
}

void desapilarTablero(TTablero &t, int columna) {
	desapilar(t.M[columna]);
}

int cuantosTablero(TTablero t, int columna) {
	return cuantas(t.M[columna]);
}

bool vaciaTablero(TTablero t, int columna) {
	return estaVacia(t.M[columna]);
}

bool llenaFilaTablero(TTablero t, int columna) {
	return estaLlena(t.M[columna]);
}

bool todasColorColumna(TTablero t, int columna) {
	return todasColor(t.M[columna]);
}

bool estaCompletoPuzzle(TTablero t) {
	int cont = 0;
	for (int i = 0; i < MAX; i++) {
		if (todasColor(t.M[i])) {
			cont++;
		}
	}
	if (cont == MAX)
		return true;
	else
		return false;
}



