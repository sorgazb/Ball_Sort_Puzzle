/*
 * TADJuego.cpp
 *
 *  Created on: 4 ene. 2021
 *      Author: alumno
 */
#include "TADJuego.h"

void iniciarjuego(Juego &J){
	int pila = 0;
	int i, pos, color;
	int bolasXPila, puntos, pilas, pilasSin, deDonde;
	TMatrix m;
	if (entornoCargarConfiguracion(pilas, pilasSin, bolasXPila, deDonde, puntos,m)) {
		entornoIniciar(pilas + pilasSin);
		for (i=0; i< pilas+pilasSin; i++){
			entornoPintarPila(i, bolasXPila);
		}
		pos = 0;
		for (i = 0; i <pilas; i++) {
			color = 1;
			for (pos = 0; pos < bolasXPila; pos++) {
				entornoPonerBola(i,m[i][pos], pos, bolasXPila);
				color++;
			}
		}
		entornoMarcarPosicion(pila);
		entornoPonerPuntuacion(puntos);
	}
}


void jugarjuego(Juego &J){
	int tamanio = J.T.tamano;
	int pila = 0;
	int pos;
	int j;
	int bolasXPila;
	int pcursor = 0;
	int posorigen, bolaorigen,posdestino,boladestino,color;
	TipoTecla T;
	bool salir = false;
	int pilas, pilasSin;

	while (!salir) {
		T = entornoLeerTecla();
		switch (T) {

		case TEnter:
			//Seleccionar bola de la cima de una pila y la sube
			if(!vaciaTablero(J.T, pcursor)){
				pos=3;
				color=cimaTablero(J.T, pcursor);
				entornoSeleccionarBola(pila, color);
				entornoPausa(0.5);
				entornoQuitarBola(pila, bolasXPila, pcursor);

			}




			break;

		case TDerecha:
				entornoDesmarcarPosicion(pcursor);
				if (pcursor < (J.pilasllenas + J.pilasvacias) - 1)
					pcursor++;
				else
					pcursor = 0;
				entornoMarcarPosicion(pcursor);
				break;
				case TIzquierda:
					entornoDesmarcarPosicion(pcursor);
					if (pcursor > 0)
						pcursor--;
					else
					    pcursor = (J.pilasllenas + J.pilasvacias) - 1;
					entornoMarcarPosicion(pcursor);
					break;
					case TF1:
						entornoMostrarMensaje("Ayuda una pila más", 1);
						break;
						case TF2:
							entornoMostrarMensaje("Deshacer movimientos", 1);
							break;
							case TSalir:
								salir = true;
								break;
								case TNada:
								break;
		}
	}
	entornoMostrarMensajeFin(" Fin...  ");
	entornoPausa(1.5);
	entornoTerminar();
}


void finaljuego(Juego &J) {
	if (estaCompletoPuzzle(J.T)) {
		entornoMostrarMensajeFin("Se ha completado el puzzle.Fin de juego ");
		entornoPausa(2);
		entornoTerminar();
	}
}



