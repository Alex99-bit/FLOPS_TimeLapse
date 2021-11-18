//*** Carlos Alejandro Coronado Obregón***///
/*
	El proposito de este prototipo es generar una serie de operaciones por punto flotante,
	a su vez, un contador de tiempo (cronometro) ambos corriendo al mismo tiempo, por ende
	se hará uso de threads.
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cmath>
#include <pthread.h>
using namespace std;

#include "Init_Index.h"

#define sys system

typedef struct{
	Init_Index index;
	Tempo ttime;
	Operaciones oper;
}clases;

void* time(void *arg);
void* process(void *arg);

// Hilo principal
int main(){
	sys("color 0a");
	clases var;
	
	pthread_t hilo_time;
	pthread_t hilo_pros;
	
	pthread_create(*hilo_time,NULL,time,&var);
	pthread_create(*hilo_pros,NULL,time,&var);
	return 0;
}

void* time(void *arg){
	
}

void* process(void *arg){
	
}
