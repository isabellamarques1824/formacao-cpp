#pragma once
#include "Conta.hpp"

class Poupanca final: public Conta
{
private:
    
public:
    Poupanca(std::string numero, Titular titular);
    ~Poupanca();
    void sacar(float valorASacar) override;
};
