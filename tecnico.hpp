#ifndef TECNICO_HPP
#define TECNICO_HPP

#include <iostream>
#include "pessoa.hpp"
#include "funcionario.hpp"

/**
 * @brief implementação da classe Endereco
 * @param função, bonus dos Tecnicos
 * @author Erivaldo Figueiredo
 * @version 1.1.0
*/
class TecnicoADM : public Pessoa, public Funcionario{

  // Variaveis
  std::string funcaoDesempenhada;
  double bonusTecnico;

public:
 
  // Construtor Padrão
  TecnicoADM();

  // Construtor Carregado
  TecnicoADM(std::string, float, std:: string , int , std::string , std::string, double);

  // Funções de Acesso
  std::string getFuncaoDesempenhada();

  double getBonusTecnico();

  // Funções de Modificação
  void setfuncaoDesempenhada(std::string novaFuncaoDesempenhada);

  void setBonusTecnico(double novoBonusTecnico);

  void cadastro();

  double bonusProdutividade(int CH);

};




#endif