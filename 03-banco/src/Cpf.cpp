#include "Cpf.hpp"
#include <cctype>
#include <iostream>


Cpf::Cpf(std::string cpf){
    
}

Cpf::~Cpf(){

}
/*
Cpf Cpf::limpeza_cpf(std::string cpf){
    std::string cpf_filtrado;
    for(char c: cpf){
        if(isalnum(c)){
            cpf_filtrado.push_back(c);
        }
    }
    if(cpf_filtrado.size() != 11){
        std::cout<< "cpf invalido\n";
    }

    char primeiro = cpf_filtrado[0];
    for(char c: cpf){
        if(c != primeiro){
            return cpf_filtrado;
        }
    }
    exit(1);
}   
void Cpf::verifica_cpf(std::string cpf){
    char primeiro_verificador = cpf[9];
    char segundo_verificador = cpf[10];
    int soma = 0;
    int n = 10;
    for(char c: cpf){
        soma += n * (int)c;
        n--;
    }

    int resto =  soma % 11;

}
*/
Cpf Cpf::getCpf(){
    return cpf;
}