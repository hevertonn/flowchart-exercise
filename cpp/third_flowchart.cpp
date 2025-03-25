#include <iostream>
using namespace std;

int main() {
  int salario;
  cout << "Digite o valor do salário: \n";
  cin >> salario;

  int total_contas;
  cout << "Digite o valor da primeira conta: \n";
  cin >> total_contas;

  int segunda_conta;
  cout << "Digite o valor da segunda conta: \n";
  cin >> segunda_conta;

  total_contas += segunda_conta;
  total_contas += total_contas * 0.02;

  if (salario >= total_contas) {
    int salario_restante = salario - total_contas;
    cout << "O salário restante é R$" << salario_restante << ".\n";
  } else {
    cout << "O valor total das contas supera o valor do salário.\n";
  }

  return 0;
}
