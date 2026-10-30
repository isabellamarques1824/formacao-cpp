#pragma once
#include "Cpf.hpp"
#include "Funcionario.hpp"

class Gerente final: public Funcionario{
private:
public:
    Gerente(Cpf cpf, std::string name, float salario);
    ~Gerente();
    float bonificacao() const;
};