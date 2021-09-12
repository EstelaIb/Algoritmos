#include <iostream>
using namespace std;
#include "quicksort.h"

void mostrar(int arreglo [MAX], int numero) {
    cout << "> \tElementos no ordenados" << endl;
    for (int i = 0; i < numero; i++) {
        cout << "\t[" << arreglo[i] << "] ";
    }
    cout << endl;
}

void Ordenamientoquicksort(int primero, int ultimo, int arreglo[MAX]) { 
    int i, j, medio , aux; 
    i = primero; 
    j = ultimo; 
    medio = arreglo [ (primero + ultimo) /2 ];
    do { 
        while( medio > arreglo[i]) i++;
        while( medio < arreglo[j]) j--;
        if( i <= j ) { 
            aux = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = aux;
            i++;
            j--;
        } 
    } while( i <= j ); 

    if( primero < j ) { 
        Ordenamientoquicksort(primero, j, arreglo);
    } 
    if(ultimo > i ) { 
        Ordenamientoquicksort(i, ultimo, arreglo);
    }
}

void Ordenarelementos (int arreglo [MAX], int numero) {
    cout <<"> \tElementos ordenados"<<endl;
    
    for (int i =0;i < numero;i++){
        cout<<"\t["<< arreglo[i]<<"] ";
    }
}