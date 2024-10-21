#pragma once
#include <iostream>
#include "Componente.cpp"
using namespace std;

class Atuador: public Componente{
  public:
    Atuador(string nome, bool ligado, bool conectado, int valor):
      Componente(nome, ligado, conectado, valor){}

    virtual bool setValor(int valor){
      if(valor < 0 || valor > 255){
        return false;
      }
      else{
        this -> valor = valor;
        return true;
      }
    }
};