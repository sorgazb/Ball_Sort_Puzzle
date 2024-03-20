/*
 * prPila.h
 *
 *  Created on: 5 ene. 2021
 *      Author: alumno
 */

#ifndef PRPILA_H_
#define PRPILA_H_
#include "TADPila.h"




/*
 *  Prueba automática de la operación estaVacía
 *  DESCRIPCIÓN: se crea una pila y se comprueba que "estaVacia" devuelve true se añade un valor a la pila y se comprueba que "estaVacia" devuelve false
 *  en caso contrario se escriben mensajes de error
 */
void pr_estaVacia ();

/*
 *  Prueba automática de la operación estaLlena
 *  DESCRIPCIÓN: se crea una pila y se comprueba que "estaLlena" devuelve false se almacenan en ella valores de 1 a 6 y se comprueba que "estaLlena" devuelve true
 *  se elimina un valor de la pila y se comprueba que "estaLlena" devuelve false
 *  en caso contrario se escriben mensajes de error
 */
void pr_estaLlena ();

/*
 * Prueba supervisada de la operación apilar
 * DESCRIPCIÓN: se crea una pila y	se almacenan en ella valores de 1 a 6, en este orden
 * El resultado al mostrar la pila será la secuencia de elementos 1, 2, 3, 4, 5, 6.
 */
void pr_apilar ();


/*
 * Prueba automática de la moperación desapilar
 * DESCRIPCIÓN: se crea una pila y se almacenan en ella valores de 1 a 4, en este orden
 * 		        se ejecuta desapilar y después se comprueba que la cima es 3
 * 		        se ejecuta desapilar y después se comprueba que la cima es 2
 * 		        se ejecuta desapilar y después se comprueba que la cima es 1
 * 		        se ejecuta desapilar y se comprueba que la pila está vacía
 * 	            en caso contrario se escriben mensajes de error
 *
*/
void pr_desapilar();


/*
 * Prueba automática de la operación cima
 * DESCRIPCIÓN: se crea una pila
 * 		        se apila el valor 1 y después se comprueba que cima devuelve 1
 * 		        se apila el valor 2 y después se comprueba que cima devuelve 2
 * 		        se apila el valor 3 y después se comprueba que cima devuelve 3
 * 		        en caso contrario se escriben mensajes de error
*/
void pr_cima ();




/*
 * Prueba automática de la operación cuantos
 * DESCRIPCIÓN: se crea una pila y después se comprueba que cuantos devuelve 0
 * 		        se apila un valor cualquiera y después se comprueba que cuantos devuelve 1
 * 		        se apila otro valor y después se comprueba que cuantos devuelve 2
 * 		        se ejecuta desapilar y después se comprueba que cuantos devuelve 1
 * 		        se ejecuta desapilar y después se comprueba que cuantos devuelve 0
 *              en caso contrario se escriben mensajes de error
 *
*/
void pr_cuantos();


/*
 * DESCRIPCIÓN: Se ejecuta el conjunto de todas las pruebas de la pila
*/
void pr_pruebas_pila () ;






#endif /* PRPILA_H_ */
