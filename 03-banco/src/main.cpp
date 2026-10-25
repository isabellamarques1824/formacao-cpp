#include "Conta.hpp"
#include <iostream>



void exibe_saldo(const Conta& conta){
    std::cout<< "o saldo da conta e: " << conta.getSaldo() << std::endl;
}
int main(){
    Conta umaConta("123456", "Cliente", "123.456.789-10");

    umaConta.depositar(500);
    umaConta.sacar(200);

    std::cout << "Uma conta: " << umaConta.getSaldo() << std::endl;

}