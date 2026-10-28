#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome):
    cpf(cpf),nome(nome)
{
    verificaNome();
}

Titular::~Titular(){
    
}

std::string Titular::getNome() const{
    return nome;
}

void Titular::verificaNome(){
    if(nome.size() < 5){
        std::cout<< "Nome muito pequeno!!\n";
        exit(1);
    }
}
