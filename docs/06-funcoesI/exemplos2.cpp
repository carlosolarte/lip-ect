#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  return 0;
}



/*
// 1. Imprimir os primeiros n termos da seq. Fibonacci
void termosFib(int n);

int main() {
  termosFib(10); // A função não retorna nada!

  // Outro exemplo
  int numero;
  cout << "Número de termos: ";
  cin >> numero;
  termosFib(numero);
  return 0;
}

// A função *imprime* a sequência
void termosFib(int n){
    int v1=1, v2=1;// Valores iniciais
    int novo;
    cout<< v1 << endl << v2 << endl ; // 2 primeiros termos
    for(int i=3 ; i<=n;i++){ // Gerar n-2 termos
        novo = v1 + v2;
        v1 = v2;
        v2 = novo;
        cout << novo << endl;
    }
}

// ==========
// Imprimir um número complexo
void imprimir(float real, float img);

int main(){
  imprimir(3.2, -5.4);
  imprimir(1, 2.2);
  return 0;
}

void imprimir(float real, float img){
  cout << fixed << setprecision (2) ;
  cout << real ;
  if (img<0)
    cout << " - " << (-1*img) << "i" << endl;
  else
    cout << " + " <<   img    << "i" << endl;

}
*/
