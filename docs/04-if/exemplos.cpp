#include <iostream>
using namespace std;

int main() {
  
  return 0;
}
// =================
// 1. Determinar se um número é par ou ímpar
// =================
/* 
 int n ;
  // Ler um valor do teclado
  cout << "Informe um número inteiro: " << endl;
  cin >> n ;

  if(n%2==0)
    cout << "O número " << n << " é par" << endl;
  else
    cout << "O número " << n << " é ímpar" << endl;
*/


// =================
// 2.  Determinar se um número é positivo ou negativo. Também, determinar se o número é par ou ímpar 
// =================
/*
 int n;
 cout << "Informe um número inteiro: " << endl;
 cin >> n ;

 if(n%2==0)
    cout << "O número " << n << " é par" << endl;
  else
    cout << "O número " << n << " é ímpar" << endl;

  // A segunda decisão é independente da primeira
 if (n<0)
    cout << n << " é um número negativo" << endl;
 else
    cout << n << "é um número positivo" << endl;
*/

//========================
// 3. Estruturas aninhadas
// =================
  // Dado um número n, imprimir 
  // - "n é um par positivo",
  // - "n é um par negativo", 
  // - "n é um ímpar positivo" ou
  // - "n é um ímpar negativo" 
  // segundo seja o caso
/*
 int n;
 cout << "Informe um número inteiro: " << endl;
 cin >> n ;

 if(n%2==0){
   if (n>=0)
     cout << "O número " << n << " é um par positivo" << endl;
   else
     cout << "O número " << n << " é um par negativo" << endl;
 }
 else{
   if (n>=0)
     cout << "O número " << n << " é um ímpar positivo" << endl;
   else
     cout << "O número " << n << " é um ímpar negativo" << endl;
 }
*/

//==========
// 4. Casos curiosos
// ===========
/*
  int x=5;
  if(x)
    cout << "Sim" << endl ;
  else
    cout << "Não" << endl ;

  if (x=4){ // Um erro frequente!
    cout << "x=4 NÃO compara! Valor x : " << x << endl;

  }
*/

// ===================
// 5. Exemplos de char
// ===================
/*
  char c;
  cout << "Informe um caractere: " ;
  cin>>c;
  if( (c>='a' && c<='z')|| (c>='A' && c<='Z')){
    // Nesses intervalos, c deve ser uma das letras do alfabeto
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
       c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        cout << c << " é uma vogal" << endl;
    else
      cout << c << " é uma consoante" << endl;
    }
    else // c é um símbolo (e não uma letra)
        cout << c << " é um símbolo" << endl;  
*/

// =============
  // 6. switch
  // =============
  /*
  int dia;
  cout << "Informe um dia (1 para domingo): " ;
  cin >> dia;
  switch (dia) {
    case 1:
      cout << "Domingo" << endl;
      break;
    case 2:
      cout << "Segunda" << endl;
      break;
    case 3:
      cout << "Terça" << endl;
      break;
    case 4:
      cout << "Quarta" << endl;
      break;
    case 5:
      cout << "Quinta" << endl;
      break;
    case 6:
      cout << "Sexta" << endl;
      break;
    case 7:
      cout << "Sábado" << endl;
      break;
    default:
      cout << "Dia não válido" << endl;
  }
  */

  // =====================
  // 7. Operador ternário
  // =====================
  /*
  bool ehPar;
  int n = 5 ;
  if (n%2 ==0)
    ehPar = true;
  else
    ehPar = false;    

  cout << ehPar << endl ; 
  // Uma forma mais simples
  ehPar = n%2 == 0 ? true : false;

  cout << ehPar << endl ; 

  // A expressão  c ? v1 : v2 
  // retorna v1 se c for verdadeiro e v2 caso contrário
  */
