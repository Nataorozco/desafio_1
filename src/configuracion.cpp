#include <iostream>

using namespace std;

typedef unsigned long long paquete64;

void ingresarDimencionesTablero(int* alturaPtr, int* anchoPtr){
    int altura;
    int ancho;


    do {
        cout << "Ingrese la altura del tablero que desea\n(SOLO MULTIPLOS DE 8 'OHCO')\n>> ";
        cin >> altura;
        if ((altura&7)!=0) {
            cout << "El tamaño de alto que inseste no es valido (solo multiplos de 8)" << endl;
        }
    } while ((altura&7)!=0);

    do {

        cout << "Ingrese la ancho del tablero que desea\n(SOLO MULTIPLOS DE 8 'OHCO')\n>> ";
        cin >> ancho;
        if ((ancho&7)!=0) {
            cout << "El tamaño de ancho que inseste no es valido (solo multiplos de 8)" << endl;
        }
    } while ((ancho&7)!=0);
    
    *alturaPtr = altura;
    *anchoPtr = ancho;
}

void crearFichas(paquete64* fichas) {
    fichas[0] = 0b0000'0000'0000'0000;
    fichas[1] = 0b0000'0000'0000'0000;
    fichas[2] = 0b0000'0000'0000'0000;
    fichas[3] = 0b0000'0000'0000'0000;
    fichas[4] = 0b0000'0000'0000'0000;
}