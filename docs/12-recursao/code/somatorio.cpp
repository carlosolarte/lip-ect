/**
 * Somatorio de um vetor
 */
#include <iostream>
#define TAM 100
using namespace std;

int somatorio(int v[], int n);
int somatoriorec(int v[], int idx, int n);


int main(void){
  int v[TAM], n;
  cin >> n;

  for (int i=0; i<n;i++)
      cin >> v[i];

  cout << somatorio(v, n) << endl;
  return 0;
}

int somatorio(int v[], int n){
    return somatoriorec(v,0, n-1);
}

int somatoriorec(int v[], int idx, int fim){
    if (idx > fim)
        return 0;
    return v[idx] + somatoriorec(v, idx+1, fim);
}

