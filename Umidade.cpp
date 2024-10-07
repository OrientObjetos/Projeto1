#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Umidade: public Sensor{
  int u; // umidade de 20 a 90%
  float getUmidadeRelativa(){
    this -> valor = rand()%256;
    return this -> valor;
  }
};