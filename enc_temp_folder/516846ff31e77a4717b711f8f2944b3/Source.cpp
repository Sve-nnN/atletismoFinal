//import header file
#include "libreria.h"

/*
* PAISES QUE IRAN A ATLETISMO
Argentina Argentina (ARG) (10)
Bahamas Bahamas (BAH) (5)
Bolivia Bolivia (BOL) (1)
Brasil Brasil (BRA) (30)
Canadá Canadá (CAN) (1)
Chile Chile (CHI) (9)
Colombia Colombia (COL) (15)
Costa Rica Costa Rica (CRC) (1)
Cuba Cuba (CUB) (11)
Dominica Dominica (DMA) (1)
Ecuador Ecuador (ECU) (14)
El Salvador El Salvador (ESA) (10)
Estados Unidos Estados Unidos (USA) (44)
Guatemala Guatemala (GUA) (2)
Islas Vírgenes Británicas Islas Vírgenes Británicas (IVB) (1)
Jamaica Jamaica (JAM) (18)
México México (MEX) (3)
Panamá Panamá (PAN) (1)
Paraguay Paraguay (PAR) (4)
Perú Perú (PER) (3)
Puerto Rico Puerto Rico (PUR) (2)
República Dominicana República Dominicana (DOM) (2)
Trinidad y Tobago Trinidad y Tobago (TTO) (4)
Uruguay Uruguay (URU) (8)
Venezuela Venezuela (VEN) (13)
*/
struct Personaje {
	int x;
	int y;
	int puntos;
	string pais;

};
struct Obstaculo {
	int x;
	int y;
};

