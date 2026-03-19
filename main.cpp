#include <iostream>

using namespace std;

void ingresarDimencionesTablero(){
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

}

int main()
{
    ingresarDimencionesTablero();
    return 0;
}
