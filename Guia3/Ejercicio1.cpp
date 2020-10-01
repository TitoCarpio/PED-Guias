#include <iostream>
#include <conio.h>
#include "Funciones.hpp"

using namespace std;

void menu(Stack *s) {
    int option;
    bool status = true;
    while (status)
    {
        cout << "\n" << "***** MENU DE PILAS *****" << endl;
        cout << "1. Ingresar elemento a la pila" << endl;
        cout << "2. Eliminar elemento de la pila" << endl;
        cout << "3. Salir del menu" << endl;
        cout << "\n" << "Ingrese la opcion que deseas ejectuar: ";
        cin >> option;
        cout << "\n";

        switch (option)
        {
            case 1:
                int element;
                cout << "Ingrese el elemento a agregar a la pila: ";
                cin >> element;
                push(s, element);
                cout << "Mostrando la pila actualizada" << endl;
                showStack(s);
                break;
            case 2:
                pop(s);
                cout << "Mostrando la pila actualizada" << endl;
                showStack(s);
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                break;
        }
    }
}

int main(){

    Stack pila;
    initiliaze(&pila);

    menu(&pila);




    getch();
    return 0;
}