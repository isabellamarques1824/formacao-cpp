#include "Corrente.hpp"
#include <iostream>


Corrente::Corrente(std::string numero, Titular titular):
    Conta(numero,titular)
{

}

Corrente::~Corrente(){

}

void Corrente::sacar(float valorASacar){
    if(valorASacar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }

    float tarifa = valorASacar * 0.05;
    float ValorDoSaque = valorASacar + tarifa;
    if(ValorDoSaque > saldo){
        std::cout << "Saldo insuficiente\n";
        return;
    }

    saldo -= ValorDoSaque;
}