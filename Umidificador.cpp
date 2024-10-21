#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Umidificador: public Atuador{
  public:
    Umidificador(string nome, bool ligado, bool conectado, int valor):
      Atuador(nome, ligado, conectado, valor){}

    bool setConfiguracao(int valor){
      if(valor > 128){
        desligar();
        return false;
      }
      else{
        ligar();
        return true;
      }
    }
};