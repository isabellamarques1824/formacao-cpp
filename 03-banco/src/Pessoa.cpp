#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome):
    cpf(cpf), nome(nome)
{
    verificaNome();
}

void Pessoa::verificaNome(){
    if(nome.size() < 5){
        std::cout<< "Nome muito pequeno!!\n";
        exit(1);
    }
}
