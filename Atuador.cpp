#pragma once
#include <iostream>
#include "Componente.cpp"
using namespace std;

class Atuador: public Componente{
  protected:
    int min;
    int max;

  public:
    Atuador(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Componente(nome, ligado, conectado, valor), min{min}, max{max} {}

    bool setValor(int valor){
      if(valor < 0 || valor > 255){
        return false;
      }
      else{
        this -> valor = valor;
        return true;
      }
    }

    virtual void print(){
      cout << nome << ": Valor atual = " << valor << endl; // Método genérico para imprimir o valor recebido do sensor
    }
};