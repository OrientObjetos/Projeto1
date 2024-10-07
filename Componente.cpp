#pragma once
#include <iostream>
using namespace std;

class Componente{
  protected:
    int valor;
    bool ligado;       // saber se o componente está ligado
    bool conectado;    // saber se o componente está conectado a rede (usar try catch)
    string nome;

  public:
    Componente(string nome, bool ligado, bool conectado, int valor):
      nome{nome}, ligado{ligado}, conectado{conectado}, valor{valor} {}

    void setLigar(bool ligado){
      this -> ligado = ligado;
    }

    void setConectar(bool conectado){
      this -> conectado = conectado;
    }

    void setNome(string nome){
      this -> nome = nome;
    }

    void ligar(){
      this -> ligado = true;
    }

    void desligar(){
      this -> ligado = false;
    }

    void conectar(){
      this -> conectado = true;
    }

    void desconectar(){
      this -> conectado = false;
    }

    virtual int getValor(){
      return this -> valor;
    }
};