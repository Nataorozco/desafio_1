#include <iostream>

#include "configuracion.h"
#include "frontend.h"

typedef unsigned long long paquete64;

int main()
{

    int altura, ancho, tamanioTablero;
    altura = 0;
    ancho = 0;
    tamanioTablero = 0;

    ingresarDimencionesTablero(&altura, &ancho);
    tamanioTablero = (altura/8)*(ancho/8);
    paquete64* tablero = new paquete64[tamanioTablero];

    for (int i = 1; i <= tamanioTablero ; i++) {
        tablero[i] = 0ULL; // Inicia cada bit de paquete en 0
    }

    paquete64 paquetePrueba = tablero[0];

    unsigned char bitActual = 0b0;

    for (int i = 63; i >= 0; --i) {
        unsigned char bitActual = paquetePrueba >> i;
        std::cout << (bitActual & 1);
    }

    //unsigned char mascaraModificadora = 0b00000001;


    tablero[0] = (tablero[0] or mascaraModificadora);


    //std::cout << tablero[0] << std::endl;

    //for (int i = 1; i <= tamanioTablero ; i++) {

    //}

    //mostrarEstadoDeTablero(altura,ancho);

    delete tablero;

    return 0;
}