#include <iostream>
#include "funcionario.hpp"

using namespace std;

// Construtor Padrão
Funcionario::Funcionario(){
  salario = 0.0;
  cargaHoraria = 0;
}

// Construtor Carregado
Funcionario::Funcionario(string newMatricula, float newSalario, string newDepartamento, int newCargaHoraria, string newDataIngresso){
  matricula = newMatricula;
  salario = newSalario;
  departamento = newDepartamento;
  cargaHoraria = newCargaHoraria;
  dataIngresso = newDataIngresso;
}

// Funções de Acesso
string Funcionario::getMatricula(){ /** Pega a matricula do funcionario*/
  return matricula;
}

float Funcionario::getSalario(){ /** Pega o salario do Funcionario*/
  return salario;
}

string Funcionario::getDepartamento(){ /** Pega o departamento do funcionario*/
  return departamento;
}

int Funcionario::getCargaHoraria(){ /** Pega a carga horaria do funcionario*/
  return cargaHoraria;
}

string Funcionario::getDataIngreso(){ /** Pega a data de ingresso do funcionario*/
  return dataIngresso;
}

// Funções de Modificação
void Funcionario::setMatricula(string novaMatricula){ /** Seta a matricula do funcionario*/
  matricula = novaMatricula;
}

void Funcionario::setSalario(float novoSalario){ /** Seta o salario do funcionario*/
  salario = novoSalario;
}

void Funcionario::setDepartamento(string novoDepartamento){ /** Seta o departamento do funcionario*/
  departamento = novoDepartamento;
}

void Funcionario::setCargaHoraria(int novaCargaHoraria){ /** Seta a carga horaria do funcionario*/
  cargaHoraria = novaCargaHoraria;
}

void Funcionario::setDataIngresso(string novaDataIngresso){ /** Seta a data de ingresso do funcionario*/
  dataIngresso = novaDataIngresso;
}

void Funcionario::cadastro(){
  cout << "Funcionario cadastrado com sucesso!" << endl;
}