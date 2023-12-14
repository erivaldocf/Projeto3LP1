#include <iostream>
#include "professor.hpp"

using namespace std;

// Construtor Padrão
Professor::Professor(){
  
}

// Construtor Carregado
Professor::Professor(string m, float s, string p, int ch, string in, string np, string fp, string d, double bp)
         : Funcionario{m, s, p, ch, in}, nivelProfessor{np}, formacaoProfessor{fp}, disciplina{d}, bonusProfessor{bp} { }

/**
 * @brief Função que calcula o bonus de produtividade do Professor
 * @param carga horaria dos professores
 * @return o bonus de produtividade dos professores
*/
double Professor::bonusProdutividade(int CH){
  return CH * 0.16;
}

// Funções de Acesso

string Professor::getNivelProfessor(){ /** Pega o nivel do professor*/
  return nivelProfessor;
}

string Professor::getFormacaoProfessor(){ /** Pega a formação do professor*/
  return formacaoProfessor;
}

string Professor::getDisciplina(){ /** Pega a disciplina do professor*/
  return disciplina;
}

double Professor::getBonusProfessor(){ /** Pega o bonus de produtivdade do professor*/
  return bonusProfessor;
}

// Funções de Modificação
void Professor::setNivelProfessor(string novoNivelProfessor){ /** Seta o nivel do professor*/
  nivelProfessor = novoNivelProfessor;
}

void Professor::setFormacaoProfessor(string novaFormacaoProfessor){ /** Seta a formação do professor*/
  formacaoProfessor = novaFormacaoProfessor;
}

void Professor::setDisciplina(string novaDisciplina){ /** Seta a disciplina do professor*/
  disciplina = novaDisciplina;
}

void Professor::setBonusProfessor(double novoBonusProfessor){ /** Seta o bonus de produtivdade do professor*/
  bonusProfessor = novoBonusProfessor;
}

/**
 * @brief Função que mostra mensagem personalizada de cadastro dos professores
*/
void Professor::cadastro(){
  cout << "Professor cadastrado com sucesso!" << endl;
}