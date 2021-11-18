// Funcion gotoxy convertida en clase para futuros proyectos
class GotoXY{
	private:
		HANDLE hcon;
		COORD dwPos;
	public:
		void go_xy(int x,int y);
		void set_color(int value);
};

// Metodo gotoxy
void GotoXY::go_xy(int x,int y){
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

// Metodo que cambia el color a lineas de codigo
void GotoXY::set_color(int value){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}
