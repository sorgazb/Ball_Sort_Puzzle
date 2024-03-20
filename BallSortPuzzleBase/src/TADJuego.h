/*
 * TADJuego.h
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */

#ifndef TADJUEGO_H_
#define TADJUEGO_H_
#include <iostream>
#include "TADTablero.h"
#include "entorno.h"

const int MAXJ=12;


typedef int TMatrix[12][12];
struct Juego{
	TTablero T;
	int pilasllenas;
	int pilasvacias;
	int bolasenfila;
	bool config;
	int puntuacion;
};






/*
 *PRE:{}
 *POST:{inicia el juego j vacio}
 *Complejidad:0(1)
 */
void iniciarjuego(Juego &J);

/*
 *PRE:{}
 *POST:{}
 *Complejidad:
 */
//modulo jugar
void jugarjuego(Juego &J);
/*
 *PRE:{}
 *POST:{}
 *Complejidad:
 */
//modulo terminar

void finaljuego(Juego &J);





#endif /* TADJUEGO_H_ */
