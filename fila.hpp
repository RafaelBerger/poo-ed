#ifndef FILA_H
#define FILA_H

#include "estrutura.h"


class Fila{
    private:
        Lista lista;

    public:
        Fila(){}

        void Unshift(int valor){
            lista.inserirInicio(valor);
        }

        void Shift(){
            lista.removeLast();
        }

        void Printa(){
            lista.print();
        }


};


#endif
