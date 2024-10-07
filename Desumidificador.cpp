#include <iostream>
#include "Atuador.cpp"
using namespace std;

class Desumidificador: public Atuador{
  bool setConfiguracao(int ){
    if(valor > 128){
      void ligar();
      return true;
    }
    else{
      void desligar();
      return false;
    }
  }
};