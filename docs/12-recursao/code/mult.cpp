/**
 * Multiplicação recursiva
 */
#include <iostream>
using namespace std;

int mult(int a, int b);


int main(void){
  int a,b;
  cin>>a>>b;
  cout<<a << " x " << b << " = " << mult(a,b) << endl;
  return 0;
}

int mult(int a, int b){
  if(b==0)
    return 0;
  else
    return a + mult(a, b-1);
}

