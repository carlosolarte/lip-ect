#include <iostream>
using namespace std; 
int bbin(int v[], int i, int j, int x){
  int mid;
  if(i>j)
    return -1;

  mid = (j+i) /2;
  if(v[mid] == x)
    return mid;
  
  if(v[mid] < x)
    return bbin(v, mid+1, j, x);
  
  return bbin(v, i, mid-1, x);

}
int buscar(int v[], int n, int x){
    return bbin(v,0,n-1,x);
}

void print(int v[], int n){
  for(int i=0;i<n;i++){
    cout<<v[i]<< " " ;
  }
  cout<<endl;
}

int main(){
  int v[] = {1,5,8,10,12,20,25};

  print(v,7);
  
  cout<<buscar(v,7,11)<<endl;
  cout<<buscar(v,7,12)<<endl;

  return 0;

}
