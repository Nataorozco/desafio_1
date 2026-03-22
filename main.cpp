#include <iostream>
#include "configuracion.h"
#include "frontend.h"

typedef unsigned long long paquete64;

int main()
{

    int altura;
    int ancho;
    altura = 0;
    ancho = 0;
    paquete64* tablero;

    ingresarDimencionesTablero(&altura, &ancho);

    int tamanioTablero;
    tamanioTablero = 0;
    tamanioTablero = (altura/8)*(ancho/8);
    tablero = new paquete64[tamanioTablero];
    for (int i = 1; i <= tamanioTablero ; i++) {
        tablero[i] = 0ULL; // Inicia cada bit de paquete en 0
    }

    //std::cout << tablero[0] << std::endl;

    //mostrarEstadoDeTablero(altura,ancho);

    delete tablero;

    return 0;
}