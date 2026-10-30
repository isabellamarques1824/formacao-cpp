#include "Caixa.hpp"
#include <string>
#include "Cpf.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario):
    Funcionario(cpf, nome, salario)    
{

}

Caixa::~Caixa(){

}

float Caixa::bonificacao() const{
    return getSalario() * 0.1;
}