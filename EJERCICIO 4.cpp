//Ejecicio_4 JR//
//Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un n�mero//
//cualquiera por pantalla, el n�mero se pedir� en el programa principal. Usar procedimiento//
#include <iostream>
using namespace std;

void tablaMultiplicar(int num) {
    for (int i = 1; i <= 20; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    tablaMultiplicar(num);
    return 0;
}


