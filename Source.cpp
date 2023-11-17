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
	jugador->y = 4;
	enemigo[1].x = 6;
	enemigo[1].y = 11;
	enemigo[1].pais = paises[rand() % 24];
	enemigo[2].x = 6;
	enemigo[2].y = 18;
	enemigo[2].pais = paises[rand() % 24];
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
int main() {
	string paises[25] = { "ARG","BAH","BOL","BRA","CAN","CHI","COL","CRC","CUB","DMA","ECU","ESA","USA","GUA","IVB","JAM","MEX","PAN","PAR","PER","PUR","DOM","TTO","URU","VEN" };
	Personaje* jugador = new Personaje;
	Personaje* enemigo = new Personaje[2];
	Obstaculo* obs = new Obstaculo;
	int nivel = 1;
	jugador->pais = mostrarPaises(paises);
	dibujarMapa();
	posicionInicialPersonajes(jugador, enemigo, paises);
	imprimirStickman(jugador->pais, jugador->x, jugador->y);
	imprimirStickman(enemigo[1].pais, enemigo[1].x, enemigo[1].y);
	imprimirStickman(enemigo[2].pais, enemigo[2].x, enemigo[2].y);
	imprimirObstaculo(obs->x,obs->y);

	cuentaRegresiva();
	while (nivel==1) {
		//Movimiento de enemigos
		if (!_kbhit) {
			enemigo[1].x += 1 + rand() % 3;
			enemigo[2].x += 1 + rand() % 3;
		}
	}



	_getch();
}