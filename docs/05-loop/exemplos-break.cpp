#include <iostream>
using namespace std;

int main() {
  
  
}

/*
  // 1. Exemplo break
  int i;
  for (i=1 ; i<=10 ; i++){
    if (i == 5){
      break;
    }
    cout << i << endl ;
  }
  return 0;

  //============
  // 2. Exemplo continue
  int i;
  for (i=1 ; i<=10 ; i++){
    if (i == 5){
      continue;
    }
    cout << i << endl ;
  }
  return 0;
  // =================
  // 3. Calcular os n primeiros termos da sequência Fibonacci.

    int v1=1, v2=1;// Valores iniciais
    int novo;
    int n;//num termos

    cout << "Digite o número de termos: ";
    cin>>n;
    cout<< v1 << endl << v2 << endl ; // 2 primeiros termos

    // Sabemos o número de termos que devem ser gerados! 
    for(int i=3 ; i<=n;i++){ // Gerar n-2 termos
        novo = v1 + v2;
        v1 = v2;
        v2 = novo;
        cout << novo << endl;
    }

  return 0;

// ===============
// 4. Dado um número L, imprimir os termos <= L
  int v1 = 1, v2=1; // Valores iniciais
  int novo, L;

  cout << "Ingresse o limite: ";
  cin >> L ;

  cout<< v1 << endl ;
    while(v2<= L){ // Imprimir enquanto v2 <=L
        cout << v2 << endl;
        novo = v1 + v2;
        v1 = v2;
        v2 = novo;
    }
    return 0;

  // =============
  // 5. Dado um número L, imprimir os termos <= L
  int v1 = 1, v2=1; // Valores iniciais
    int novo, L;

    cout << "Ingresse o limite: ";
    cin >> L ;
    cout<< v1 << endl ;
    while(true){ // loop (potencialmente) infinito! 
        novo = v1 + v2;
        v1 = v2;
        v2 = novo;
        if (novo >L)
            break; // Termina o laço
        cout << novo << endl ;
    }
    return 0;
  // ===================
  //  6. Solicitar 3 números inteiros positivos e calcular o somatório deles. 
  int soma = 0,i,n;

  // Aqui assumimos que o usuário só vai digitar números positivos
  for (i=1; i<=3 ;i ++){
    cout << "Digite  um número: ";
    cin >> n;
    soma += n;
  }
  cout << "Somatório: " << soma << endl ;
  //--------------
  // Agora terminamos com um erro se o usuário digitar um número negativo
  soma =0;
  bool erro = false;
  for (i=1; i<=3 ;i ++){
    cout << "Digite  um número: ";
    cin >> n;
    if (n < 0){
      erro = true;
      break;
    }
    soma += n;
  }
  if (erro)
    cout << "Valores negativos foram digitados" << endl ;
  else
    cout << "Somatório: " << soma << endl  ;


  // -----
  // Agora "ignoramos" os números negativos
  soma = 0 ;
  for (i=1; i<=3 ;i ++){
    cout << "Digite  um número: ";
    cin >> n;
    if (n<0){
      i--;
      continue ; // soma +=n não será executado
    }

    soma += n;
  }
  cout << "Somatório: " << soma << endl ;
  
  return 0;


  // 7 Número primo
  int n,i;
  bool primo = true;

  cout << "Número >=2: "  ;
  cin >> n;
  for(i=2;i<n;i++){
    if (n%i == 0){
      primo = false;
      break;
    }
  }

  if (primo)
    cout << n << " é primo " <<  endl ;
  else
    cout << n << " não é primo " << endl ;

  return 0;

 //================
 // 8. While <-> for
 int soma = 0,n,i;
  float media;

  for(i=0;;i++){
    cout << "Ingrese um número (0 para termiar)" ;
    cin >> n;
    if (n == 0)
      break;
    soma += n;
  }
  cout << "Soma: " << soma << endl;
  cout << "i: " << i << endl;

  media = (float) soma / i ;
  cout << "media: " << media << endl ;

  return 0;
  

*/
