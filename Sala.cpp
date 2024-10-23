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
    int min, max;

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
    Sala(int min, int max):
      min{min}, max{max}, 
      sensor_temp{"Sensor de temperatura", true, true, 0, min, max},
      sensor_lum{"Sensor de luminosidade", true, true, 0, min, max},
      sensor_umi{"Sensor de umidade", true, true, 0, min, max},
      vent{"Ventilador", true, true, 0},
      lamp{"Lampada", true, true, 0},
      umi{"Umidificador", true, true, 0},
      desumi{"Desumidificador", true, true, 0}{
      
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
        }
        else{
          atuadores[i] -> setValor(valores[i]);
        }
      }
    }
};