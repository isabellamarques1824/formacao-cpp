#pragma once
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente final: public Funcionario, public Autenticavel{
private:
public:
    Gerente(Cpf cpf, std::string name, float salario, std::string senha);
    ~Gerente();
    float bonificacao() const;
};