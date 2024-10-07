#pragma once
#include <iostream>
#include "Componente.cpp"
using namespace std;

class Atuador: public Componente{
  public:
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