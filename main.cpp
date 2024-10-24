/*
Nome: Gabrielle Magalhães Veras Braga
R.A: 11.121.557-0
Nome: Gustavo Rosell Collado
R.A: 11.121.526-5
8° ciclo do curso de Engenharia de Automação e Controle
Projeto 1 da disciplina CCP140 - Orientação a Objetos, 
do Departamento de Ciência da Computação, ministrada pelo
Professor Dr. Leonardo Anjoletto
Data de apresentação do projeto: 23/10/2024
*/

#pragma once
#include <iostream>
#include "Sala.cpp"
using namespace std;

int main() {
  Sala s1(123, 153, 30, 95, 204, 238, 30);     // temperatura entre 24°C e 30°C, ambiente escuro, e umidade relativa do ar entre 80% e 90% (o limiar - último valor - faz com que o código sempre entenda a sala como escura e nunca acendaa lâmpada)
  Sala s2(118, 132, 36, 205, 102, 238, 128);   // temperatura entre 23°C e 26°C, ambiente claro, e umidade relativa do ar entre 50% e 60%
  Sala s3(108, 137, 74, 205, 68, 102, 128);    // temperatura entre 21°C e 27°C, ambiente claro, e umidade relativa do ar entre 40% e 50%
  Sala* salas[3];
  salas[0] = &s1;
  salas[1] = &s2;
  salas[2] = &s3;
  
  for(int i = 0; i < 1440; i++){
    cout << "---------------------------------------------------" << endl;
    cout << i+1 << "° atualização" << endl;
    for(int j = 0; j <= 2; j++){
      cout << endl;
      if(j + 1 == 1){
        cout << "Sala de cultivo de cogumelos:" << endl;
      }
      if(j + 1 == 2){
        cout << "Sala de Aquário de peixe Guppy:" << endl;
      }
      if(j + 1 == 3){
        cout << "Sala de Cultivo Indoor de Plantas:" << endl;
      }
      cout << endl;
      salas[j] -> atualizarSensores(); // Atualiza e imprime os valores dos sensores
      cout << endl;
      salas[j] -> atualizarAtuadores(); // Atualiza os atuadores com base nos sensores e imprime o estado dos atuadores
      cout << endl;
    }
  }

  return 0;
}