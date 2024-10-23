#pragma once
#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{
  private:
    int limiarClaridade;

  public:
    Luminosidade(string nome, bool ligado, bool conectado, int valor, int min, int max):
      Sensor(nome, ligado, conectado, valor, min, max) {}

    void setLimiarClaridade(int limiar){
      limiarClaridade = limiar;
    }

    bool estaClaro(){
      if(this -> valor >= limiarClaridade){
        return true;
      }
      else{
        return false;
      }
    }

    virtual void print(){
      if (estaClaro() == true){
        cout << "Luminosidade: " << this -> valor << " - Claro" << endl;
      }
      else{
        cout << "Luminosidade: " << this -> valor << " - Escuro" << endl;
      }
    }
};