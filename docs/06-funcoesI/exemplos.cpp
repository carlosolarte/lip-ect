#include <iostream>
using namespace std; 

int main(){
  
  return 0;
}



/*
// 1 Função SOMA
// Assinatura, protótipo o cabeçalho da função 
// tipo de retorno: int
// nome: soma
// parámetros: a e b (do tipo int)
int soma(int a, int b);

// Main
  int x = soma (3,2); // chamada
  cout << x << endl ;

  // Podemos imprimir direitamente
  int v1 = 4, v2 = 6;
  int res;
  res = soma(v1,v2);
  cout << res << endl ;

// Definição da função 
int soma(int a, int b){
  int c;
  c = a+b;
  return c; // retornar o resultado
}

// ============
// 2. 
// Protótipo da função fatorial
long fatorial(int n);

int main() {
  cout << "3!! = " << fatorial(fatorial(3)) << endl ;

  // Somatorio dos primeiros 5 fatoriais
  int soma = 0, i;
  for (i=1;i<=5;i++)
    soma += fatorial(i);

  cout << "Somatorio: " << soma << endl; 
  return 0;
}

long fatorial(int n){
  long prod = 1;
  int i;
  for (i=2;i<=n;i++)
    prod *= i;

  return prod;
}

// ===========
#include <iostream>
using namespace std; 
// Protótipo da função ehPrimo
bool ehPrimo(int n);

int main() {
  int n;
  cout << "Digite um número: " ;
  cin >> n;
  if (ehPrimo(n))
    cout << n << " é primo" << endl;
  else
    cout << n << " não é primo" << endl;

  return 0;
}

bool ehPrimo(int n){
    // Assumindo n positivo
    if (n<=1)
        return false;

    for(int i=2;i < n;i++){
        if(n%i ==0) 
          return false; // termina a execução! 
    }
    return true;
}
// =============
int fibonacci(int n);

int main(){
  int x;
  cout << fibonacci(10) << endl ;
  cout << fibonacci(20) << endl ;

  cout << "Escreva um número: "
  cin >> x ;
  cout << fibonacci(x) << endl ;

  return 0;
}

int fibonacci(int n){
    int v1=1, v2=1;// Valores iniciais
    int novo;

    for(int i=3 ; i<=n;i++){ // Gerar n-2 termos
        novo = v1 + v2;
        v1 = v2;
        v2 = novo;
    }
    return v2;
}


*/
