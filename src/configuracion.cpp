#include <iostream>

using namespace std;


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

void creacionTablero(unsigned char* &tablero, int altura, int ancho){ // Esta funcion debe recibir la direccion en memoria del array que contiene el tablero
    cout << "Creando Tablero con " << altura << "x" << ancho << endl;
    tablero = new unsigned char[(altura * ancho) / 8]{0};
}
