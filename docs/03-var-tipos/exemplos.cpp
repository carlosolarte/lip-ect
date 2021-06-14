/*
 Exemplos de operadores aritméticos
*/

#include <iostream>
using namespace std;

int main() {
 

return 0;
}

// ============
// Constantes
// ============
/*
 const float g = 9.8;
  g = 10.2 ; // erro! 
  cout << g << endl ;
*/

// =====================
// Operações aritméticas 
// =====================
/*
  // Declaração de variáveis e inicialização 
  int x = 5, y = 2; 
  int z ; // Declaração
  z = 0; // Atribuição 

  cout << "soma: " << x + y << endl ;
  cout << "mult:" << x * y << endl ;
  cout << "divisão INTEIRA: " << x / y << endl ; 
  cout << "resto da divisão: " << x % y << endl ;
  cout << "subtração " << x - y  << endl ;
*/

// ==========================
// Operadores de incremento
// ==========================
/*
int x = 1; 
  int y = 5;
  cout << (x++) << endl ;
  cout << x << endl ; 
  cout << (++y) << endl ;
  cout << y << endl ; 

  int a = 1, b = 2, c;
  c  = ++a * b++; 
  cout << a << " , " << b << " , " << c << endl;  

  // De forma alternativa
  a = 1 ; b = 2 ;
  a +=1; //primeiro incrementar a
  c = a * b ; // utilizar o valor atual de a(2) e  b(2)
  b +=1 ; // depois incrementar b
*/


// ==========================
// Precedência de operadores
// ==========================
/*
//Precedência de operadores   
 int x=1, y=2, z=3;
 int r;

 r = 1 + 2 + 3 ;
 cout << r << endl ;

// Mesmo nível de precedência 
 r = x + y - z - 2 ;
 cout << r << endl ;

// * precedência mais alta com relação a +
 r = x + y * z ;
 cout << r << endl ;

 r =  y * z + x ;
 cout << r << endl ;

// Mesmo nível de precedência 
// De esquerda para direita 
 r = 9 / 3 * 2 ;
 cout << r << endl ;

// ++ maior nível de precedência
r = (++x) * y ;
cout << r << endl ;
*/


// =========================
// Bool e operadores lógicos
// =========================
/*
// O tipo Bool e operadores lógicos
  bool a = false , b = true;
  cout << a << endl ;
  cout << b << endl ;

  a = (3 == 2);
  cout << a << endl ;

  b = (3 > 2) ;
  cout << b << endl ; 

  cout << "conjunção :" << (a && b) << endl ;
  cout << "disjunção :" << (a || b) << endl ;
  cout << "negação:" << (! a) << endl ;
  */

// ====================
// Op relacionais 
// ====================
/*
  // Operadores relacionais
  // Menor precedência  com relação aos operadores aritméticos

  int x;
  x = 3 + 2 >= 5 / 2 ;
  cout << x << endl ;
  x = 3 + 2 >= 2 ; 
  cout << x << endl ;
  x = 5 >= 2 ;
  cout << x << endl ;

  // utilizando bool
  bool y;
  y = 3 + 2 >= 5 / 2 ;
  cout << y << endl ;
  */

  // ==================
  // casos curiosos 
  // ==================
  bool b = -5 < -3 < 0 ;
  cout << b << endl ;
  cout << (-5 < -3 && -3 < 0) << endl ;


  // ==================
  //Conversão de tipos
  // ==================
  /*Quando operandos de tipos diferentes são misturados 
  em uma expressão, os valores são convertidos no tipo 
  do maior operando.
  */

// ===========================
// Conversão de tipos e cast
// ===========================
/*
  int x = 3 , y = 2 ;
  float f = x / y ;
  cout << f << endl ;

  f = 3.0 / 2 ;
  cout << f << endl ;

  f = (float)x / y ;
  cout << f << endl ;

  f = x / 2.0 ;
  cout << f << endl ;

  float pi = 3.1416;
  int p = pi ; // perda de informação !
  cout << p << endl ;
  */

  // ============
  // O tipo char
  // =============

/*
  // O tipo char
 char c = 'a';
 c = c + 3 ;
 cout << c << endl ;
 int x = c ;
 cout << x << endl ;
 */
