#include "configuracion.h"
#include "frontend.h"
#include "mecanica.h"
#include "movimiento.h"

#include <cstdlib> // Necesaria para rand() y srand()
#include <ctime>   // Necesaria para time()

typedef unsigned long long paquete64;
typedef unsigned short paquete16;

void imprimirTablero(paquete64* superMascara, int numBloques, int anchoBytes);

int main()
{
    int altura;
    int ancho;
    paquete64* tablero;
    paquete16* fichas[5];
    paquete16 fichaAleatoria;
    altura = 0;
    ancho = 0;

    ingresarDimencionesTablero(&altura, &ancho);

    std::srand(std::time(0));

    int tamanioTablero;
    tamanioTablero = 0;
    tamanioTablero = (altura/8)*(ancho/8);
    tablero = new paquete64[tamanioTablero];
    for (int indiceBloque  = 0; indiceBloque  < tamanioTablero ; indiceBloque ++) {
        tablero[indiceBloque ] = 0ULL; // Inicia cada bit de paquete en 0
    }

    crearFichas(*fichas);
    seleccionarFichaAleatoria(*fichas, &fichaAleatoria);

    int puntoEntrada = 0;

    if ((ancho&1)==0) {
        puntoEntrada = (ancho/2)-1;
    }
    else {
        puntoEntrada = (ancho/2)+2;
    }

    pintarFicha(puntoEntrada, 0, ancho, altura, tablero, fichaAleatoria);

    mostrarEstadoDeTablero(altura,ancho,tablero);
    ingresarMovimiento();


    delete[] tablero;

    return 0;
}
