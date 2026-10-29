#pragma once
#include "Conta.hpp"

class Corrente final: public Conta{
private:

public:
    Corrente(std::string numero, Titular titular);
    ~Corrente();
    void sacar(float valorASacar) override;
};