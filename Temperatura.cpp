#pragma once
#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Temperatura: public Sensor{
  public:
    Temperatura(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    float getTemperaturaEmC(){
      return (50 * valor) / 255; // conversão do valor de 0 a 255 para 0 a 50°C
    }

    float getTemperaturaEmF(){
      return (getTemperaturaEmC() * 1.8) + 32; // conversão de Celcius para Fahrenheit
    }

    float getTemperaturaEmK(){
      return getTemperaturaEmC() + 273.15; // conversão de Celcius para Kelvin
    }

    virtual void print(){
      cout << "Temperatura em Celsius: " << getTemperaturaEmC() << "°C" << endl;
      cout << "Temperatura em Farenheit: " << getTemperaturaEmF() << "°F" << endl;
      cout << "Temperatura em Kelvin: " << getTemperaturaEmK()<< "K" << endl;
    }
};