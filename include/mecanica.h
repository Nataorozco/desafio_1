#ifndef MECANICA_H
#define MECANICA_H

    typedef unsigned long long paquete64;
    typedef unsigned short paquete16;

    void pintarFicha(int x_inicio, int y_inicio, int ancho, int altura, paquete64* mascara, paquete16 ficha);
    void procesarMovimientoActualizaTableroConAccionFichaTablero();

#endif
