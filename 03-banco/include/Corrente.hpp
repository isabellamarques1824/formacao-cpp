#pragma once

#include "Titular.hpp"
#include "Conta.hpp"
#include <string>

class Corrente final: public Conta
{
private:
public:
    Corrente(std::string numero, Titular titular);
    ~Corrente();
    float taxaDeSaque(float valorASacar) const override;
    void transferePara(Conta& contaDestino, float valor);
};