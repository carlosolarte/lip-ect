/**
 * Somatorio de um vetor
 */
#include <iostream>
#include <cstring>
#define TAM 100
using namespace std;

bool palindromo(char s[]);
bool palrec(char s[], int ini, int fim);


int main(void){
  char s[TAM];
  cin >> s;

  if (palindromo(s))
      cout << "é palíndromo" << endl ;
  else
      cout << "não é palíndromo" << endl ;
  return 0;
}

bool palindromo(char s[]){
    return palrec(s,0, strlen(s)-1);
}

bool palrec(char s[], int ini, int fim){
    if (ini > fim)
        return true;
    if (s[ini] != s[fim])
        return false;

    return palrec(s, ini+1, fim -1);
}

