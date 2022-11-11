#ifndef PILHA_H
#define PILHA_H


#include "estrutura.h"


class Pilha{
    private:
        Lista lista;

    public:
        Pilha(){}

        void Push(int valor){
            lista.inserirInicio(valor);
        }

        void Pop(){
            lista.removeFirst();
        }

        void Printa(){
            lista.print();
        }


};


#endif