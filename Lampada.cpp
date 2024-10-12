#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Lampada: public Atuador{
  bool setBrilho(int valor){
    if(valor < 1 || valor > 255 ){
      void desligar();
      return false;
    } 
    else{
      void ligar();
      return true;
    }
  }
};