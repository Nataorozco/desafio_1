#include "configuracion.h"
#include "frontend.h"

int main()
{

    int altura, ancho;
    unsigned char* tablero;
    altura = 0;
    ancho = 0;

    ingresarDimencionesTablero(&altura, &ancho);

    // Prueba de coneccion con la funcion en frontend
    mostrarEstadoDeTablero(altura,ancho);

    return 0;
}
