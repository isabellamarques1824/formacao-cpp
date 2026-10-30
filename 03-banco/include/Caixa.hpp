#pragma once

#include "Funcionario.hpp"

class Caixa final: public Funcionario{
private:

public:
    Caixa(Cpf cpf, std::string nome, float salario);
    float bonificacao() const override;
};

