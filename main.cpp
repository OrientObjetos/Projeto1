#include <iostream>
#include <vector>
#include "Sala.cpp"
#include "Temperatura.cpp"
#include "Umidade.cpp"
#include "Luminosidade.cpp"
#include "Lampada.cpp"
#include "Ventilador.cpp"
#include "Umidificador.cpp"
#include "Desumidificador.cpp"

using namespace std;

int main() {
  // Configuração de sensores e atuadores para as salas
  vector<Sensor*> sensoresSala1 = {
    new Temperatura("Sensor Temp Sala 1", true, true, 0, 0, 255),
    new Umidade("Sensor Umidade Sala 1", true, true, 0, 0, 255),
    new Luminosidade("Sensor Luz Sala 1", true, true, 0, 0, 255)
  };

  vector<Atuador*> atuadoresSala1 = {
    new Lampada(),
    new Ventilador(),
    new Umidificador(),
    new Desumidificador()
  };

  // Criação da sala 1
  Sala sala1(sensoresSala1, atuadoresSala1);

  // Loop para simular a leitura e controle dos sensores e atuadores
  for (int i = 0; i < 1440; i++) {
    cout << "Atualizando sala 1 - ciclo " << i + 1 << endl;
    sala1.atualizarSensores();
    sala1.atualizarAtuadores();
    cout << "-----------------------------------" << endl;
  }

  return 0;
}