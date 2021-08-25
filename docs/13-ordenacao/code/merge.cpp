/** Merge sort **/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 10
#define MAXV 100

using namespace std; 
void rand_input(int v[], int n);
void print(int v[], int n);
void swap(int v[], int i, int j);
void mergeSort(int v[], int n);
void mergeRec(int v[], int ini, int fim);
void intercalar(int v[], int ini, int meio, int fim);
int main(void){
  int v[TAM];
  rand_input(v,TAM);
  print(v,TAM);
  mergeSort(v,TAM);
  print(v,TAM);
  return 0;
}

void rand_input(int v[], int n){
  srand (time(NULL));
  for(int i=0;i<n;i++){
    v[i] = rand()%MAXV;
  }
}

void print(int v[], int n){
  cout<<"[";
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<"]"<<endl;
}

void swap(int v[], int i, int j){
  int aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}
void mergeSort(int v[], int n){
        mergeRec(v,0, n-1);
}

// Ordenar o subvetor v[ini..fim]
void mergeRec(int v[], int ini, int fim){
    if (fim > ini) { // Condição
        int m = (fim + ini) / 2; // metade  
        mergeRec(v, ini, m); // subv a esquerda 
        mergeRec(v, m+1, fim); //subv a direita
        intercalar(v, ini, m+1 , fim);  // Unir
    }
}

// Unir v[ini..meio-1] + v[meio ..fim]
// // Os subvetores devem estar ordenados
void intercalar(int v[], int ini, int meio, int fim){
    int aux[TAM];
    int i=ini, j=meio, k=0;
    while(i< meio && j <= fim){
        if(v[i]< v[j]) // copiar da esquerda
            aux[k++] = v[i++];
        else // copiar da direita
            aux[k++] = v[j++];
    }
    // Armazenar os valores que faltaram
    while(i < meio) aux[k++] = v[i++];
    while(j <= fim) aux[k++] = v[j++];
    // Copiar aux no vetor original
    k=0;
    for(i=ini ; i <= fim ; i++) 
        v[i] = aux[k++];
}

