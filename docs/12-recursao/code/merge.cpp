#include <iostream>
using namespace std;
#define TAM 100

void intercalar(int v[], int ini, int meio, int fim);
void mergeSort(int v[], int n);
void mergeRec(int v[], int ini, int fim);
void imprimir(int v[], int n);



int main(){
    int v1[TAM], n;
    cin >> n ;
    for (int i=0; i< n;i++)
        cin >> v1[i];

    imprimir(v1, n);
    cout << endl ;
    mergeSort(v1,n);
    imprimir(v1, n);
    cout << endl ;
    return 0;
}

// intercalar v[ini..meio-1] e v[meio - fim] para 
// produzir um vetor ordenado v[init .. fim]
// Assumimos que os subvetores v[ini..meio-1] e v[meio .. fim]
// já estão ordenados
void intercalar(int v[], int ini, int meio, int fim){
    int aux[TAM];
    int i=ini, j=meio, k=0;
    while(i< meio && j <= fim){
        if(v[i]< v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }
    // Armazenar os valores que faltaram
    while(i < meio) aux[k++] = v[i++];
    while(j <= fim) aux[k++] = v[j++];

    // Copiar aux no vetor original
    k=0;
    for(i=ini ; i <= fim ; i++) v[i] = aux[k++];
}

void mergeSort(int v[], int n){
    mergeRec(v,0, n-1);
}

void mergeRec(int v[], int ini, int fim){
    int m;
    if (fim > ini) {
        m = (fim + ini) / 2;
        mergeRec(v, ini, m);
        mergeRec(v, m+1, fim);
        intercalar(v, ini, m+1 , fim);
    }
}

void imprimir(int v[], int n){
    cout << "[ ";

 for(int i=0 ; i < n ; i++){
     if (i !=0)
         cout << " , ";
     cout << v[i];
 }

 if (n != 0) cout << " ";
 cout << "]";
}

