#include "Poupanca.hpp"
#include <iostream>

Poupanca::Poupanca(std::string numero, Titular titular):
    Conta(numero,titular)
{

}

Poupanca::~Poupanca(){

}

float Poupanca::taxaDeSaque(float valorASacar) const{
    return valorASacar * 0.03;
}