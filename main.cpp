#pragma once
#include <iostream>
#include "Sala.cpp"
using namespace std;

int main() {
  Sala s1(123, 153, 30, 95, 204, 238, 128);     // temperatura entre 24°C e 30°C, ambiente escuro, e umidade relativa do ar entre 80% e 90%
  Sala s2(118, 132, 36, 205, 102, 238, 128);   // temperatura entre 23°C e 26°C, ambiente claro, e umidade relativa do ar entre 50% e 60%
  Sala s3(108, 137, 74, 205, 68, 102, 128);     // temperatura entre 21°C e 27°C, ambiente claro, e umidade relativa do ar entre 40% e 50%
  Sala* salas[3];
  salas[0] = &s1;
  salas[1] = &s2;
  salas[2] = &s3;
  
  for(int i = 0; i < 3; i++){
    cout << "---------------------------------------------------" << endl;
    cout << "Sala " << i+1 << endl;
    salas[i] -> atualizarSensores(); // Atualiza e imprime os valores dos sensores
    salas[i] -> atualizarAtuadores(); // Atualiza os atuadores com base nos sensores e imprime o estado dos atuadores
  }
  return 0;
}