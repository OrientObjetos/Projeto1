#pragma once
#include <iostream>
#include "Componente.cpp"
using namespace std;

class Sensor: public Componente{
  protected:
    int min;
    int max;

  public:
    Sensor(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Componente(nome, ligado, conectado, valor), min{min}, max{max} {}
    
    int getValor(){
      this -> valor = min + rand() % (max - min + 1);
      return this -> valor;
    }
};