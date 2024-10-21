#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Desumidificador: public Atuador{
  public:
    Desumidificador(string nome, bool ligado, bool conectado, int valor):
      Atuador(nome, ligado, conectado, valor){}

    bool setConfiguracao(int valor){
      if(valor > 128){
        ligar();
        return true;
      }
      else{
        desligar();
        return false;
      }
    }
};