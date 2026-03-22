#include <iostream>

using namespace std;

typedef unsigned long long paquete64;
typedef unsigned short paquete16;

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

void crearFichas(paquete16* fichas) {
    fichas[0] = 0b0000'1111'0000'0000;
    fichas[1] = 0b0110'1100'0000'0000;
    fichas[2] = 0b1110'0100'0000'0000;
    fichas[3] = 0b1000'1000'1100'0000;
    fichas[4] = 0b0000'0110'0110'0000;
}

void seleccionarFichaAleatoria(paquete16* fichas, paquete16* fichaAleatoria) {
    int aleatorio = std::rand() % 5;
    *fichaAleatoria = fichas[aleatorio];
}
