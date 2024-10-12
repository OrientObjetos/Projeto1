#pragma once
#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Ventilador: public Atuador{

  int v_max = 100;
  int v_min = 30;

  bool setVelocidade(int velocidade){
    if(velocidade == 0){
      this->desligar();
      return true;
    }
      
    else if(velocidade > 0 && velocidade < v_min){
      this->valor = v_min;
      return true;
    }
      
    else if (velocidade > v_max){
      return false;
    }
    return false;
  }
};