#include <iostream>
using namespace std;

// dado um inteiro, determina(retornando um bool) se esse número é primo.
bool ehPrimo(int n);
// sprimo: dados dois inteiros x e y, determina se a sequência x, x+1, x+2,...,y é sprimo.
bool sprimo (int, int);

int main()
{
  int x, y;

	cin >> x >> y;

  if(sprimo(x,y)) // ou if(sprimo(x,y)==true)
      cout << "sim" << endl;
  else
      cout << "não" << endl;

  return 0;
}
// n um inteiro positivo
bool ehPrimo(int n)
{
  if (n<=1)
    return false;

  for(int i = 2; i < n; i++)
  {
    if(n % i == 0 )
      return false;
  }
  return true;
}

bool sprimo (int a, int b) {
	int soma = 0;
	for (int i = a; i <= b; i++) {
		if (ehPrimo(i))
			soma += i;
	}

	return ehPrimo(soma);
}
