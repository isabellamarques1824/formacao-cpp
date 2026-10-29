#pragma once

#include "Titular.hpp"
#include <string>

class Conta
{

private:
    static int numeroDeContas;
public:
    static int getNumerodeContas();
private:
    std::string numero;
    Titular titular;
protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular);
    virtual ~Conta();
    virtual void sacar(float valorASacar);
    void depositar(float valorASacar);
    float getSaldo() const;
    std::string getNumero() const;
};
