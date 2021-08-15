/**
 * Funcao Ackermann
 * Carlos Olarte
 */

#include <iostream>
using namespace std;

int ackermann(int m, int n);

int main(void){
  int a,b;
  cout<<"Entre 2 numeros positivos\n";
  cin>>a>>b;
  cout<<"ackermann("<< a<< ","
      <<b <<")="<< ackermann(a,b)<< endl;
  return 0;
}

int ackermann(int m, int n){
  if (m==0)
    return n+1;
  else{
    if(m>0 && n==0)
      return ackermann(m-1,1);
    else
      return ackermann(m-1, ackermann(m,n-1));
  }
}

