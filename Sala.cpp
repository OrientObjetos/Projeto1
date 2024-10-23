#pragma once
#include <iostream>
#include "Temperatura.cpp"
#include "Umidade.cpp"
#include "Luminosidade.cpp"
#include "Lampada.cpp"
#include "Ventilador.cpp"
#include "Umidificador.cpp"
#include "Desumidificador.cpp"
using namespace std;

class Sala{
  protected:
    int minT, maxT, minL, maxL, minU, maxU, luz;

    Temperatura sensor_temp;
    Luminosidade sensor_lum;
    Umidade sensor_umi;
                            
    Ventilador vent;
    Lampada lamp;
    Umidificador umi;
    Desumidificador desumi;
                       
    Sensor* sensores[3];
    Atuador* atuadores[4];
    int valores[3];

  public:
    Sala(int minT, int maxT, int minL, int maxL, int minU, int maxU, int luz):
      minT{minT}, maxT{maxT}, minL{minL}, maxL{maxL}, minU{minU}, maxU{maxU}, luz{luz}, 
      sensor_temp{"Sensor de temperatura", true, true, 0, minT, maxT},
      sensor_lum{"Sensor de luminosidade", true, true, 0, minL, maxL},
      sensor_umi{"Sensor de umidade", true, true, 0, minU, maxU},
      vent{"Ventilador", true, true, 0, minT, maxT},
      lamp{"Lampada", true, true, 0, minL, maxL, luz},
      umi{"Umidificador", true, true, 0, minU, maxU},
      desumi{"Desumidificador", true, true, 0, minU, maxU}{
      
        sensores[0] = &sensor_temp;
        sensores[1] = &sensor_lum;
        sensores[2] = &sensor_umi;
      
        atuadores[0] = &vent;
        atuadores[1] = &lamp;
        atuadores[2] = &umi;
        atuadores[3] = &desumi;
      }

    void atualizarSensores(){
      cout << "Atualizando sensores..." << endl;
      sensor_lum.setLimiarClaridade(luz);
      for(int i = 0; i < 3; i++){
        valores[i] = sensores[i] -> getValor();
        sensores[i] -> print();
      }
    }

    void atualizarAtuadores(){
      cout << "Atualizando atuadores..." << endl;
      for(int i = 0; i < 4; i++){
        if (i == 3){
          atuadores[i] -> setValor(valores[2]);
          atuadores[i] -> print();
        }
        else{
          atuadores[i] -> setValor(valores[i]);
          atuadores[i] -> print();
        }
      }
    }
};