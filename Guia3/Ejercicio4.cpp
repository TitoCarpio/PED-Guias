#include <iostream>
#include <conio.h>
#include "Funciones.hpp"

using namespace std;

void invertir(Stack*,Stack *);


int main(){
    Stack stack, invStack;
    initialize(&stack);
    initialize(&invStack);

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

    cout<<"\t Mostrando pila original..."<<endl;
    showStack(&stack);
    cout<<endl;

    invertir(&stack,&invStack);
    cout<<"\t Mostrando la pila invertida..."<<endl;
    showStack(&invStack);
    cout<<endl;




    getch();
    return 0;
}

// funcion que me ayuda a invertir el contenido de mi pila;
void invertir(Stack *s, Stack *p){
    int aux = 0;        //variable donde guardare el elemento de la primera pila antes de borrarlo
    if (empty(s))       //si esta vacia la pila solo vuelve al main
    {
        return;
    } else
    {
        aux = (*s)->element;        //guardo el elemento en la variable
        push(p,aux);                //guardo el valor de ka variable en la otra pila
        pop(s);                     //borro el elemento copiado

        invertir(s,p);              // llamo de nuevo a mi funcion
    }
    
}