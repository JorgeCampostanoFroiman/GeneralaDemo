#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

// La función hace una tirada de "tam" dados y guarda los resultados en el vector correspondiente

void tirada(int [], int);

// pone manualmente los dados

void cargar_dados(int [], int);

// muestra los dados

void mostrar_dados(int [], int);

// juego de un jugador

void juego_simple(char [], int [], int [], int, bool, int);

//revisa si hay generala

int generala(int [], int);

// funcion que permite volver a lanzar x dados

void lanzamientos(int, int[], int, char[], bool);

// funcion para calular la puntuacion

void coincidencia(int [], int, int, int);


// ordena los dados de una funcion

void ordenar_dados(int[], int);

// retorna la puntuacion de un jugador en una ronda determinada

void puntuacion(int[], int, int);







#endif // FUNCIONES_H_INCLUDED
