


/*
 *=======================

 #include <iostream>
using namespace std;
int main() {

  // Declarar um vetor de inteiros
  int vetint[5];
  // Vetor inicializado
  float vetfloat[5] = {0.5,0.7};

  // Percorrer
  for (int i=0;i<5;i++){
    cout << vetfloat[i] << " ";
  }
  cout << endl ;

  // Ler valores
  cout << "Valores para o vetor: ";
  for (int i=0;i<5;i++){
    cin >> vetint[i];
  }

  // Calcular o somatório
  int soma=0;
  for (int i=0;i<5;i++){
    soma += vetint[i];
  }

  cout << "Somatorio: " << soma << endl;

  return 0;
}

 *=========================
 // Calcular a soma vetorial
// de dois vetores de inteiros

#include<iostream>
#define MAX 50

using namespace std;

int main()
{
    int n, v1[MAX],v2[MAX], v3[MAX];
    cout << "Número de elementos do vetor: ";
    cin >> n;

    cout << "Valores para V1: ";
    for (int i=0;i<n;i++)
        cin>>v1[i];
    
    cout << "Valores para V2: ";
    for (int i=0;i<n;i++)
        cin>>v2[i];

    for (int i=0;i<n;i++)
        v3[i] = v1[i] + v2[i];

    // Imprimir o resultado
    cout << "[ ";
    for(int i = 0; i < n ; i++)
    {
        cout<<v3[i];
        if(i != n-1)
            cout << " , ";
    }
    cout<<" ]"<<endl;
    return 0;
}

=========================
#include <iostream>
// Sempre utilizar contantes
// para declarar os vetores
#define TAM 100
using namespace std;

int main(){
  int n, v[TAM]; // TAM = 100
  int i,j;
  bool repetido = false; //Flag
  // Só utilizamos os primeiros
  // n elementos do vetor

  cout << "Número de elementos: " ;
  cin >> n ;
  // Ler os valores do vetor
  for (i=0;i < n ; i++)
      cin >> v[i];

  // Elementos repetidos?
  for (i=0 ; i < n && !repetido ; i++){
      for(j=i+1 ; j < n ; j++){
          if(v[i] == v[j]){
              repetido = true;
              break;
          }
      }
  }

  if(repetido)
      cout << "Vetores com elementos repetidos" << endl ;
  else
      cout << "Vetores sem elementos repetidos" << endl ;

  return 0;
}

 */
