#include <iostream>

using namespace std;

unsigned int rules = 0b000'000'000;
unsigned int multiploDeOCHO = 0b1;

void ingresarDimencionesTablero(){
    int altura;
    int ancho;


    do {
        cout << "Ingrese la altura del tablero que desea\n(SOLO MULTIPLOS DE 8 'OHCO')\n>> ";
        cin >> altura;
    } while ((altura&7)!=0);

    do {

        cout << "Ingrese la ancho del tablero que desea\n(SOLO MULTIPLOS DE 8 'OHCO')\n>> ";
        cin >> ancho;
    } while ((ancho&7)!=0);

}

int main()
{
    ingresarDimencionesTablero();
    return 0;
}
