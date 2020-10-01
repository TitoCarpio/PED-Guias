#include <iostream>
#include <conio.h>
#include "Funciones.hpp"

using namespace std;

void llenado(int [],int [],int);
bool ispair(int);

int main(){

    int n = 0;
    Stack pares, impares;
    initiliaze(&pares);
    initiliaze(&impares);
    
    cout<<"\t Cuantos elementos desea que tenga su arreglo:";
    cin>>n;

    int a[n], b[n], c[n];

    llenado(a,b,n);

    cout<<"\t Multiplicando......"<<endl;
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i]*b[i];
    }
    
    // verificando si es par o imar y llenando en las pilas
    cout << "\n" << "Verificando par e impar para agregar a pilas.... " << endl;
    for (int i = 0; i < n; i++) {
        if (ispair(c[i])) {
            push(&pares, c[i]);
        }else {
            push(&impares, c[i]);
        }
    }

    cout<<"\t Imprimiendo pila de numeros pares"<<endl;
    showStack(&pares);
    cout<<endl;
    cout<<"\t Imprimiendo pila de numeros impares"<<endl;
    showStack(&impares);


    getch();
    return 0;
}

void llenado(int *p, int *q, int n){
    cout<<"\t Llenado de arreglo uno:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t Ingrese el valor ["<<i<<"] :";
        cin>>p[i];
        
    }

    cout<<"\t Llenado del arreglo dos:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t Ingrese el valor ["<<i<<"] :";
        cin>>q[i];
    }
}

bool ispair(int n){
    if (n%2 == 0)
    {
        return true;
    }else
    {
        return false;
    }
    
    
}