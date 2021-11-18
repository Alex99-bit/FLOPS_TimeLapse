
#include "GotoXY.h"
#include "Tempo.h"
#include "Operaciones.h"

class Init_Index{
	private:
		short int op;
		GotoXY pos;
		Tempo clock;
		Operaciones fun;
	public:
		void menu();
};

// Metodo que despliega el menu del programa
void Init_Index::menu(){
	clock.time_lapse();
}
