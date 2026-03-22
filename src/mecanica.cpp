#include <iostream>
#include "configuracion.h"


using namespace std;
typedef unsigned short paquete16;

void ProcesarMovimientoActualizaTableroConAccionFichaTablero(){
    cout << "Realiza un moviento" << endl;
}

void escribirBit(int x, int y, int ancho, paquete64* tablero, bool valor) {
    // 1. Localizar bloque e índice
    int bloqueX = x / 8;
    int bloqueY = y / 8;
    int bloquesPorFila = ancho / 8;
    int indiceBloque = (bloqueY * bloquesPorFila) + bloqueX;

    // 2. Localizar bit dentro del bloque (8x8)
    int filaInterna = y % 8;
    int columnaInterna = x % 8;
    int bitIndex = (filaInterna * 8) + columnaInterna;



    // 3. Aplicar el cambio
    if (valor) {
        tablero[indiceBloque] |= (1ULL << bitIndex);  // Poner a 1 (OR)
    } else {
        tablero[indiceBloque] &= ~(1ULL << bitIndex); // Poner a 0 (AND NOT)
    }
}

void pintarFicha(int x_inicio, int y_inicio, int ancho, int altura, paquete64* mascara, paquete16 ficha) {
    // Recorremos las 4 filas de la ficha (y)
    for (int f = 0; f < 4; f++) {
        // Recorremos las 4 columnas de la ficha (x)
        for (int c = 0; c < 4; c++) {

            // Calculamos la posición del bit dentro del paquete de 16 bits
            // La ficha 0b1000'1000'1100'0000 se lee de izquierda a derecha
            int bitFicha = 15 - (f * 4 + c);

            // Extraemos si el bit en esa posición es 1 o 0
            bool encendido = (ficha >> bitFicha) & 1;

            if (encendido) {
                int x_destino = x_inicio + c;
                int y_destino = y_inicio + f;

                // Verificamos que no nos salgamos de los límites del tablero total
                // (Suponiendo que tienes 'altura' disponible)
                if (x_destino < ancho && y_destino < altura) {
                    escribirBit(x_destino, y_destino, ancho, mascara, true);
                }
            }
        }
    }
}



