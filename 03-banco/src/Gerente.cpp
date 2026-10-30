#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string name, float salario, std::string senha)
    :Funcionario(cpf, nome, salario), Autenticavel(senha)
{

}

Gerente::~Gerente(){

}

float Gerente::bonificacao() const{
    return getSalario() * 0.5;
}