#include <iostream>
#include "Conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
    :numero(numero),nomeTitular(nomeTitular),cpfTitular(cpfTitular),saldo(0)
{
    verificaNomeConta();
    numeroDeContas++;
}

Conta::~Conta(){
    numeroDeContas--;
}

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

int Conta::getNumerodeContas(){
    return numeroDeContas;
}

void Conta::verificaNomeConta(){
    if(nomeTitular.size() < 5){
        std::cout<< "Nome muito pequeno!!\n";
        exit(1);
    }
}