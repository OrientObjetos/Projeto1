#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Desumidificador: public Atuador{
  public:
    Desumidificador(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Atuador(nome, ligado, conectado, valor, min, max){}

    bool setConfiguracao(int valor, int min, int max){
      if (setValor(valor) == true){
        if(valor > max){
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
      if (setConfiguracao(valor, min, max) == true){
        cout << "Desumidificador ligado" << endl;
      }
      else{
        cout << "Desumidificador desligado" << endl;
      }
    }
};