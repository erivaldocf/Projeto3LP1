#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "banco.hpp"
using namespace std;

vector<Professor> professores;
vector<TecnicoADM> tecnicosADM;

Professor professor;
TecnicoADM tecnicoADM;

/**
 * @brief Função que coleta dados do professor e salva no vector professores.
 * @param nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, matricula, salario, departamento, cargaHoraria,dataIngresso,nivelProfessor, formacaoProfessor, disciplina, bonusProfessor
*/
void BancoDAO::cadastrarProfessor(string nome, string cpf,string dataNascimento, string genero, string rua, int numero, string bairro, string cidade, string cep, string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso,string nivelProfessor, string formacaoProfessor, string disciplina, double bonusProfessor){

  professor.setNome(nome);
  professor.setCpf(cpf);
  professor.setDataNascimento(dataNascimento);
  professor.setGenero(genero);
  professor.setRua(rua);
  professor.setNumero(numero);
  professor.setBairro(bairro);
  professor.setCidade(cidade);
  professor.setCep(cep);
  professor.setMatricula(matricula);
  professor.setSalario(salario);
  professor.setDepartamento(departamento);
  professor.setCargaHoraria(cargaHoraria);
  professor.setDataIngresso(dataIngresso);
  professor.setNivelProfessor(nivelProfessor);
  professor.setFormacaoProfessor(formacaoProfessor);
  professor.setDisciplina(disciplina);
  professor.setBonusProfessor(bonusProfessor);
  professores.push_back(professor);

  professor.cadastro();
  
}

/**
 * @brief Função que coleta dados do tecnico e salva no vector tecnicos
 * @param nome, cpf, dataNascimento, genero, rua, numero, bairro, cidade, cep, matricula, salario, departamento, cargaHoraria,dataIngresso, funcao, bonusTecnico
*/
void BancoDAO::cadastrarTecnicoADM(string nome, string cpf,string dataNascimento, string genero, string rua, int numero, string bairro, string cidade, string cep, string matricula, float salario, string departamento, int cargaHoraria, string dataIngresso, string funcao, double bonusTecnico){

  tecnicoADM.setNome(nome);
  tecnicoADM.setCpf(cpf);
  tecnicoADM.setDataNascimento(dataNascimento);
  tecnicoADM.setGenero(genero);
  tecnicoADM.setRua(rua);
  tecnicoADM.setNumero(numero);
  tecnicoADM.setBairro(bairro);
  tecnicoADM.setCidade(cidade);
  tecnicoADM.setCep(cep);
  tecnicoADM.setMatricula(matricula);
  tecnicoADM.setSalario(salario);
  tecnicoADM.setDepartamento(departamento);
  tecnicoADM.setCargaHoraria(cargaHoraria);
  tecnicoADM.setDataIngresso(dataIngresso);
  tecnicoADM.setfuncaoDesempenhada(funcao);
  tecnicoADM.setBonusTecnico(bonusTecnico);
  tecnicosADM.push_back(tecnicoADM);

  tecnicoADM.cadastro();
  
}

/**
 * @brief Funcão que exibe todos os professores cadastrados e seus dados
*/
void BancoDAO::listarProfessores(){

  int tam = professores.size();
  cout << "-------------------------------------------------------" << endl;
  for (int i = 0; i < tam; i++){
    cout << "Nome: " << professores[i].getNome() << endl;
    cout << "CPF: " << professores[i].getCpf() << endl;
    cout << "Data de Nascimento: " << professores[i].getDataNascimento() << endl;
    cout << "Genero: " << professores[i].getGenero() << endl;
    cout << "Rua: " << professores[i].getRua() << endl;
    cout << "Numero da Casa: " << professores[i].getNumero() << endl;
    cout << "Bairro: " << professores[i].getBairro() << endl;
    cout << "Cidade: " << professores[i].getCidade() << endl;
    cout << "CEP: " << professores[i].getCep() << endl;
    cout << "Matricula: " << professores[i].getMatricula() << endl;
    cout << "Salario: " << professores[i].getSalario() << endl;
    cout << "Departamento: " << professores[i].getDepartamento() << endl;
    cout << "Carga Horaria: " << professores[i].getCargaHoraria() << endl;
    cout << "Data de Ingresso: " << professores[i].getDataIngreso() << endl;
    cout << "Nivel: " << professores[i].getNivelProfessor() << endl;
    cout << "Formacao: " << professores[i].getFormacaoProfessor() << endl;
    cout << "Disciplina: " << professores[i].getDisciplina() << endl;
    cout << "Adicional de produtividade: " << professores[i].getBonusProfessor() << endl;
    cout << "-------------------------------------------------------" << endl;
  }
}

