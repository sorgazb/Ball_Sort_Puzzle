/*
 * prTablero.cpp
 *
 *  Created on: 5 ene. 2021
 *      Author: alumno
 */


#include "prTablero.h"
#include <iostream>
using namespace std;

void pr_iniciarTablero(){
	TTablero t;
	int i;

	cout <<"Inicio - prueba automática de iniciarTablero"<<endl;
	for (i=1;i <= MAXI; i++)
		if (!vaciaTablero(t,i) != 0)
			cout << "Error al iniciar la torre "<<i;

	cout <<"Fin - prueba iniciarTablero"<<endl<<endl;

}


void pr_ponerValor_cima_cuantosTablero(){
	TTablero t;
	int i,j;

	cout <<"Inicio - prueba automática de ponerValor_cima_cuantosTablero"<<endl;
	for (i=1;i <= MAXI; i++){
		for (j=1;j <= i ; j++){
			ponerValorTablero(t,j,i);
		}
	}
	for (i=1;i <= MAXI; i++){
			if (cimaTablero(t,i) != i || cuantosTablero(t,i)!=i)
					cout << "Error al ponerValorTablero "<<i<<endl;


		}
	cout <<"Fin - prueba ponerValorTablero"<<endl<<endl;

}



void pr_desapilar_cima_cuantosTablero(){

		TTablero t;
		int i,j;

		cout <<"Inicio - prueba automática de desapilar_cima_cuantosTablero"<<endl;
		for (i=1;i <= MAXI; i++){
			for (j=1;j <= MAXI ; j++){
				ponerValorTablero(t,j*i,i);

			}
		}
		for (i=1;i <= MAXI; i++){
			for (j=1; j <= i ; j++){
				desapilarTablero (t,i);
			}
		}

		if (cimaTablero(t,1) != 2 || cuantosTablero(t,1)!=2)
				cout << "Error en el tablero 1"<<endl;
		if (cimaTablero(t,2) != 2 || cuantosTablero(t,2)!=1)
				cout << "Error en el tablero 2"<<endl;
		if (!vaciaTablero(t,3))
				cout << "Error en el tablero 3"<<endl;


		cout <<"Fin - prueba desapilar_cima_cuantosTablero"<<endl<<endl;

}




void pr_pruebasTablero(){
	cout <<"INICIO PRUEBAS TORRES"<<endl;
	pr_iniciarTablero();
	pr_ponerValor_cima_cuantosTablero();

	pr_desapilar_cima_cuantosTablero();

	cout <<"FIN PRUEBAS TABLERO"<<endl;
}

