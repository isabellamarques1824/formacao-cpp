#include "Corrente.hpp"

Corrente::Corrente(std::string numero, Titular titular):
    Conta(numero,titular)
{

}

Corrente::~Corrente(){

}

float Corrente::taxaDeSaque(float valorASacar) const{
    return valorASacar * 0.05;
}


void Corrente::transferePara(Conta& contaDestino, float valor){
    sacar(valor);
    contaDestino.depositar(valor);
}