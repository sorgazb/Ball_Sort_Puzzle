/*
 * prPila.cpp
 *
 *  Created on: 5 ene. 2021
 *      Author: alumno
 */
#include "prPila.h"
#include <iostream>
using namespace std;

void pr_estaVacia() {
	TPila p;
	cout << "Inicio - prueba automática de estaVacia" << endl;
	apilar(p, 6);
	if (estaVacia(p))
		cout << "Error estaVacia" << endl;
	else
		cout << "Correcto estaVacia" << endl;
	cout << "Fin - prueba estaVacia" << endl << endl;
}

void pr_estaLlena() {

	cout << "Inicio - prueba automática de estaLlena" << endl;
	TPila p;
	apilar(p, 1);
	apilar(p, 2);
	apilar(p, 3);
	if (estaLlena(p))
		cout << "Correcto estaLlena" << endl;
	else
		cout << "Error Llena" << endl;

	cout << "Fin - prueba estaLlena" << endl << endl;
}

void pr_apilar() {

	cout << "Inicio - prueba supervisada de apilar" << endl;
	cout << "La pila mostrada debe ser [1, 2, 3, 4, 5, 6]" << endl;
	TPila p;
	apilar(p, 3);
	apilar(p, 2);
	apilar(p, 1);


	cout << "Fin - prueba apilar" << endl << endl;
}

void pr_desapilar() {

	cout << "Inicio - prueba automática de desapilar" << endl;

	TPila p;
	apilar(p, 1);
	desapilar(p);
	if (estaVacia(p))
		cout << "Correcto desapilar" << endl;
	else
		cout << "Error desapilar" << endl;

	cout << "Fin - prueba desapilar" << endl << endl;
}

void pr_cima() {

	cout << "Inicio - prueba automática de cima" << endl;
	TPila p;
	apilar(p, 1);
	if (cima(p) == 1)
		cout << "Correcto cima" << endl;
	else
		cout << "Error cima" << endl;

	cout << "Fin - prueba  cima" << endl << endl;
}

void pr_cuantos() {

	cout << "Inicio - prueba automática de  cuantos" << endl;
	TPila p;
		apilar(p, 1);
		if (cuantas(p) == 1)
			cout << "Correcto cuantos" << endl;
		else
			cout << "Error cuantos" << endl;
	cout << "Fin - prueba  cuantos" << endl << endl;
}

void pr_pruebas_pila() {
	cout << "INICIO PRUEBAS PILA" << endl;
	pr_estaVacia();
	pr_estaLlena();
	pr_apilar();
	pr_desapilar();
	pr_cima();
	pr_cuantos();
	cout<< "FIN PRUEBAS PILA" <<endl;

}


