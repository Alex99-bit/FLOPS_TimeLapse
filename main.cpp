//*** Carlos Alejandro Coronado Obreg�n***///
/*
	El proposito de este prototipo es generar una serie de operaciones por punto flotante,
	a su vez, un contador de tiempo (cronometro) ambos corriendo al mismo tiempo, por ende
	se har� uso de threads.
*/

#include <iostream>
#include <windows.h>
#include <time.h>
#include <pthread.h>
using namespace std;
#include "Init_Index.h"

#define sys system

int main(){
	Init_Index obj;
	obj.menu();
	return 0;
}
