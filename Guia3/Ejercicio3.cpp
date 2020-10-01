#include <iostream>
#include <conio.h>
#include "Funciones.hpp"

using namespace std;

bool isPair(int );
void sum(Stack *, int, int);


int main(){
    int sumP = 0, sumI = 0;
    Stack stack;
    initialize(&stack);
    
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 6);
    push(&stack, 7);
    push(&stack, 8);
    push(&stack, 9);
    push(&stack, 10);

    sum(&stack,sumP, sumI);
    getch();
    return 0;
}

bool isPair(int num) {
    if (num % 2 == 0) {
        return true;
    }else {
        return false;
    }
}

void sum(Stack *s, int sumP, int sumI) {
    
    // cuanto este vacia va a mostrar ya el resultado de la suma de toodos los elementos pares e impares
    if (empty(s)) {
        cout << "Mostrando suma de los pares: " << sumP << endl;
        cout << "Mostrando suma de los impares: " << sumI << endl;
        return;
    }else {
        if (isPair((*s)->element))      //verifico si el numero es par o no
        {
            sumP += (*s)->element;      //si es par lo sumo en la variable que contendra la suma de solo enteros
        }else{
            sumI += (*s)->element;      // si es impar lo sumo en la varibale que contenda la suma de solo impares
        }
        pop(s);     //elimno ese elemnto de mi pila
        sum(s, sumP, sumI);     // vulevo a llamar a mi funcion
    }
    
}