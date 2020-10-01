#include <iostream>

using namespace std;

struct Node {
    int element;
    struct Node *next;
};
typedef struct Node *Stack;

void initiliaze(Stack *s) {
    *s = NULL ;

}

bool empty(Stack *s) {
    return *s == NULL ;
}

void push(Stack *s, int e) {
    struct Node *node = new struct Node;
   
    node->element = e;
    node->next = *s;

    *s = node;
}

void pop(Stack *s) {
    if (!empty(s)) {
        struct Node *aux = *s;
        *s = (*s)->next;
        delete(aux);
    }else {
        return;
    }
}

void showStack(Stack *s) {
    struct Node *clone = *s;
    bool isEmpty = false;
    while (!isEmpty) {
        if (!empty(&clone))
        {
            cout << clone->element << " ";
            clone = clone->next;
        }else {
            isEmpty = true;
        }
    }
}
