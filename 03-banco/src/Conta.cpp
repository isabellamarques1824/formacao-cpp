#include <iostream>
#include "Conta.hpp"

void Conta::sacar(float valorASacar){
    if(valorASacar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }
    if(valorASacar > saldo){
        std::cout << "Saldo insuficiente\n";
        return;
    }

    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar){
    if(valorADepositar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }

    saldo += valorADepositar;
}

float Conta::getSaldo() const{
    return saldo;
}

std::string Conta::getNomeTitular() const{
    return nomeTitular;
}

std::string Conta::getCpfTitular() const{
    return cpfTitular;
}

std::string Conta::getNumero() const{
    return numero;
}

void Conta::setNumero(std::string set_numero){
    numero = set_numero;
}

void Conta::setcpfTitular(std::string set_cpfTitular){
    cpfTitular = set_cpfTitular;
}

void Conta::setNomeTitular(std::string set_nomeTitular){
    nomeTitular = set_nomeTitular;
}