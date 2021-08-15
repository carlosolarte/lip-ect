/**
 * Algoritmo de Euclides para MDC
 * Carlos Olarte
 */
#include <iostream>
using namespace std;

int euclides_MDC(int a, int b);


int main(void){
  int a,b;
  cout<<"Entre 2 numeros positivos\n";
  cin>>a>>b;
  cout<<"MDC("<<a<<","<<b<<")="<<euclides_MDC(a,b)<<endl;
  return 0;
}

int euclides_MDC(int a, int b){
  if(b==0)
    return a;
  else
    return euclides_MDC(b,a%b);
}

