# Ball Sort Puzzle

<p align="center">
  <img src="https://github.com/sorgazb/Ball_Sort_Puzzle/assets/150727714/f60a5cea-b49a-4551-bece-4300d0370884" alt="Ball Sort Puzzle" width="600"/>
</p>

![C++](https://img.shields.io/badge/C++-TADs%20%26%20POO-00599c?style=for-the-badge&logo=cplusplus)&nbsp;![Allegro](https://img.shields.io/badge/Allegro-5-e8b800?style=for-the-badge)&nbsp;![Pila](https://img.shields.io/badge/Estructura-Pila-orange?style=for-the-badge)&nbsp;![Ficheros](https://img.shields.io/badge/Lectura-Ficheros%20.cnf-green?style=for-the-badge)&nbsp;![Estado](https://img.shields.io/badge/Estado-En%20Desarrollo-red?style=for-the-badge)

> **Ball Sort Puzzle** es un videojuego de puzles desarrollado en C++ con la librería gráfica **Allegro 5**. El objetivo es ordenar las bolas de colores en los tubos usando estructuras de **Pila (TADPila)**, con niveles configurables desde ficheros `.cnf` e inicialización aleatoria o manual del tablero.

---

## 🎮 Descripción del Juego

**Ball Sort Puzzle** recrea el clásico juego móvil de ordenar bolas por color. El jugador mueve la bola del tope de un tubo a otro, con la restricción de que solo puede depositar una bola sobre otra del mismo color o en un tubo vacío.

La lógica del juego se sustenta en los siguientes TADs:

- **TADPila** — implementación de la pila que representa cada tubo del tablero.
- **TADTablero** — gestiona el conjunto de tubos (pilas) que forman el nivel.
- **TADJuego** — controla la lógica de partida, movimientos, puntuación y condición de victoria.
- **entorno** — capa gráfica con **Allegro 5** que renderiza el tablero, las bolas y gestiona los eventos de ratón y teclado.
- **Ficheros `.cnf`** — configuración de niveles: número de pilas, bolas por pila, puntuación inicial e inicialización aleatoria o desde fichero.

---

## 🏗️ Estructura del Proyecto

```txt
Ball_Sort_Puzzle/
├── BallSortPuzzleBase/
│   ├── src/
│   │   ├── BallSort.cpp         # Punto de entrada principal del juego
│   │   ├── TADPila.h / .cpp     # TAD Pila: estructura de cada tubo
│   │   ├── TADTablero.h / .cpp  # TAD Tablero: conjunto de tubos del nivel
│   │   ├── TADJuego.h / .cpp    # TAD Juego: lógica, movimientos y puntuación
│   │   ├── entorno.h / .cpp     # Renderizado gráfico con Allegro 5
│   │   ├── prPila.h / .cpp      # Pruebas del TAD Pila
│   │   ├── prTablero.h / .cpp   # Pruebas del TAD Tablero
│   ├── ballSort.cnf         # Nivel base (4 colores, 2 pilas vacías, 4 bolas/pila)
│   ├── ballSort4.cnf        # Nivel 4 pilas
│   ├── ballSort5.cnf        # Nivel 5 pilas
│   ├── ballSort6.cnf        # Nivel 6 pilas
│   ├── ballSort7.cnf        # Nivel 7 pilas
│   ├── ballSort8.cnf        # Nivel 8 pilas
│   ├── DroidSerif-Regular.ttf  # Fuente tipográfica usada por Allegro
│   └── Debug/               # Binarios de depuración
└── README.md                # Documentación del proyecto
```

---

## 📄 Formato de los Ficheros de Configuración `.cnf`

Cada nivel se define mediante un fichero `.cnf` con el siguiente formato:

```txt
4        <- Nº de pilas con bolas (= nº de colores diferentes)
2        <- Nº de pilas vacías (suma de pilas: entre 4 y 10)
4        <- Nº de bolas por cada pila (entre 3 y 6)
0        <- 0 = inicializar desde fichero | <>0 = inicialización aleatoria
500      <- Puntuación inicial de la partida
1 4 3 4  <- Contenido de cada pila (de abajo hacia arriba)
...
```

---

## ⚙️ Compilación y Ejecución

> ⚠️ Requiere tener instalada la librería **Allegro 5** en el sistema.

Clonar el repositorio:

```bash
git clone https://github.com/sorgazb/Ball_Sort_Puzzle.git
cd Ball_Sort_Puzzle/BallSortPuzzleBase/src
```

Compilar con g++ enlazando Allegro 5:

```bash
g++ -o BallSortPuzzle BallSort.cpp TADPila.cpp TADTablero.cpp TADJuego.cpp entorno.cpp \
    $(pkg-config --libs --cflags allegro-5 allegro_font-5 allegro_ttf-5 allegro_primitives-5)
```

Ejecutar desde el directorio `BallSortPuzzleBase/` (para que encuentre los `.cnf` y la fuente):

```bash
cd ..
./src/BallSortPuzzle
```

---

## 🖥️ Ejemplo de Ejecución

<p align="center">
  <img src="https://github.com/sorgazb/Ball_Sort_Puzzle/assets/150727714/f60a5cea-b49a-4551-bece-4300d0370884" alt="Ball Sort Puzzle en ejecución" width="600"/>
</p>

---

## 🚀 Estado del Proyecto

Este proyecto se encuentra actualmente **en desarrollo**. Funcionalidades previstas:

- [ ] Sistema de niveles con selección desde menú.
- [ ] Contador de movimientos y temporizador.
- [ ] Guardado y carga de partida.
- [ ] Mejoras visuales en las animaciones de las bolas.

---

## 🤝 Contribución

Haz fork del repositorio.

Crea una rama de trabajo:

```bash
git checkout -b feature/mi-nueva-funcionalidad
```

Realiza tus cambios y haz commit.

Abre un Pull Request describiendo tus mejoras.

---

Proyecto de Programación – Sergio Orgaz Bravo
