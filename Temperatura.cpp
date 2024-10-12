#pragma once
#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Temperatura: public Sensor{
  private:
    float tC; // temperatura de 0 a 50°C
    float tF; // temperatura em Farenheit
    float tK; // temperatura em Kelvin

  public:
    Temperatura(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    float getTemperaturaEmC(){
      this -> tC = (50 * valor) / 255; // conversão do valor de 0 a 255 para 0 a 55°C
      return this -> tC;
    }
  
    float getTemperaturaEmF(){
      this -> tF = (tC * 1.8) + 32;
      return this -> tF;
    }
  
    float getTemperaturaEmK(){
      this -> tK = tC + 273.15;
      return this -> tK;
    }
};