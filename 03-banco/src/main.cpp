#include "Conta.hpp"
#include "Funcionario.hpp"
#include <iostream>



void exibe_saldo(const Conta& conta){
    std::cout<< "o saldo da conta e: " << conta.getSaldo() << std::endl;
}
int main(){
    Conta umaConta("123456", Titular(Cpf("123.456.79-10"), "Isabella"));

    umaConta.depositar(500);
    umaConta.sacar(200);

    std::cout << "Uma conta: " << umaConta.getSaldo() << std::endl;

    Conta umaOutraConta("654321", Titular(Cpf("321.654.987-10"), "Alicinha"));

    umaOutraConta.depositar(700);
    umaOutraConta.sacar(100);

    std::cout << "Uma outra conta: " << umaOutraConta.getSaldo() << std::endl;

    std::cout << "Numero de contas: " << Conta::getNumerodeContas()<< std::endl;

    Funcionario funcionario(Cpf("123.456.789-10"), "Isabellinha", 1500);
}