/**
 * @brief Função que exibe todos os tecnicos cadastrados e seus dados
*/
void BancoDAO::listarTecnicosADM(){

  cout << "-------------------------------------------------------" << endl;
  int tam = tecnicosADM.size();
  for (int i = 0; i < tam; i++){
    cout << "Nome: " << tecnicosADM[i].getNome() << endl;
    cout << "CPF: " << tecnicosADM[i].getCpf() << endl;
    cout << "Data de Nascimento: " << tecnicosADM[i].getDataNascimento() << endl;
    cout << "Genero: " << tecnicosADM[i].getGenero() << endl;
    cout << "Rua: " << tecnicosADM[i].getRua() << endl;
    cout << "Numero da Casa: " << tecnicosADM[i].getNumero() << endl;
    cout << "Bairro: " << tecnicosADM[i].getBairro() << endl;
    cout << "Cidade: " << tecnicosADM[i].getCidade() << endl;
    cout << "CEP: " << tecnicosADM[i].getCep() << endl;
    cout << "Matricula: " << tecnicosADM[i].getMatricula() << endl;
    cout << "Salario: " << tecnicosADM[i].getSalario() << endl;
    cout << "Departamento: " << tecnicosADM[i].getDepartamento() << endl;
    cout << "Carga Horaria: " << tecnicosADM[i].getCargaHoraria() << endl;
    cout << "Data de Ingresso: " << tecnicosADM[i].getDataIngreso() << endl;
    cout << "Funcao desempenhada: " << tecnicosADM[i].getFuncaoDesempenhada() << endl;
    cout << "Adicional de Produtividade: " << tecnicosADM[i].getBonusTecnico() << endl;
    cout << "-------------------------------------------------------" << endl;
  }
}


/**
 * @brief Função que deletar um professor atraves da matricula digitada
 * @param matricula do professor
*/
void BancoDAO::deletarProfessor(string matricula){

  int found = 0;
  int tam = professores.size();
  for (int i = 0; i < tam; i++){
    if (matricula.compare(professores[i].getMatricula()) == 0){
      professores.erase(professores.begin() + i);
      found = 1;
    }
  }
  if (found == 0)
    throw "Professor(a) não encontrado!";
}

/**
 * @brief Função que deleta um tecnico atraves da matricula digitada
 * @param matricula do tecnico
*/
void BancoDAO::deletarTecnicoADM(string matricula){
  
  int found = 0;
  int tam = tecnicosADM.size();
  for (int i = 0; i < tam; i++){
    if(matricula.compare(tecnicosADM[i].getMatricula()) == 0){
      tecnicosADM.erase(tecnicosADM.begin() + i);
      found = 1;
    }
  }
  if (found == 0)
    throw "Tecnico(a) não encontrado!";

}

/**
 * @brief Função que busca um professor pela sua matricula e caso encontre exibe seus dados
 * @param matricula do professor
*/
void BancoDAO::buscarProfessor(string matricula){

  int found = 0;
  int tam = professores.size();
  for (int i = 0; i < tam; i++){
    if (matricula.compare(professores[i].getMatricula()) == 0){
      cout << "Nome: " << professores[i].getNome() << endl;
      cout << "CPF: " << professores[i].getCpf() << endl;
      cout << "Data de Nascimento: " << professores[i].getDataNascimento() << endl;
      cout << "Genero: " << professores[i].getGenero() << endl;
      cout << "Rua: " << professores[i].getRua() << endl;
      cout << "Numero da Casa: " << professores[i].getNumero() << endl;
      cout << "Bairro: " << professores[i].getBairro() << endl;
      cout << "Cidade: " << professores[i].getCidade() << endl;
      cout << "CEP: " << professores[i].getCep() << endl;
      cout << "Matricula: " << professores[i].getMatricula() << endl;
      cout << "Salario: " << professores[i].getSalario() << endl;
      cout << "Departamento: " << professores[i].getDepartamento() << endl;
      cout << "Carga Horaria: " << professores[i].getCargaHoraria() << endl;
      cout << "Data de Ingresso: " << professores[i].getDataIngreso() << endl;
      cout << "Nivel: " << professores[i].getNivelProfessor() << endl;
      cout << "Formacao: " << professores[i].getNivelProfessor() << endl;
      cout << "Disciplina: " << professores[i].getDisciplina() << endl;
      cout << "Adicional de Produtividade: " << professores[i].getBonusProfessor() << endl;
      cout << "-------------------------------------------------------" << endl;
      found = 1;
    }
  }
  if (found == 0)
    throw "Professor(a) não encontrado!";
}

