/**
 * Multiplicação recursiva
 */
#include <iostream>
using namespace std;

bool ehpar(int a);


int main(void){
  int a;
  cin>>a;
  if (ehpar(a))
      cout << a << " é par" << endl;
  else
      cout << a << " não é par" << endl;

  return 0;
}

bool ehpar(int a){
  if(a==0)
    return true;
  return !ehpar(a-1);
}

