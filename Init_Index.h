
#include "GotoXY.h"
#include "Tempo.h"
#include "Operaciones.h"

#define sys system

class Init_Index{
	private:
		GotoXY pos;
		Tempo clock;
		Operaciones fun;
		int tecla,x,y;
	public:
		Init_Index();
		void menu();
};

// Constructor
Init_Index::Init_Index(){
	x=22,y=3;
}

// Metodo que despliega el menu del programa
void Init_Index::menu(){
	while(tecla!=27 || tecla!=13){
		// se imprime el cursor
		pos.go_xy(x,y);
		cout<<"<<--";
		pos.go_xy(x,y+1);
		cout<<"    ";
		pos.go_xy(x,y-1);
		cout<<"    ";
		
		// se imprime el menu
		pos.go_xy(3,1);
		cout<<"**FLOPS & TIME LAPSE**";
		pos.go_xy(3,3);
		cout<<"Inciar el programa";
		pos.go_xy(3,4);
		cout<<"Salir";
		
		// se captura la tecla
		tecla=getch();
		
		// switch que genera el movimiento del cursor
		switch(tecla){
			case 119: // W
			case 87: // w
			case 72: // up
				if(y>3){ // Limite hacia arriba
					y--;
				}
			break;
			case 115: // s
			case 83: // S
			case 80: // down
				if(y<4){ // Limite hacia abajo
					y++;
				}
			break;
		}
		
		// en caso de enter
		if(tecla==13){
			
			// selecciona la opcion de acuerdo a la posicion del cursor
			switch(y){
				case 3:
					/*pos.go_xy(30,3);
					cout<<"Option doesnt available for now";*/
					sys("cls");
					clock.time_lapse();
				break;
				case 4:
					exit(0);
				break;
			}
		}
	}
}





