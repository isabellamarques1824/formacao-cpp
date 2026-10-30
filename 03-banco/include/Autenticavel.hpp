#pragma once
#include <iostream>

class Autenticavel
{
private:
    std::string senha;
public:
    Autenticavel(std::string senha);
    ~Autenticavel();
    bool Autenticavel::autentica(std::string senha);
};