void imprimirStickman(string j, int x, int y) {
	// Definir colores ANSI
	/*
	\033[1;34m: Azul brillante
	\033[1;35m: Magenta brillante
	\033[1;36m: Cyan brillante
	\033[1;37m: Blanco brillante
	\033[0;30m: Negro
	\033[0;90m: Gris oscuro
	\033[0;91m: Rojo oscuro
	\033[0;92m: Verde oscuro
	\033[0;93m: Amarillo oscuro
	\033[0;94m: Azul oscuro
	\033[0;95m: Magenta oscuro
	\033[0;96m: Cyan oscuro
	\033[0;97m: Blanco
	*/
	const string rojo = "\033[1;31m";
	const string verde = "\033[1;32m";
	const string amarillo = "\033[1;33m";
	const string reset = "\033[0m";
	const string azulBrillante = "\033[1;34m";
	const string magentaBrillante = "\033[1;35m";
	const string cyanBrillante = "\033[1;36m";
	const string blancoBrillante = "\033[1;37m";
	const string negro = "\033[0;30m";
	const string grisOscuro = "\033[0;90m";
	const string rojoOscuro = "\033[0;91m";
	const string verdeOscuro = "\033[0;92m";
	const string magentaOscuro = "\033[0;95m";
	const string amarilloOscuro = "\033[0;93";
	const string azulOscuro = "\033[0;94m";
	const string cyanOscuro = "\033[0;96m";
	const string blanco = "\033[0;97m";




	// Elegir colores basados en la abreviatura del país
	string colorCabeza, colorCuerpo, colorExtremidades;

	if (j == "ARG") {
		colorCabeza = blanco;
		colorCuerpo = azulBrillante;
		colorExtremidades = blanco;
	}
	else if (j == "BAH") {
		colorCabeza = blanco;
		colorCuerpo = rojo;
		colorExtremidades = rojo;
	}
	else if (j == "BOL") {
		colorCabeza = rojo;
		colorCuerpo = amarilloOscuro;
		colorExtremidades = verde;
	}
	else if (j == "BRA") {
		colorCabeza = verde;
		colorCuerpo = amarillo;
		colorExtremidades = verde;
	}
	else if (j == "CAN") {
		colorCabeza = rojoOscuro;
		colorCuerpo = blancoBrillante;
		colorExtremidades = rojoOscuro;
	}
	else if (j == "CHI") {
		colorCabeza = azulOscuro;
		colorCuerpo = blancoBrillante;
		colorExtremidades = rojoOscuro;
	}
	else if (j == "COL") {
		colorCabeza = amarilloOscuro;
		colorCuerpo = azulOscuro;
		colorExtremidades = rojoOscuro;
	}
	else if (j == "CRC") {
		colorCabeza = azulBrillante;
		colorCuerpo = rojoOscuro;
		colorExtremidades = azulBrillante;
	}
	else if (j == "CUB") {
		colorCabeza = rojo;
		colorCuerpo = azulBrillante;
		colorExtremidades = blanco;
	}
	else if (j == "DMA") {
		colorCabeza = verde;
		colorCuerpo = rojo;
		colorExtremidades = verde;
	}
	else if (j == "ECU") {
		colorCabeza = amarillo;
		colorCuerpo = azulOscuro;
		colorExtremidades = rojoOscuro;
	}
	else if (j == "ESA") {
		colorCabeza = azulBrillante;
		colorCuerpo = blancoBrillante;
		colorExtremidades = azulBrillante;
	}
	else if (j == "USA") {
		colorCabeza = azulBrillante;
		colorCuerpo = blancoBrillante;
		colorExtremidades = rojo;
	}
	else if (j == "GUA") {
		colorCabeza = azulOscuro;
		colorCuerpo = blancoBrillante;
		colorExtremidades = azulOscuro;
	}
	else if (j == "IVB") {
		colorCabeza = rojo;
		colorCuerpo = blanco;
		colorExtremidades = azulOscuro;
	}
	else if (j == "JAM") {
		colorCabeza = amarillo;
		colorCuerpo = grisOscuro;
		colorExtremidades = verde;
	}
	else if (j == "MEX") {
		colorCabeza = verde;
		colorCuerpo = blanco;
		colorExtremidades = rojo;
	}
	else if (j == "PAN") {
		colorCabeza = rojo;
		colorCuerpo = grisOscuro;
		colorExtremidades = verdeOscuro;
	}
	else if (j == "PAR") {
		colorCabeza = rojo;
		colorCuerpo = blanco;
		colorExtremidades = azulBrillante;
	}
	else if (j == "PER") {
		colorCabeza = rojo;
		colorCuerpo = blanco;
		colorExtremidades = rojo;
	}
	else if (j == "PUR") {
		colorCabeza = rojo;
		colorCuerpo = azulBrillante;
		colorExtremidades = blanco;
	}
	else if (j == "DOM") {
		colorCabeza = azulBrillante;
		colorCuerpo = blanco;
		colorExtremidades = rojo;
	}
	else if (j == "TTO") {
		colorCabeza = rojo;
		colorCuerpo = negro;
		colorExtremidades = blanco;
	}
	else if (j == "URU") {
		colorCabeza = blanco;
		colorCuerpo = azulBrillante;
		colorExtremidades = blanco;
	}
	else if (j == "VEN") {
		colorCabeza = magentaBrillante;
		colorCuerpo = azulBrillante;
		colorExtremidades = rojo;
	}


	//else {
	//	// Colores predeterminados para otras abreviaturas
	//	colorCabeza = verde;
	//	colorCuerpo = amarillo;
	//	colorExtremidades = rojo;
	//}

	// Imprimir stickman
	Console::BackgroundColor = ConsoleColor::Black;
	Console::SetCursorPosition(x, y);
	cout << colorCabeza << " o " << reset;
	y++;
	Console::SetCursorPosition(x, y);
	cout << colorCuerpo << "/|\\" << reset;
	y++;
	Console::SetCursorPosition(x, y);
	cout << colorExtremidades << "/ \\" << reset;
}
void ubica(int x, int y)
{
	Console::SetCursorPosition(x, y);
}

