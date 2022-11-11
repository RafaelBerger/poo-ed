#ifndef ESTRUTURA_H
#define ESTRUTURA_H
#include <iostream>

using namespace std;

class No {
  public:
  int value;
  No* next;

  No(int value) {
    this->next = nullptr;
    this->value = value;
  }

  void operator+(No* No) {
    if(!this->next)           //verifica se o no possui um proximo
      this->next = No;        //se não, ele vincula com o passado pelo parametro
  }
};

class Lista {
  private:
  int size = 0;
  No* first = nullptr;
  No* last = nullptr;

  No* createNo(int value) {
    return new No(value);
  }

  public:
  Lista() {}

  No* getFirst() {return first;}
  No* getLast() {return last;}

  void inserirInicio(int value){
    No* No = createNo(value);

    No->next = first;
    first = No;
    size++;
  }
  
  void removeFirst(){
    No* noARemover;
    noARemover = first;
    first = first->next;

    delete noARemover;
  }

  void removeLast(){
    No *noARemover = first;
    if(first == nullptr){
        cout << "A estrutura esta vazia" << endl;
    }else if(first->next == nullptr){
      delete first;
    }else{
      while(noARemover->next->next != nullptr){
        noARemover = noARemover->next;
      }
      delete noARemover->next;
      noARemover->next = nullptr;
    }
    

  }


  void print() {
    No *No = first;
    while(No) {
      cout << No->value << " ";
      No = No->next;
    }
    cout << endl;
  }
};

#endif
