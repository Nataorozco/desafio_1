#include <iostream>

using namespace std;


void LimpiarFilaEnElTablero(){
    cout << "limpiar fila" << endl;

}

void mostrarEstadoDeTablero(int filas,int columnas){

    for (int fila = 1; fila <= filas; fila++){
        for (int elemento = 1; elemento <= columnas; elemento++){
            cout << elemento << " ";
        }
        cout<<endl; // Aqui hay un salto de linea
    }
}