string mostrarPaises(string* paises) {
	int tecla;
	system("cls");
	cout << "Selecciona un pais de la lista: \n";
	for (int i = 0; i < 25; i++) {
		cout << i << ": " << paises[i] << "\n";
	}
	do {
		cin >> tecla;
	} while (tecla < 0 || tecla>25);
	for (int i = 0; i < 25; i++) {
		if (tecla == i) { system("cls"); return paises[i]; }
	}

}
void imprimirObstaculo(int x, int y) {
	Console::SetCursorPosition(x, y);
	cout << "+>";
	y++;
	Console::SetCursorPosition(x, y);
	cout << "|";
	y++;
	Console::SetCursorPosition(x, y);
	cout << "+>";
}
void configuracionConsola() {
	Console::SetWindowSize(81, 26);
	Console::CursorVisible = false;
}
void posicionInicialPersonajes(Personaje* jugador, Personaje* enemigo, string* paises) {
	jugador->x = 6;
	jugador->y = 5;
	jugador->puntos += 0;
	enemigo[0].x = 7;
	enemigo[0].y = 11;
	enemigo[0].pais = paises[rand() % 24];
	enemigo[0].puntos += 0;
	enemigo[1].x = 7;
	enemigo[1].y = 18;
	enemigo[1].pais = paises[rand() % 24];
	enemigo[1].puntos += 0;

}
void cuentaRegresiva() {
	Console::BackgroundColor = ConsoleColor::Black;
	for (int i = 3; i > 0; i--) {
		Console::SetCursorPosition(40, 12);
		cout << i;
		Sleep(1000);
	}
	Console::SetCursorPosition(40, 12);
	cout << "GO!";
	Sleep(1000);
	Console::SetCursorPosition(40, 12);
	cout << "   ";
}
void borrar_personaje(int x, int y)
{
	ubica(x, y);     cout << "    ";
	ubica(x, y + 1); cout << "    ";
	ubica(x, y + 2); cout << "    ";

}


void dibujar_personaje(int x, int y)
{
	ubica(x, y);     cout << " O ";
	ubica(x, y + 1); cout << "/|\\";
	ubica(x, y + 2); cout << "/ \\";

}
void salto(int& x, int y) {

	//elevar
	borrar_personaje(x, y);
	dibujar_personaje(x, y - 1);
	_sleep(10);

	borrar_personaje(x, y - 1);

	dibujar_personaje(x, y - 2);
	_sleep(10);

	borrar_personaje(x, y - 2);

	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	_sleep(10);
	//mover horizontalmente
	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);

	x += 1;
	dibujar_personaje(x, y - 3);
	_sleep(10);

	borrar_personaje(x, y - 3);


	//caer
	dibujar_personaje(x, y - 2);
	_sleep(10);

	borrar_personaje(x, y - 2);

	dibujar_personaje(x, y - 1);
	_sleep(10);

	borrar_personaje(x, y - 1);
	dibujar_personaje(x, y);
}