/**
 * @brief Função que busca um tenico pela sua matricula e caso encontre exibe seus dados
 * @param matricula do tecnico
*/
void BancoDAO::buscarTecnicoADM(string matricula){

  int found = 0;
  int tam = tecnicosADM.size();
  for (int i = 0; i < tam; i++){
    if (matricula.compare(tecnicosADM[i].getMatricula()) == 0){
      cout << "Nome: " << tecnicosADM[i].getNome() << endl;
      cout << "CPF: " << tecnicosADM[i].getCpf() << endl;
      cout << "Data de Nascimento: " << tecnicosADM[i].getDataNascimento() << endl;
      cout << "Genero: " << tecnicosADM[i].getGenero() << endl;
      cout << "Rua: " << tecnicosADM[i].getRua() << endl;
      cout << "Numero da Casa: " << tecnicosADM[i].getNumero() << endl;
      cout << "Bairro: " << tecnicosADM[i].getBairro() << endl;
      cout << "Cidade: " << tecnicosADM[i].getCidade() << endl;
      cout << "CEP: " << tecnicosADM[i].getCep() << endl;
      cout << "Matricula: " << tecnicosADM[i].getMatricula() << endl;
      cout << "Salario: " << tecnicosADM[i].getSalario() << endl;
      cout << "Departamento: " << tecnicosADM[i].getDepartamento() << endl;
      cout << "Carga Horaria: " << tecnicosADM[i].getCargaHoraria() << endl;
      cout << "Data de Ingresso: " << tecnicosADM[i].getDataIngreso() << endl;
      cout << "Funcao desempenhada: " << tecnicosADM[i].getFuncaoDesempenhada() << endl;
      cout << "Adicional de Produtividade: " << tecnicosADM[i].getBonusTecnico() << endl;      
      cout << "-------------------------------------------------------" << endl;
      found = 1;
    }
  }
  if (found == 0)
    throw "Tecnico(a) não encontrado!";
}

/**
 * @brief Função que pega todos os professores cadastrados no vector professor e salva em um arquivo chamado professores.txt
*/
void BancoDAO::salvarProfessores(){

  fstream arquivo;
  arquivo.open("professores.txt", ios::out);
  int tam = professores.size();

  for (int i = 0; i < tam; i++){
    arquivo << professores[i].getNome() << endl;
    arquivo << professores[i].getCpf() << endl;
    arquivo << professores[i].getDataNascimento() << endl;
    arquivo << professores[i].getGenero() << endl;
    arquivo << professores[i].getMatricula() << endl;
    arquivo << professores[i].getRua() << endl;
    arquivo << professores[i].getNumero() << endl;
    arquivo << professores[i].getBairro() << endl;
    arquivo << professores[i].getCidade() << endl;
    arquivo << professores[i].getCep() << endl;
    arquivo << professores[i].getSalario() << endl;
    arquivo << professores[i].getDepartamento() << endl;
    arquivo << professores[i].getCargaHoraria() << endl;
    arquivo << professores[i].getDataIngreso() << endl;
    arquivo << professores[i].getNivelProfessor() << endl;
    arquivo << professores[i].getFormacaoProfessor() << endl;
    arquivo << professores[i].getDisciplina() << endl;
    arquivo << professores[i].getBonusProfessor() << endl;

  }
  arquivo.close();
}

