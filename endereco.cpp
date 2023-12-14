#include <iostream>
#include "endereco.hpp"

using namespace std;

// Construtor Padrão
Endereco::Endereco(){

}

// Construtor Carregado
Endereco::Endereco(string newRua, int newNumero, string newBairro, string newCidade, string newCep){

    rua = newRua;
    numero = newNumero;
    bairro = newBairro;
    cidade = newCidade;
    cep = newCep;

}

string Endereco::getRua(){
    return rua;
}
int Endereco::getNumero(){
    return numero;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getCep(){
    return cep;
}

void Endereco::setRua(string novaRua){ /** Seta a rua do funcionario */
    rua = novaRua;
}


void Endereco::setNumero(int novoNumero){ /** Seta o numero da casa do funcionario */
    numero = novoNumero;
}
void Endereco::setBairro(string novoBairro){ /** Seta o bairro do funcionario */
    bairro = novoBairro;
}
void Endereco::setCidade(string novaCidade){ /** Seta a cidade do funcionario */
    cidade = novaCidade;
}
void Endereco::setCep(string novoCep){ /** Seta o CEP do funcionario*/
    cep = novoCep;
}