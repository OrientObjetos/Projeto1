#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Temperatura: public Sensor{
  private:
    int tC; // temperatura de 0 a 50°C
    int tF; // temperatura em Farenhait
    int tK; // temperatura em Kelvin

  public:
    Temperatura(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    float getTemperaturaEmC(){
      this -> tC = valor;
      return this -> tC;
    }
  
    float getTemperaturaEmF(){
      this -> valor = rand()%256;
      return (this -> valor * 1.8) + 32;
    }
  
    float getTemperaturaEmK(){
      this -> valor = rand()%256;
      return this -> valor + 273.15;
    }
};