/**
 * @brief Função que pega todos os tecnicos cadastrados no vector tecnicosADM e salva em um arquivo chamado tecnicos.txt
*/
void BancoDAO::salvarTecnicos(){


  fstream arquivo;
  arquivo.open("tecnicos.txt", ios::out);
  int tam = tecnicosADM.size();

  for (int i = 0; i < tam; i++){
    arquivo << tecnicosADM[i].getNome() << endl;
    arquivo << tecnicosADM[i].getCpf() << endl;
    arquivo << tecnicosADM[i].getDataNascimento() << endl;
    arquivo << tecnicosADM[i].getGenero() << endl;
    arquivo << tecnicosADM[i].getMatricula() << endl;
    arquivo << tecnicosADM[i].getRua() << endl;
    arquivo << tecnicosADM[i].getNumero() << endl;
    arquivo << tecnicosADM[i].getBairro() << endl;
    arquivo << tecnicosADM[i].getCidade() << endl;
    arquivo << tecnicosADM[i].getCep() << endl;
    arquivo << tecnicosADM[i].getSalario() << endl;
    arquivo << tecnicosADM[i].getDepartamento() << endl;
    arquivo << tecnicosADM[i].getCargaHoraria() << endl;
    arquivo << tecnicosADM[i].getDataIngreso() << endl;
    arquivo << tecnicosADM[i].getFuncaoDesempenhada() << endl;
    arquivo << tecnicosADM[i].getBonusTecnico() << endl;

  }
  arquivo.close();
}

/**
 * @brief Função que ler todos os professores salvos no arquivo "professores.txt" e passa para o vector professores
*/
void BancoDAO::lerProfessores(){

  vector<string> linhas;
  fstream arquivo;
  arquivo.open("professores.txt", ios::in);
  string temp;
  while (getline(arquivo,temp)){
    linhas.push_back(temp);
  }
  arquivo.close();

  Professor professor;
  string nome, cpf, dataNascimento, genero, matricula, rua, bairro, cidade, cep, departamento, dataIngresso, nivelProfessor, formacaoProfessor, disciplina;
  int numero, cargaHoraria;
  float salario;
  double bonusProfessor;

  for (int i = 0; i < linhas.size(); i+=18){
    nome = linhas[i];
    cpf = linhas[i+1];
    dataNascimento = linhas[i+2];
    genero = linhas[i+3];
    matricula = linhas[i+4];
    rua = linhas[i+5];
    numero = stof(linhas[i+6]);
    bairro = linhas[i+7];
    cidade = linhas[i+8];
    cep = linhas[i+9];
    salario = stof(linhas[i+10]);
    departamento = linhas[i+11];
    cargaHoraria = stof(linhas[i+12]);
    dataIngresso = linhas[i+13];
    nivelProfessor = linhas[i+14];
    formacaoProfessor = linhas[i+15];
    disciplina = linhas[i+16];
    bonusProfessor = stof(linhas[i+17]);

    professor.setNome(nome);
    professor.setCpf(cpf);
    professor.setDataNascimento(dataNascimento);
    professor.setGenero(genero);
    professor.setRua(rua);
    professor.setNumero(numero);
    professor.setBairro(bairro);
    professor.setCidade(cidade);
    professor.setCep(cep);
    professor.setMatricula(matricula);
    professor.setSalario(salario);
    professor.setDepartamento(departamento);
    professor.setCargaHoraria(cargaHoraria);
    professor.setDataIngresso(dataIngresso);
    professor.setNivelProfessor(nivelProfessor);
    professor.setFormacaoProfessor(formacaoProfessor);
    professor.setDisciplina(disciplina);
    professor.setBonusProfessor(bonusProfessor);
    professores.push_back(professor);
  }

  arquivo.close();
}

