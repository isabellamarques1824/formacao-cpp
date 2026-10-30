#pragma once
#include <string>

class Cpf
{
private:
    std::string cpf;
    
public:
    Cpf(std::string cpf);
    ~Cpf();
    //Cpf limpeza_cpf(std::string cpf);
    //void verifica_cpf(std::string cpf);
    Cpf getCpf();
};
