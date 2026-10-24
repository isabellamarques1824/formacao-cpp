#include "Conta.hpp"
#include <iostream>


void exibe_saldo(const Conta& conta){
    std::cout<< "o saldo da conta e: " << conta.getSaldo() << std::endl;
}
int main(){
    Conta umaConta;
    Conta umaOutraConta;

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);

    std::cout << "Uma outra conta: " << umaOutraConta.getSaldo() << std::endl;

}