/**
 * @brief Função que ler todos os tecnicos salvos no arquivo "tecnicos.txt" e passa para o vector tecnicos
*/
void BancoDAO::lerTecnicos(){

  vector<string> linhas;
  fstream arquivo;
  arquivo.open("tecnicos.txt", ios::in);
  string temp;
  while (getline(arquivo,temp)){
    linhas.push_back(temp);
  }
  arquivo.close();

  TecnicoADM tecnico;
  string nome, cpf, dataNascimento, genero, matricula, rua, bairro, cidade, cep, departamento, dataIngresso, funcaoDesempenhada;
  int numero, cargaHoraria;
  float salario;
  double bonusTecnico;

  for (int i = 0; i < linhas.size(); i+=16){
    nome = linhas[i];
    cpf = linhas[i+1];
    dataNascimento = linhas[i+2];
    genero = linhas[i+3];
    matricula = linhas[i+4];
    rua = linhas[i+5];
    numero = stof(linhas[i+6]);
    bairro = linhas[i+7];
    cidade = linhas[i+8];
    cep = linhas[i+9];
    salario = stof(linhas[i+10]);
    departamento = linhas[i+11];
    cargaHoraria = stof(linhas[i+12]);
    dataIngresso = linhas[i+13];
    funcaoDesempenhada = linhas[i+14];
    bonusTecnico = stof(linhas[i+15]);

    tecnico.setNome(nome);
    tecnico.setCpf(cpf);
    tecnico.setDataNascimento(dataNascimento);
    tecnico.setGenero(genero);
    tecnico.setRua(rua);
    tecnico.setNumero(numero);
    tecnico.setBairro(bairro);
    tecnico.setCidade(cidade);
    tecnico.setCep(cep);
    tecnico.setMatricula(matricula);
    tecnico.setSalario(salario);
    tecnico.setDepartamento(departamento);
    tecnico.setCargaHoraria(cargaHoraria);
    tecnico.setDataIngresso(dataIngresso);
    tecnico.setfuncaoDesempenhada(funcaoDesempenhada);
    tecnico.setBonusTecnico(bonusTecnico);
    tecnicosADM.push_back(tecnico);
  }
}

/**
 * @brief Função que mostrar um menu detalhado onde você pode cadastrar um professor, listar todos os professores, apagar ou exibir um professor cadastrado.
*/
void BancoDAO::menuProfessores(){

  int op;
  int aux = 0;
  string nome, cpf, dataNascimento, genero,matricula, departamento, dataIngresso, disciplina,nivelProfessor, formacaoProfessor;
  float salario;
  double bonusProfessor;
  int cargaHoraria;
  Endereco endereco;

  do {

    //system("cls");

    cout << "O que deseja fazer?" << endl;
    cout << "1- Cadastra um novo professor(a)" << endl;
    cout << "2- Lista todos os professores(as)" << endl;
    cout << "3- Apaga um professor(a)" << endl;
    cout << "4- Localiza e exibir um professor(a)" << endl;
    cout << "5- Sair" << endl;

    cin >> op;
    cin.get();

    switch(op){
      case 1:
        cout << "Digite o nome do Professor(a): ";
        getline(cin,nome);
        cout << "Digite o CPF do Professor(a): ";
        getline(cin,cpf);
        cout << "Digite a data de nascimento do Professor(a): ";
        getline(cin,dataNascimento);
        cout << "Digite o genero do Professor(a): ";
        getline(cin,genero);
        cout << "Digite a rua do Professor(a): ";
        getline(cin,endereco.rua);
        cout << "Digite o numero da casa do Professor(a): ";
        cin >> endereco.numero;
        cin.ignore();
        cout << "Digite o bairro do Professor(a): ";
        getline(cin,endereco.bairro);
        cout << "Digite a cidade do Professor(a): ";
        getline(cin,endereco.cidade);
        cout << "Digite o CEP do Professor(a): ";
        getline(cin,endereco.cep);
        cout << "Digite a matricula do Professor(a): ";
        cin >> matricula;
        cout << "Digite o salario do Professor(a): ";
        cin >> salario;
        cin.ignore();
        cout << "Digite o departamento do Professor(a): ";
        getline(cin,departamento);
        cout << "Digite a carga horaria do Professor(a): ";
        cin >> cargaHoraria;
        bonusProfessor = professor.bonusProdutividade(cargaHoraria);
        cin.ignore();
        cout << "Digite a data de ingresso do Professor(a): ";
        getline(cin,dataIngresso);
        cout << "Digite o nivel do Professor(I, II, III, IV, V, VI, VII, VIII): ";
        getline(cin,nivelProfessor);
        cout << "Digite a formacao do Professor(ESPECIALIZACAO, MESTRADO,DOUTORADO): ";
        getline(cin,formacaoProfessor);
        cout << "Digite a disciplina do professor(a): ";
        getline(cin,disciplina);
        cadastrarProfessor(nome, cpf, dataNascimento, genero, endereco.rua, endereco.numero,endereco.bairro,endereco.cidade,endereco.cep, matricula, salario, departamento, cargaHoraria, dataIngresso,nivelProfessor,formacaoProfessor, disciplina, bonusProfessor);
        break;
      case 2:
        listarProfessores();
        break;
      case 3:
        cout << "Digite a matricula do professor(a) que deseja apagar: ";
        cin >> matricula;
        try {
          deletarProfessor(matricula);
        } catch (const char* ex) {
          cout << "Ocorreu um erro: " << ex << endl;
        }
        break;
      case 4:
        cout << "Digite a matricula do professor(a) que deseja encontrar: ";
        cin >> matricula;
        try {
          buscarProfessor(matricula);
        } catch (const char* ex) {
          cout << "Ocorreu um erro: " << ex << endl;
        }
        break;
      case 5:
        salvarProfessores();
        aux = 1;
        break;
      default:
        cout << "Comando invalido!";
    }

    cin.get();

  } while (aux == 0);
}

