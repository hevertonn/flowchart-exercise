#include <iostream>
using namespace std;

int main() {
  int salario;
  cout << "Digite o salário do funcionário: \n";
  cin >> salario;

  int total_vendas_funcionario;
  cout << "Digite o valor total das vendas do funcionário: \n";
  cin >> total_vendas_funcionario;

  int comissao = total_vendas_funcionario * 0.04;
  int salario_final = salario + comissao;

  cout << "O comissão desse funcionário é R$" << comissao <<
    " e o valor total do seu salário é R$" << salario_final << ".\n";
  return 0;
}

