#pragma once
#include <iostream>
#include <iomanip>
#include "Sensor.cpp"
using namespace std;

class Umidade: public Sensor{
  public:
    Umidade(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    float getUmidadeRelativa(){
      return (75.00 * valor + 5100.00) / 255; // conversão do valor de 0 a 255 para 20 a 95%
    }

    virtual void print(){
      cout << fixed << setprecision(2);
      cout << "Umidade relativa: " << getUmidadeRelativa() << "%" << endl;
    }
};