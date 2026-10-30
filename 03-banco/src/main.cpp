#include "Conta.hpp"
#include "Funcionario.hpp"
#include "Poupanca.hpp"
#include "Corrente.hpp"
#include <iostream>



void exibe_saldo(const Conta& conta){
    std::cout<< "o saldo da conta e: " << conta.getSaldo() << std::endl;
}
int main(){
    Poupanca umaConta("123456", Titular(Cpf("123.456.79-10"), "Isabella"));

    umaConta.depositar(500);

    std::cout << "Uma conta: " << umaConta.getSaldo() << std::endl;

    Corrente umaOutraConta("654321", Titular(Cpf("321.654.987-10"), "Alicinha"));

    umaOutraConta.depositar(500);

    umaOutraConta.transferePara(umaConta, 250);
    std::cout << "Uma outra conta: " << umaOutraConta.getSaldo() << std::endl;

    std::cout << "Numero de contas: " << Conta::getNumerodeContas()<< std::endl;

    Funcionario funcionario(Cpf("123.456.789-10"), "Isabellinha", 1500);
}