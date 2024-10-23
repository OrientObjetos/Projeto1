#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Lampada: public Atuador{
  private:
    int luz;

  public:
    Lampada(string nome, bool ligado, bool conectado, int valor, int min, int max, int luz):
      Atuador(nome, ligado, conectado, valor, min, max), luz{luz} {}

    bool setBrilho(int valor, int min, int max, int luz){
      if (setValor(valor) == true){
        if(valor < luz){
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
      if (setBrilho(valor, min, max, luz) == true){
        cout << "Lâmpada ligada" << endl;
      }
      else{
        cout << "Lâmpada desligada" << endl;
      }
    }
};