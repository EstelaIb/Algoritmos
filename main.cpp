#include <iostream>
using namespace std;
#include "quicksort.h"
int arreglo[MAX];
int main () {
    int numero = 0;
    cout << "\t\t Q U I C K S O R T \t\t" << endl << endl;
    cout << "> Ingrese la longitud del arreglo: ";
    cin >> numero;
    for (int i = 0; i < numero; i++) {
        cout << "> Elemento " << i+1 << " :";
        cin >> arreglo [i];
    }
    cout << endl;
    mostrar (arreglo, numero);
    Ordenamientoquicksort(0, numero - 1, arreglo);
    Ordenarelementos (arreglo, numero);
    system ("pause");
    return 0;
}
