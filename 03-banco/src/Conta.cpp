#include <iostream>
#include "Conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
    numero(numero),titular(titular),saldo(0)
{
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

    float ValorDoSaque = valorASacar + taxaDeSaque(valorASacar);
    if(ValorDoSaque > saldo){
        std::cout << "Saldo insuficiente\n";
        return;
    }

    saldo -= ValorDoSaque;
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

std::string Conta::getNumero() const{
    return numero;
}

int Conta::getNumerodeContas(){
    return numeroDeContas;
}