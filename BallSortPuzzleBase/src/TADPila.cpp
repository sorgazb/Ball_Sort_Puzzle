/*
 * TADPila.cpp
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */
#include "TADPila.h"

void iniciar(TPila &p, int tamanio) {
	p.ocupadas = 0;
	p.maxbolas = tamanio;
	for (int i = 0; i < tamanio; i++) {
		p.v[i] = 0;
	}
}

bool estaLlena(TPila p) {
	return (p.ocupadas == MAX);
}

bool estaVacia(TPila p) {
	return (p.ocupadas == 0);
}

void apilar(TPila &p, int color) {
	if (!estaLlena(p)) {
		p.v[p.ocupadas] = color;
		p.ocupadas++;
	}
}

void desapilar(TPila &p) {
	if(!estaVacia(p)){
		p.ocupadas--;
	}
}

int cima(TPila p) {
	int bola=-1;
	if(!estaVacia(p))
	 bola=p.v[p.ocupadas];
	return bola;
}

int cuantas(TPila p) {
	int cont = 0;
	if(!estaVacia(p)){
		cont=p.ocupadas;
	}

	return cont;

}

bool todasColor(TPila p) {
	if(estaLlena(p)){
	int color = p.v[0];
		int cont = 0;
		for (int i = 0; i <= p.maxbolas; i++) {
			if (p.v[i] == color) {
				cont++;
			}
		}
		if (cont == p.maxbolas)
			return true;
		else
			return false;
	}
	return false;
}
