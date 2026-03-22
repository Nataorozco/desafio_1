#include "configuracion.h"
#include "frontend.h"
#include "mecanica.h"

typedef unsigned long long paquete64;
typedef unsigned short paquete16;

int main()
{

    int altura;
    int ancho;
    altura = 0;
    ancho = 0;
    paquete64* tablero;
    paquete16 piezaActual = 0;

    ingresarDimencionesTablero(&altura, &ancho);

    int tamanioTablero;
    tamanioTablero = 0;
    tamanioTablero = (altura/8)*(ancho/8);
    tablero = new paquete64[tamanioTablero];
    for (int indiceBloque  = 0; indiceBloque  < tamanioTablero ; indiceBloque ++) {
        tablero[indiceBloque ] = 0ULL; // Inicia cada bit de paquete en 0
    }

    //mostrarEstadoDeTablero(altura,ancho,tablero);

    paquete16 fichaPalito = 0b0000'1111'0000'0000;
    paquete16 fichaEle = 0b1000'1000'1100'0000;
    paquete16 fichaEse = 0b1100'1100'0000'0000;
    paquete16 fichaCuadrado = 0b0000'0110'0110'0000;
    paquete16 fichaTe = 0b0000'1110'0100'0000;

    int puntoEntradaFficha;
    if ((ancho&1)==0) {
        puntoEntradaFficha = (ancho/2)-1;
    }
    if ((ancho&1)!=0) {
        puntoEntradaFficha = (ancho/2)+2;
    }


    piezaActual = fichaCuadrado;

    pintarFicha(puntoEntradaFficha, 0, ancho, altura,tablero, piezaActual);

    mostrarEstadoDeTablero(altura,ancho,tablero);

    delete[] tablero;

    return 0;
}
