#include "configuracion.h"
#include "frontend.h"
#include "movimiento.h"

typedef unsigned long long paquete64;
typedef unsigned short paquete16;

void imprimirTablero(paquete64* superMascara, int numBloques, int anchoBytes);

int main()
{

    int altura;
    int ancho;
    altura = 0;
    ancho = 0;
    paquete64* tablero;
    paquete16 fichas[5];

    ingresarDimencionesTablero(&altura, &ancho);

    int tamanioTablero;
    tamanioTablero = 0;
    tamanioTablero = (altura/8)*(ancho/8);
    tablero = new paquete64[tamanioTablero];
    for (int indiceBloque  = 0; indiceBloque  < tamanioTablero ; indiceBloque ++) {
        tablero[indiceBloque ] = 0ULL; // Inicia cada bit de paquete en 0
    }

    mostrarEstadoDeTablero(altura,ancho,tablero);
    ingresarMovimiento();

    delete[] tablero;

    return 0;
}
