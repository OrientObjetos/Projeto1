#pragma once
#include <iostream>
#include "Sensor.cpp"
#include "Atuador.cpp"
using namespace std;

class Sala{
  Sensor sensores[3];
  Atuador atuador[4];

  public:
  void atualizarSensores(){
    for(int i = 0; i < sizeof(sensores); i++){
      sensores[i].getValor();
    }
  }

  void atualizarAtuadores(){ // atualizar os atuadores com base nos sensores
    for(int i = 0; i < sizeof(atuador); i++){
      atuador[i].getValor();
    }
  }
};