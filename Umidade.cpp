#pragma once
#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Umidade: public Sensor{
  private:
    float u; // umidade de 20 a 90%

  public:
    Umidade(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    float getUmidadeRelativa(){
      this -> u = (70 * valor + 5100) / 255; // conversão do valor de 0 a 255 para 20 a 90%
      return this -> u;
    }
};