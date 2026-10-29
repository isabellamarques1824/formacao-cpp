#include "Poupanca.hpp"
#include <iostream>

Poupanca::Poupanca(std::string numero, Titular titular):
    Conta(numero,titular)
{

}

Poupanca::~Poupanca(){

    }

void Poupanca::sacar(float valorASacar){
    if(valorASacar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }

    float tarifa = valorASacar * 0.03;
    float ValorDoSaque = valorASacar + tarifa;
    if(ValorDoSaque > saldo){
        std::cout << "Saldo insuficiente\n";
        return;
    }

    saldo -= ValorDoSaque;
}