/** Insertion sort **/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 10
#define MAXV 100

using namespace std; 

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

void insertion(int v[], int n){
  int i, j, min;
  for(i=1;i<n;i++){
    for(j=i;j>0;j--){
      if(v[j]< v[j-1])
        swap(v,j,j-1);
      else
        break;
    }
    print(v,TAM);
  }
}

int main(void){
  int v[TAM];
  rand_input(v,TAM);
  print(v,TAM);
  insertion(v,TAM);
  print(v,TAM);
  return 0;
}
