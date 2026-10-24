#pragma once

#include <string>

class Conta
{
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0; 

public:
    void sacar(float valorASacar);
    void depositar(float valorASacar);
    float getSaldo() const;
    std::string getNumero() const;
    std::string getCpfTitular() const;
    std::string getNomeTitular() const;
    void setNumero(std::string numero);
    void setcpfTitular(std::string cpfTitular);
    void setNomeTitular(std::string getNomeTitular);

};
