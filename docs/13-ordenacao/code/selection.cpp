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

void selection(int v[], int n){
  int i, j, min;
  for(i=0;i<n-1;i++){
    min = i;
    for(j=i+1;j<n;j++){
      if(v[j]< v[min])
        min = j;
    }
    swap(v,i,min);
    print(v,TAM);
  }
}

int main(void){
  int v[TAM];
  rand_input(v,TAM);
  print(v,TAM);
  selection(v,TAM);
  print(v,TAM);
  return 0;
}
