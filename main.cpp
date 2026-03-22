#include <iostream>
#include "configuracion.h"
#include "frontend.h"

typedef unsigned long long paquete64;

void imprimirTablero(paquete64* superMascara, int numBloques, int anchoBytes);

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
    for (int indiceBloque  = 0; indiceBloque  < tamanioTablero ; indiceBloque ++) {
        tablero[indiceBloque ] = 0ULL; // Inicia cada bit de paquete en 0
    }

    int bloquesPorFila = ancho / 8;

    for (int bloqueY = 0; bloqueY < altura / 8; bloqueY++) {
        for (int bloqueX = 0; bloqueX < ancho / 8; bloqueX++) {

            int indiceBloque = bloqueY * bloquesPorFila + bloqueX;
            paquete64 bloque = tablero[indiceBloque];

            
        }
    }

    //std::cout << tablero[0] << std::endl;

    //mostrarEstadoDeTablero(altura,ancho);

    delete[] tablero;

    return 0;
}