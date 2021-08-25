/** quick sort **/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 10
#define MAXV 1000

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

int partition2(int v[], int left, int right){
  int pivot = v[right];
  int i = left;
  for (int j=left; j<right;j++){
    if (v[j] <= pivot){
      swap(v,i,j);
      i++;
    }
  }
  swap(v,i,right);
  return i;
}
int partition(int v[], int left, int right)
{
  int i = left, j = right;
  int tmp;
  int pivot = v[(left + right) / 2];

  while (i <= j) {
    while (v[i] < pivot)
      i++;

    while (v[j] > pivot)
      j--;

    if (i <= j) {
      swap(v,i,j);
      i++;
      j--;
    }
  }

  return i;
}

void quickSort(int v[], int left, int right) {
  int index = partition2(v, left, right);
  print(v,TAM);
  if (left < index - 1)
    quickSort(v, left, index - 1);
  if (index < right)
    quickSort(v, index, right);
}


int main(void){
  int v[TAM];
  int vv[] = {5,7,2,1,3,8,6};
  partition2(vv,0,6);
  print(vv,7);
  rand_input(v,TAM);
  print(v,TAM);
  quickSort(v,0,TAM-1);
  print(v,TAM);
  return 0;
}
