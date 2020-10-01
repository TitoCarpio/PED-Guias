#include <iostream>
#include <conio.h>
#include "F3.hpp"
#include <string.h>

using namespace std;

int main(){
    Stack Libros;
    initialize(&Libros);

    push(&Libros, "Libro 1", 250);
    push(&Libros, "Libro 2", 150);
    push(&Libros, "Libro 3", 175);
    push(&Libros, "Libro 4", 200);

    string titulo;

    cout<<"\t Ingrese el titulo del libro a buscar: ";
    getline(cin,titulo);

    encotarNumPBook(&Libros,titulo);

    getch();
    return 0;
}
