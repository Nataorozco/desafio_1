// funciones.h
#ifndef CONFIGURACION_H
#define CONFIGURACION_H

    typedef unsigned long long paquete64;
    typedef unsigned short paquete16;

    void ingresarDimencionesTablero(int*, int*);
    void crearFichas(paquete16* fichas);
    void seleccionarFichaAleatoria(paquete16* fichas, paquete16* fichaAleatoria);

#endif
