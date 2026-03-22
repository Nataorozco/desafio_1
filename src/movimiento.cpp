#include <iostream>
#include "mecanica.h"

void moverIzquierda();
void moverDerecha();
void bajarPieza();
void rotarPieza();


using namespace std;

void ingresarMovimiento() {
    char accion;
    cout << "Ingrese una Accion: [A]Izq [D]Der [S]Bajar [W]Rotar [Q]Salir: ";
    cin >> accion;

    accion = toupper(accion);// si el usuario ingresa una letra minuscula la cambia a mayuscula

    if (accion == 'A') {
        moverIzquierda();
    }
    else if (accion == 'D') {
        moverDerecha();
    }
    else if (accion == 'S') {
        bajarPieza();
    }
    else if (accion == 'W') {
        rotarPieza();
    }
    else if (accion == 'Q') {
        cout << "Saliendo del juego..." << endl;
    }
    else {
        cout << "Movimiento no valido. Intente de nuevo." << endl;
    }

}
void moverIzquierda(int x_inicio, int y_inicio, int ancho, int altura, paquete64* mascara, paquete16 ficha) {
    cout << "Realize movimiento a la izquierda" << endl;
}

void moverDerecha() {
    cout << "Realize movimiento a la derecha" << endl;
}

void bajarPieza() {
    cout << "Mueva la pieza hacia abajo" << endl;
}

void rotarPieza() {
    cout << "Rote la pieza" << endl;
}

void ingregarFichaAletoriaEnTablero(){
    // La seleccion e ingreso de ficha será impertiva en donde el concepto de ficha no es independiente
}
