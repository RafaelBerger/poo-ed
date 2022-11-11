#include "estrutura.h"
#include "pilha.h"
#include "fila.h"

using namespace std;



int main(){
    No* no1 = new No(2);
    No* no2 = new No(4);
    *no1 + no2;
    cout << "operator+ overload:" << endl;
    cout << "No1: " << no1->value << ", No1->prox:" << no1->next->value << endl;



    Fila fila;

    fila.Unshift(5);
    fila.Unshift(2);
    fila.Unshift(6);
    fila.Unshift(3);
    fila.Unshift(10);

    fila.Printa();

    fila.Shift();
    fila.Shift();

    fila.Printa();

   

    // Pilha pilha;

    // pilha.Push(5);
    // pilha.Push(2);
    // pilha.Push(6);

    // pilha.Printa();

    // pilha.Pop();


    // pilha.Printa();

    return 0;
}