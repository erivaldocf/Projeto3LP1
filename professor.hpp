#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

/**
 * @brief implementação da classe Professor
 * @param nivel, formação, disciplina, bonus dos Professores
 * @author Erivaldo Figueiredo
 * @version 1.1.0
*/

class Professor : public Pessoa, public Funcionario{

  // Variaveis
  std::string nivelProfessor;
  std::string formacaoProfessor;
  std::string disciplina;
  double bonusProfessor;

public:
  // Construtor Padrão
  Professor();

  //Construtor Carregado
  Professor(std::string, float, std::string, int, std::string,std::string, std::string, std::string, double);

  // Funções de Acesso

  std::string getNivelProfessor();

  std::string getFormacaoProfessor();

  std::string getDisciplina();

  double getBonusProfessor();

  // Funções de Modificação
  void setNivelProfessor(std::string novoNivelProfessor);

  void setFormacaoProfessor(std::string novaFormacaoProfessor);

  void setDisciplina(std::string novaDisciplina);

  void setBonusProfessor(double novoBonusProfessor);

  void cadastro();

  double bonusProdutividade(int CH);
};

#endif