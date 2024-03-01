/*#include <iostream>
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
}*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables para almacenar los números
    float numero1, numero2, numero3, mayor;

    // Solicitar al usuario que ingrese tres números
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    // Comparar los números para encontrar el mayor
    if (numero1 > numero2 && numero1 > numero3) {
        mayor = numero1;
    } else if (numero2 > numero1 && numero2 > numero3) {
        mayor = numero2;
    } else {
        mayor = numero3;
    }

    // Mostrar el resultado
    cout << "El mayor de los tres números ingresados es: " << mayor << endl;

    return 0;
}

