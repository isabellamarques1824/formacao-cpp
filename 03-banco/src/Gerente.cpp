#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string name, float salario)
    :Funcionario(cpf, nome, salario)
{

}

Gerente::~Gerente(){

}

float Gerente::bonificacao() const{
    return getSalario() * 0.5;
}