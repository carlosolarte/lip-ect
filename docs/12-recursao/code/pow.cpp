/**
 * Multiplicação recursiva
 */
#include <iostream>
using namespace std;

int pow(int a, int b);


int main(void){
  int a,b;
  cin>>a>>b;
  cout<<a << " ^ " << b << " = " << pow(a,b) << endl;
  return 0;
}

int pow(int a, int b){
  if(b==0)
    return 1;
  else
    return a * pow(a, b-1);
}

