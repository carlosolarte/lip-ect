/** Bubble sort **/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 40
#define MAXV 200

using namespace std; 

// Algumas funcoes de vetores

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

void copy(int v[], int v2[], int n){
  for(int i=0;i<n;i++)
    v2[i] = v[i];
}


void swap(int v[], int i, int j){
  int aux = v[i];
  v[i] = v[j];
  v[j] = aux;
}





///////////////////////
// Bubble
///////////////////////
void bubble(int v[], int n){
  int i, j;
  for(i=n-1;i>=1;i--){
    for(j=0;j<i;j++){
      if(v[j]>v[j+1])
        swap(v,j,j+1);
    }
    print(v,TAM);
  }
}
////////////////////
// Insertion
////////////////////
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
/////////////////
// Selection
/////////////////
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


/////////////////
// Quick
/////////////////
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
  };

  return i;
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



void quickSort(int v[], int left, int right) {
  int index = partition(v, left, right);
  print(v,TAM);
  if (left < index - 1)
    quickSort(v, left, index - 1);
  if (index < right)
    quickSort(v, index, right);
}


// MAIN

int main(void){
  int v[TAM],v2[TAM],v3[TAM],v4[TAM];
  rand_input(v,TAM);
  copy(v,v2,TAM);
  copy(v,v3,TAM);
  copy(v,v4,TAM);
  cout<<"Bubble"<<endl;
  bubble(v,TAM);
  cout<<"Insertion"<<endl;
  insertion(v2,TAM);
  cout<<"Selection"<<endl;
  selection(v3,TAM);
  cout<<"Quick"<<endl;
  quickSort(v4,0,TAM-1);
  return 0;
}

