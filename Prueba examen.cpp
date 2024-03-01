#include <iostream>
using namespace std;

int main() {
    float precio, Descuento, precioDescuento;

    cout << "Ingrese el precio del articulo: ";
    cin >> precio;

    cout << "Ingrese el porcentaje de descuento aplicable: ";
    cin >> Descuento;

    if (Descuento >= 0 && Descuento <= 100) {
        precioDescuento = precio - (precio * Descuento / 100);
        cout << "El precio despues del descuento es: " << precioDescuento << endl;
    } else {
        cout << "Porcentaje de descuento no valido. \n Debe estar entre 0 y 100." << endl;
    }

    return 0;
}
