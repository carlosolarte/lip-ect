#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
}
/* 

// 1. Contando (versão while)
  int i;
  i=1; // Inicialização
  while (i<=5){ // teste da condição
    cout << i << endl ;
    i+=1; // atualização 
  }

  cout << "valor final: " << i << endl ;
  return 0;


// =======================
// 2. Contando (versão for)
  int i;
  
  for (i=1; i <= 5 ; i++){ // inicialização + teste + atualização 
    cout << i << endl ;
  }

  cout << "valor final: " << i << endl ;
  
  return 0;

// ======================
// 3. Contando (versão do-while)
  int i;
  i = 1; // inicialização
  do{
    cout << i << endl ;
    i+= 1; // Atualização 

  } while (i <= 5); // Teste
  
  cout << "valor final: " << i << endl ;
  
  return 0;

// ===============
// 4. Ler uma sequência de números inteiros até que o número 0 seja 
// digitado. Depois, imprimir o somatório e a média desses valores
  
  int soma = 0; // soma deve ser inicializado!
  int num, contador = 0;
  float media;

  
  // Não sabemos quantos números devemos ler. Portanto, melhor
  // utilizar um while (também podem utilizar um for+break -- próxima aula)

  do{
    cout << "Ingresse um número (0 para terminar): " ;
    cin >> num;
    if (num != 0){ // Atualizar só se num != 0
      soma += num ; // acumular a soma
      contador ++ ; // incrementar o contador
    }
  } while (num != 0); // Teste
  
  cout << "soma: " << soma << endl ;
  media = (float)soma / contador ;

  cout << "contador: " << contador << endl ;
  
  // Imprimir a media com 2 casas decimais (biblioteca iomanip)
  cout << fixed << setprecision(2) ; 
  cout << "media: " << media << endl ;
  
  return 0;

// ===========
// 5 (v1). Implemente um programa que lê do usuário uma sequência de 
// números inteiros enquanto o valor 0 não é digitado. 
// Quando o número 0 for digitado, o programa deve imprimir o menor valor 
// dentre todos inseridos.

  int menor ,num;
  cout << "Ingresse um número: " ;
  cin>>num;
  menor = num; // Inicializar menor com o primeiro da sequência! 
  while(num != 0){
   if(num < menor){
     menor=num;
   }
   cout << "Ingresse um número: " ;
   cin>>num;
  }
  cout<<"Menor elemento: " << menor << endl;
  return 0;

// ===========================
// 5 (v2). 
  int menor ,num;
  bool primeiro = true; // é o primeiro número?
  do {
    cout << "Ingresse um número: " ;
    cin>>num;

    if(primeiro){
      menor = num ; // inicializar com o primeiro número
      primeiro = false ;
    }
    else{
      if(num < menor){
        menor=num;
      }
    }
  } while(num != 0);
  
  cout<<"Menor elemento: " << menor << endl;
  return 0;
*/
