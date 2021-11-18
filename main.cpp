//*** Carlos Alejandro Coronado Obregón***///
/*
	El proposito de este prototipo es generar una serie de operaciones por punto flotante,
	a su vez, un contador de tiempo (cronometro) ambos corriendo al mismo tiempo, por ende
	se hará uso de threads.
*/
// Declaracion de las librerias
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cmath>
#include <pthread.h>
using namespace std;

// Header que contiene el menu principal y los headers restantes
#include "Init_Index.h"

#define sys system

// Estructura que contiene diferentes clases objetos de distintas clases
// para mandarlas juntas a los threads
typedef struct{
	Init_Index index;
	Tempo ttime;
	Operaciones oper;
}clases;

// prototipos de los threads/hilos
void* time(void *arg);
void* process(void *arg);

// Hilo principal
int main(){
	sys("color 0a");
	clases var;
	var.index.menu();
	// Se declaran los hilos
	pthread_t hilo_time;
	pthread_t hilo_pros;
	
	// Se crean e inicializan los hilos
	pthread_create(&hilo_time,NULL,time,&var);
	pthread_create(&hilo_pros,NULL,time,&var);
	
	// Fuerza el hilo a iniciar
	pthread_join(hilo_time,NULL);
	pthread_join(hilo_pros,NULL);
	
	return 0;
}

void* time(void *arg){
	clases var = *((clases*)arg);
	var.ttime.time_lapse(); /* *Corregrir bug que provoca que se duplique el reloj y no se muestre el menu* */
}

void* process(void *arg){
	clases var = *((clases*)arg);
	var.index.menu();
}
