/*
 * TADPila.h
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */
#ifndef TADPILA_H_
#define TADPILA_H_
const int MAX=4;

typedef int TVector[MAX];

struct TPila{
	TVector v;
	int ocupadas;
	int maxbolas;
};

/*
 * PRE:{}
 * POST:{inicia la pila p vacia}
 * Complejidad:0(1)
 */
void iniciar(TPila &p,int tamanio);

/*
 * PRE:{p debe estar correctamente iniciada}
 * POST:{devuelve true si la pila está llena y false en caso contrario}
 * Complejidad:0(n)
 */
bool estaLlena(TPila p);

/*
 * PRE:{p debe estar correctamente iniciada}
 * POST:{devuelve true si la pila está vacia y false en caso contrario}
 * Complejidad:0(1)
 */
bool estaVacia(TPila p);

/*
 * PRE:{p debe estar correctamente iniciada y no estar llena}
 * POST:{pone el valor dato en la cima de la pila}
 * Complejidad:0(1)
 */
void apilar(TPila &p,int color);

/*
 * PRE:{p debe estar correctamente iniciada y no estar vacia}
 * POST:{borra el valor almacenado en la cima de la pila}
 * Complejidad:0(1)
 */
void desapilar(TPila &p);

/*
 * PRE:{p debe estar correctamente iniciada y no estar vacia}
 * POST:{devuelve el valor almacenado en la cima de la pila}
 * Complejidad:
 */
int cima(TPila p);

/*
 * PRE:{p debe estar correctamente iniciada}
 * POST:{devuelve el numero de elementos de la pila}
 * Complejidad:0(n)
 */
int cuantas(TPila p);

/*
 * PRE:{p debe estar correctamente iniciada}
 * POST:{devuelve true si todas las bolas son del mismo color y false en caso contrario}
 * Complejidad:0(n)
 */
bool todasColor(TPila p);






#endif /* TADPILA_H_ */
