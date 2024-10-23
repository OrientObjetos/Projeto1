#pragma once
#include <iostream>
#include "Sala.cpp"
using namespace std;

int main() {
  Sala s1(10, 100), s2(20, 200), s3(90, 150);
  Sala* salas[3];
  salas[0] = &s1;
  salas[1] = &s2;
  salas[2] = &s3;
  
  for(int i = 0; i < 3; i++){
    salas[i] -> atualizarSensores(); // Atualiza e imprime os valores dos sensores
    salas[i] -> atualizarAtuadores(); // Atualiza os atuadores com base nos sensores e imprime o estado dos atuadores
  }
  return 0;
}