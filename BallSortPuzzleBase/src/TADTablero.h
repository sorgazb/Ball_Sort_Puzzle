/*
 * TADTablero.h
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */
#ifndef TADTABLERO_H_
#define TADTABLERO_H_
#include "TADPila.h"

const int MAXI=6;
typedef TPila TMatriz[MAXI];

struct TTablero{
	TMatriz M;
	int tamano;
};

/*
 *PRE:{}
 *POST:{inicia la estructura de las torres, con todas las pilas vacías}
 *Complejidad:0(1)
 */
void iniciarTablero(TTablero &t,int tamanio);

/*
 *PRE:{t debe estar correctamente iniciada y la pila que ocupa la posición tablero no estar llena,1<=bola<=TAM}
 *POST:{pone el valor disco en la cima de la pila que ocupa la posición tablero}
 *Complejidad:0(1)
 */
void ponerValorTablero(TTablero &t, int bola, int columna);

/*
 *PRE:{t debe estar correctamemte iniciada y la pila que ocupa la posición tablero no estar llena,1<=tablero<=6}
 *POST:{devuelve el valor almacenado en la cima de la pila que ocupa la posición tablero}
 *Complejidad:0(1)
 */
int cimaTablero(TTablero t, int columna);

/*
 *PRE:{t debe estar correctemente iniciada y la pila que ocupa la posición tablero no estar vacia, 1<=tablero<=6}
 *POST:{borra el valor almacenado en la cima de la pila que ocupa la posicion tablero}
 *Complejidad:0(1)
 */
void desapilarTablero(TTablero &t, int tcolumna);

/*
 *PRE:{t debe estar correctamente iniciada, 1<=tablero<=6}
 *POST:{devuleve el numero de elementos de la pila que ocupa la posicion tablero}
 *Complejidad:0(1)
 */
int cuantosTablero(TTablero t, int columna);

/*
 *PRE:{t debe estar correctamente iniciada, 1<=tablero<=6}
 *POST:{devuelve true si la pila que ocupa la posición torre está vacia y false en caso contrario}
 *Complejidad:0(1)
 */
bool vaciaTablero(TTablero t, int columna);

/*
 * PRE:{t debe estar correctamente iniciada}
 * POST:{devuelve true si la pila está vacia y false en caso contrario}
 * Complejidad:0(1)
 */
bool llenaFilaTablero(TTablero t, int columna);

/*
 * PRE:{t debe estar correctamente iniciada}
 * POST:{devuelve true si todas las bolas son del mismo color y false en caso contrario}
 * Complejidad:0(1)
 */
bool todasColorColumna(TTablero t, int columna);

/*
 * PRE:{t debe estar correctamente iniciada}
 * POST:{devuelve true si el juego se ha completado y false en caso contrario}
 * Complejidad:0(1)
 */
bool estaCompletoPuzzle(TTablero t);




#endif /* TADTABLERO_H_ */
