#include <iostream>
using namespace std;

int main() {
  int largura_comodo;
  cout << "Digite a largura do cômodo: \n";
  cin >> largura_comodo;

  int comprimento_comodo;
  cout << "Digite o comprimento do cômodo: \n";
  cin >> comprimento_comodo;

  int area = largura_comodo * comprimento_comodo;
  int potencia_iluminação = area * 18;

  cout << "A área do cômodo é " << area <<
    "m² e a potência da iluminação necessária para esse cômodo é " <<
    potencia_iluminação << "W.\n";

  return 0;
}
