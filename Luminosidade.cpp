#include <iostream>
#include "Sensor.cpp"
using namespace std;

class Luminosidade: public Sensor{
  protected:
  int limiarClaridade;

  public:
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
};