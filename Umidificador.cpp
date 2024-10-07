#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Umidificador: public Atuador{
  bool setConfiguracao(int valor){
    if(valor > 128){
      void desligar();
      return false;
    }
    else{
      void ligar();
      return true;
    }
  }
};