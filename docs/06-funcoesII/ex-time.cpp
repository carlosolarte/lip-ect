#include <iostream>
using namespace std;

// Dado um número de segundos S, calula a quantidade de horas, minutos e segundos. 
void time(int S, int &seg, int&min, int &hora);
// função para imprimir em formato hh:mm:ss
void printTime(int S);

int main(){
  int s,m,h;
  time(10000,s,m,h);
  cout << h << ":" << m << ":" << s << endl;

 printTime(10000); 
 printTime(0);
 printTime(1201);

  return 0;
}


void time(int S, int &seg, int&min, int &hora){
    seg = S % 60;
    hora = S/3600;
    min = (S - hora*3600)/60;
}

void printTime(int S){
    int s,m,h;
    time(S,s,m,h);
    cout << (h <= 9 ? "0" : "") << h << ":" <<
            (m <= 9 ? "0" : "") << m << ":" <<
            (s <= 9 ? "0" : "") << s << endl;
}

