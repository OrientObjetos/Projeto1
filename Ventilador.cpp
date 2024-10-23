#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Ventilador: public Atuador{
  private:
    int v_max = 100;
    int v_min = 30;

  public:
    Ventilador(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Atuador(nome, ligado, conectado, valor, min, max){}

    bool setVelocidade(int valor, int min, int max){
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
      if (setVelocidade(valor, min, max) == true){
        cout << "Ventilador ligado" << endl;
      }
      else{
        cout << "Ventilador desligado" << endl;
      }
    }
};