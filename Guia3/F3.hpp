#include <iostream>

using namespace std;

struct book {
    string Titulo;
    int numPaginas;
    struct book *next;
};
typedef struct book *Stack;

void initialize(Stack *s) {
    *s = NULL ;

}

bool empty(Stack *s) {
    return *s == NULL ;
}

void push(Stack *s, string titulo,int e) {
    struct book *node = new struct book;
   
    node->Titulo = titulo;
    node->numPaginas = e;
    node->next = *s;

    *s = node;
}

void pop(Stack *s) {
    if (!empty(s)) {
        struct book *aux = *s;
        *s = (*s)->next;
        delete(aux);
    }else {
        return;
    }
}

void showStack(Stack *s) {
    struct book *clone = *s;
    bool isEmpty = false;
    while (!isEmpty) {
        if (!empty(&clone))
        {
            cout<<clone->Titulo;
            cout<< clone->numPaginas << " ";
            clone = clone->next;
        }else {
            isEmpty = true;
        }
    }
}

void encotarNumPBook(Stack *s, string titulo){
    if((*s)->Titulo == titulo){
        cout<<"\t El libro que busca cuenta con "<<(*s)->numPaginas<<" paginas."<<endl;
        return;
    }else
    {
        pop(s);
        encotarNumPBook(s,titulo);
    }
    

}