#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Lampada: public Atuador{
  public:
    Lampada(string nome, bool ligado, bool conectado, int valor):
      Atuador(nome, ligado, conectado, valor){}

    bool setBrilho(int valor){
      if(valor < 1 || valor > 255 ){
        desligar();
        return false;
      } 
      else{
        ligar();
        return true;
      }
    }
};