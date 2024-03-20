//============================================================================
// Name        : BallSort.cpp
// Author      : Profesores de la asignatura IP/FP
// Version     : curso 20/21
// Copyright   : Your copyright notice
// Description : Ejemplo de uso del entorno gráfico para el juego BallSortPuzzle
//============================================================================


#include "entorno.h"
void ejemplo() {
	TipoTecla tecla;
	bool salir = false;
	int pila = 0;
	int i, pos, color;
	int bolasXPila, puntos, pilas, pilasSin, deDonde;
	int m[MAX_TAMANO][MAX_TAMANO];

	//Los datos almacenados en el fichero de configuración se copian en las variables
	//definidas anteriormente
	if (entornoCargarConfiguracion(pilas, pilasSin, bolasXPila, deDonde, puntos,m)) {
		//Se abre la ventana gráfica con un número de pilas igual a pilas+pilasSin
		entornoIniciar(pilas + pilasSin);

		//se pintan todas las pilas con espacio para almacenar un número de bolas igual a bolasXPila
		for (i = 0; i < pilas+pilasSin; i++){
			entornoPintarPila(i, bolasXPila);
		}

		//Las primeras pilas (tantas como indica la variable "pilas") se llenan, de la misma forma,
	    //con 4 bolas de diferentes colores
		pos = 0;
		for (i = 0; i < pilas; i++){

			color = 1;
			for (pos = 0; pos < bolasXPila; pos++){
				entornoPonerBola(i, color, pos, bolasXPila);
				color++;
			}
		}

		entornoMarcarPosicion(pila);
		entornoPonerPuntuacion(puntos);

		while (!salir) {
			//A partir de este momento se procesan las teclas que el jugador pulse
			//Si pulsa las teclas izquierda y derecha se desplaza entre las pilas
			//Si se pula la tecla Enter se coloca sobre la pila
			//la bola superior de la pila seleccionada
			//sabemos que el color de esa bola es el 4
			//y que ocupa la posición 3
			//Si pulsa F1 o F2, simplemente aparece un mensaje
			tecla = entornoLeerTecla();
			switch (tecla) {
			case TEnter:
				 color = 5;
				 pos = 3;
				 entornoSeleccionarBola(pila, color);
				 entornoPausa(0.5);
				 entornoQuitarBola(pila, pos , bolasXPila);

				break;
			case TDerecha:
				entornoDesmarcarPosicion(pila);
				if (pila < (pilas+pilasSin) -1)
					pila++;
				else
					pila = 0;
				entornoMarcarPosicion(pila);
				break;
			case TIzquierda:
				entornoDesmarcarPosicion(pila);
				if (pila > 0)
					pila--;
				else
					pila = (pilas+pilasSin) - 1;
				entornoMarcarPosicion(pila);
				break;
			case TF1:
				// la ayuda solo se puede conceder una vez
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
}
int main() {
	ejemplo();
	return 0;
}