void moverEnemigos(Personaje* enemigo) {
	for (int i = 0; i < 2; i++) {
		//Hacemos que los enemigos se muevan hacia la derecha en cada iteración.
		enemigo[i].x += 1+rand()%2;
	}
}
int main() {
	int x = 6, y = 5, opcion;
	string paises[25] = { "ARG","BAH","BOL","BRA","CAN","CHI","COL","CRC","CUB","DMA","ECU","ESA","USA","GUA","IVB","JAM","MEX","PAN","PAR","PER","PUR","DOM","TTO","URU","VEN" };
	Personaje* jugador = new Personaje;
	Personaje* enemigo = new Personaje[3];
	Obstaculo* obs = new Obstaculo;
	int nivel = 1;
	jugador->pais = mostrarPaises(paises);
	posicionInicialPersonajes(jugador, enemigo, paises);
	obs->x = 10;
	obs->y = 17;
	imprimirStickman(jugador->pais, jugador->x, jugador->y);
	imprimirStickman(enemigo[0].pais, enemigo[0].x, enemigo[0].y);
	imprimirStickman(enemigo[1].pais, enemigo[1].x, enemigo[1].y);
	dibujar_personaje(x, y);
	ubica(0, 0);
	dibujarMapa1();

	cuentaRegresiva();

	while (nivel==1)
	{
		imprimirObstaculo(obs->x, obs->y);


		if (_kbhit())
		{


			//borrar
			borrar_personaje(x, y);

			//mover
			char tecla = _getch();

			if (tecla == DERECHA && x < 70) x++;

			if (tecla == IZQUIERDA && x > 6) x--;

			dibujar_personaje(x, y);

			if (tecla == char(32))salto(x, y);

			if (mapa1[y][x] == 6) { cout << "GANASTE!!!!"; exit; }



		}
		if (!kbhit()) {

			for (int i = 0; i < 2; i++) {
				if (!(mapa1[enemigo[i].y][enemigo[i].x] == 6)) {
					borrar_personaje(enemigo[i].x -2, enemigo[i].y);

					moverEnemigos(enemigo);

					imprimirStickman(enemigo[i].pais, enemigo[i].x, enemigo[i].y);
					_sleep(100);
				}
				else {
					ubica(3, 30); cout << "El jugador a perdido." << endl << "¿Quieres Intentarlo otra vez ? (0:no 1 : si)"; cin >> opcion;
					if (opcion == 1) {
						system("cls");
						dibujarMapa1();
						posicionInicialPersonajes(jugador, enemigo, paises);
						x = 6, y = 5;

					}
				}
			}
		}
	}
	dibujarMapa1();

	dibujarMapa2();

	while (nivel == 2)
	{

		if (_kbhit())
		{


			//borrar
			borrar_personaje(x, y);

			//mover
			char tecla = _getch();

			if (tecla == DERECHA && x < 70) x++;

			if (tecla == IZQUIERDA && x > 6) x--;

			dibujar_personaje(x, y);

			if (tecla == char(32))salto(x, y);

			if (mapa2[y][x] == 6) { cout << "GANASTE!!!!"; exit; }



		}
		if (!kbhit()) {

			for (int i = 0; i < 2; i++) {
				if (!(mapa2[enemigo[i].y][enemigo[i].x] == 6)) {
					borrar_personaje(enemigo[i].x - 1, enemigo[i].y);

					moverEnemigos(enemigo);

					imprimirStickman(enemigo[i].pais, enemigo[i].x, enemigo[i].y);
					_sleep(100);
				}
				else {
					ubica(3, 30); cout << "El jugador ha perdido." << endl << "¿Quieres Intentarlo otra vez ? (0:no 1 : si)"; cin >> opcion;
					if (opcion == 1) {
						system("cls");
						dibujarMapa2();
						posicionInicialPersonajes(jugador, enemigo, paises);
						x = 6, y = 5;

					}
				}
			}
		}
	}
	dibujarMapa3();

	while (nivel == 3)
	{


		if (_kbhit())
		{


			//borrar
			borrar_personaje(x, y);

			//mover
			char tecla = _getch();

			if (tecla == DERECHA && x < 70) x++;

			if (tecla == IZQUIERDA && x > 6) x--;

			dibujar_personaje(x, y);

			if (tecla == char(32))salto(x, y);

			if (mapa3[y][x] == 6) { cout << "GANASTE!!!!"; exit; }



		}
		if (!kbhit()) {

			for (int i = 0; i < 2; i++) {
				if (!(mapa3[enemigo[i].y][enemigo[i].x] == 6)) {
					borrar_personaje(enemigo[i].x - 1, enemigo[i].y);

					moverEnemigos(enemigo);

					imprimirStickman(enemigo[i].pais, enemigo[i].x, enemigo[i].y);
					_sleep(100);
				}
				else {
					ubica(3, 30); cout << "El jugador a perdido." << endl << "¿Quieres Intentarlo otra vez ? (0:no 1 : si)"; cin >> opcion;
					if (opcion == 1) {
						system("cls");
						dibujarMapa3();
						posicionInicialPersonajes(jugador, enemigo, paises);
						x = 6, y = 5;

					}
				}
			}
		}
	}

	_getch();
}