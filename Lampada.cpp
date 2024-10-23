#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Lampada: public Atuador{
  public:
    Lampada(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Atuador(nome, ligado, conectado, valor, min, max){}

    bool setBrilho(int valor, int min, int max){
      if (setValor(valor) == true){
        if(valor < min){
          return true;
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    }

    virtual void print(){
      if (setBrilho(valor, min, max) == true){
        cout << "Lâmpada ligada" << endl;
      }
      else{
        cout << "Lâmpada desligada" << endl;
      }
    }
};