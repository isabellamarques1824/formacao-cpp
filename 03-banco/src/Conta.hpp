#pragma once

#include <string>

class Conta
{

private:
    static int numeroDeContas;
public:
    static int getNumerodeContas();
private:
    std::string numero;
    std::string nomeTitular;
    std::string cpfTitular;
    float saldo;

public:
    Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorASacar);
    float getSaldo() const;
    std::string getNumero() const;
    std::string getCpfTitular() const;
    std::string getNomeTitular() const;

private:
    void verificaNomeConta();
};
