#include <iostream>

using namespace std;

typedef unsigned long long paquete64;

void LimpiarFilaEnElTablero(){
    cout << "limpiar fila" << endl;

}

void mostrarEstadoDeTablero(int altura, int ancho, paquete64* tablero){

    int bloquesPorFila = ancho / 8;

    for (int bloqueY = 0; bloqueY < altura / 8; bloqueY++) {
        // Recorremos las 8 filas internas del bloque
        for (int filaInterna = 0; filaInterna < 8; filaInterna++) {

            for (int bloqueX = 0; bloqueX < ancho / 8; bloqueX++) {

                int indiceBloque = bloqueY * bloquesPorFila + bloqueX;
                paquete64 bloque = tablero[indiceBloque];

                // Recorremos las 8 columnas internas del bloque
                for (int columnaInterna = 0; columnaInterna < 8; columnaInterna++) {

                    int bitIndex = filaInterna * 8 + columnaInterna;

                    if (bloque & (1ULL << bitIndex)) {
                        std::cout << "# ";
                    } else {
                        std::cout << ". ";
                    }
                }
            }
            // Salto de línea al terminar una fila completa del tablero
            std::cout << "\n";
        }
    }
}
