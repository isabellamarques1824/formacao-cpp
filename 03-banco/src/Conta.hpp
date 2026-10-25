#pragma once

#include <string>

class Conta
{
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

public:
    Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
    void sacar(float valorASacar);
    void depositar(float valorASacar);
    float getSaldo() const;
    std::string getNumero() const;
    std::string getCpfTitular() const;
    std::string getNomeTitular() const;
};
