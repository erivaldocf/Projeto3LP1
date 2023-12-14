#include <iostream>
#include "tecnico.hpp"

using namespace std;

// Construtor Padrão
TecnicoADM::TecnicoADM(){
}

// Construtor Carregado
/*
TecnicoADM::TecnicoADM(float newAdicional, string fd):adicional(newAdicional),funcaoDesempenhada(fd){
  if (cargaHoraria < 100){
    newAdicional = 0;
  } else if (cargaHoraria < 200){
    newAdicional = 0.10;
  } else{
    newAdicional = 0.25;
  }
}
*/

TecnicoADM::TecnicoADM(string m, float s, string p, int ch, string in, string f, double bt) 
          : Funcionario{m, s, p, ch, in}, funcaoDesempenhada{f}, bonusTecnico{bt} { }

/**
 * @brief Função que calcula o bonus de produtividade do Tecnico
 * @param carga horaria dos tecnicos
 * @return o bonus de produtividade dos tecnicos
*/
double TecnicoADM::bonusProdutividade(int CH){
  return CH * 0.14;
}

// Funções de Acesso
string TecnicoADM::getFuncaoDesempenhada(){ /** Pega a função desempenhada do tecnico*/
  return funcaoDesempenhada;
}

double TecnicoADM::getBonusTecnico(){ /** Pega o bonus de produtividade do tecnico*/ 
  return bonusTecnico;
}

// Funções de Modificação
void TecnicoADM::setfuncaoDesempenhada(string novaFuncaoDesempenhada){ /** Seta a função desempenhada do tecnico*/
  funcaoDesempenhada = novaFuncaoDesempenhada;
}

void TecnicoADM::setBonusTecnico(double novoBonusTecnico){ /** Seta o bonus de produtividade do tecnico*/
  bonusTecnico = novoBonusTecnico;
}

/**
 * @brief Função que mostra mensagem personalizada de cadastro dos tecnicos
*/
void TecnicoADM::cadastro(){
  cout << "Tecnico cadastrado com sucesso!" << endl;
}