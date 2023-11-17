#include "pch.h"
#include "iostream"
#include "conio.h"

#define DERECHA 77
#define IZQUIERDA 75
#define ARRIBA 72
#define ABAJO 80
using namespace std;
using namespace System;

void ubica(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void borrar_personaje(int x, int y)
{
    ubica(x, y);     cout << "   ";
    ubica(x, y + 1); cout << "   ";
    ubica(x, y + 2); cout << "   ";

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
    _sleep(100);

    borrar_personaje(x, y - 1);

    dibujar_personaje(x, y - 2);
    _sleep(100);

    borrar_personaje(x, y - 2);

    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    _sleep(100);
    //mover horizontalmente
    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);

    x += 1;
    dibujar_personaje(x, y - 3);
    _sleep(100);

    borrar_personaje(x, y - 3);


    //caer
    dibujar_personaje(x, y - 2);
    _sleep(100);

    borrar_personaje(x, y - 2);

    dibujar_personaje(x, y - 1);
    _sleep(100);

    borrar_personaje(x, y - 1);
    dibujar_personaje(x, y);
}

int main() {
    int x = 3, y = 3;
    int obstaculo = 3;
    dibujar_personaje(x, y);

    while (1)
    {

        if (_kbhit())
        {

            //borrar
            borrar_personaje(x, y);
            //mover
            char tecla = _getch();

            if (tecla == DERECHA && x + 4 != obstaculo) x++;

            if (tecla == IZQUIERDA && x - 1 != obstaculo) x--;

            if (tecla == ARRIBA && y - 1 != obstaculo)  y--;

            if (tecla == ABAJO && y + 4 != obstaculo) y++;

            dibujar_personaje(x, y);

            if (tecla == char(32))salto(x, y);



        }
    }
}