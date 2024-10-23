#pragma once
#include <cstdlib>
#include <ctime>
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
      this -> valor = min - 30 + rand() % (max - min + 31); // Gera um valor aleatório dentro dos limites, podendo gerar um pouco acima ou um pouco abaixo
      cout << nome << ": Valor gerado = " << this->valor << endl;
      return this -> valor;
    }

    virtual void print(){
      cout << nome << ": Valor atual = " << valor << endl; // Método genérico para imprimir o valor do sensor
    }
};