/**
 * @brief Função que mostrar um menu detalhado onde você pode cadastrar um tecnico, listar todos os tecnicos, apagar ou exibir um tecnico cadastrado.
*/

void BancoDAO::menuTecnicos(){

  int op;
  int aux = 0;
  string nome, cpf, dataNascimento, genero,matricula, departamento, dataIngresso, funcao;
  float salario;
  double bonusTecnico;
  int cargaHoraria;
  Endereco endereco;

  do {

    //system("cls");

    cout << "O que deseja fazer?" << endl;
    cout << "1- Cadastra um novo tecnico(a)" << endl;
    cout << "2- Lista todos os tenicos(as)" << endl;
    cout << "3- Apaga um tecnico(a)" << endl;
    cout << "4- Localiza e exibir um tecnico(a)" << endl;
    cout << "5- Sair" << endl;

    cin >> op;
    cin.get();

    switch(op){
      case 1:
        cout << "Digite o nome do tecnico(a): ";
        getline(cin,nome);
        cout << "Digite o cpf do tecnico: ";
        getline(cin,cpf);
        cout << "Digite a data de nascimento do tecnico(a): ";
        getline(cin,dataNascimento);
        cout << "Digite o genero do tecnico(a): ";
        getline(cin,genero);
        cout << "Digite a rua do Tecnico(a): ";
        getline(cin,endereco.rua);
        cout << "Digite o numero da casa do Tecnico(a): ";
        cin >> endereco.numero;
        cin.ignore();
        cout << "Digite o bairro do Tecnico(a): ";
        getline(cin,endereco.bairro);
        cout << "Digite a cidade do Tecnico(a): ";
        getline(cin,endereco.cidade);
        cout << "Digite o CEP do Tecnico(a): ";
        getline(cin,endereco.cep);
        cout << "Digite a matricula do Tecnico(a): ";
        cin >> matricula;
        cout << "Digite o salario do Tecnico(a): ";
        cin >> salario;
        cin.ignore();
        cout << "Digite o departamento do Tecnico(a): ";
        getline(cin,departamento);
        cout << "Digite a carga horaria do Tecnico(a) ";
        cin >> cargaHoraria;
        bonusTecnico = tecnicoADM.bonusProdutividade(cargaHoraria);
        cin.ignore();
        cout << "Digite a data de ingresso do Tecnico(a): ";
        getline(cin,dataIngresso);
        cout << "Digite a funcao do Tecnico(a): ";
        getline(cin,funcao);
        cadastrarTecnicoADM(nome, cpf, dataNascimento, genero, endereco.rua, endereco.numero, endereco.bairro, endereco.cidade, endereco.cep, matricula, salario, departamento, cargaHoraria, dataIngresso, funcao,bonusTecnico);
        break;
      case 2:
        listarTecnicosADM();
        break;
      case 3:
        cout << "Digite a matricula do Tecnico(a) que deseja apagar: ";
        cin >> matricula;
        try {
          deletarTecnicoADM(matricula);
        } catch (const char* ex) {
          cout << "Ocorreu um erro: " << ex << endl;
        }
        break;
      case 4:
        cout << "Digite a matricula do Tecnico(a) que deseja encontrar: ";
        cin >> matricula;
        try {
          buscarTecnicoADM(matricula);
        } catch (const char* ex) {
          cout << "Ocorreu um erro: " << ex << endl;
        }
        break;
      case 5:
        salvarTecnicos();
        aux = 1;
        break;
      default:
        cout << "Comando invalido!";
    }

    cin.get();

  } while (aux == 0);

}