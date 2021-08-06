#include <iostream>
#include <cstring>
#define TAM 600
using namespace std;

void remover(char s[], char r[]);
bool palindromo(char s[]);
bool frasepalindromo(char s[]);

int main(){
    char s1[] = "Fica facil escrever palindromos com nomes proprios, como fazem Mezaf Omocso, Irporp Semon, Mocs Omord, Nila Prevercs e Lica Facif";
    char s2[] = "Radar";

    cout << frasepalindromo(s1) << endl ;
    cout << frasepalindromo(s2) << endl ;
    return 0;
}

// Remover espaços e sinais de pontoação 
void remover(char s[], char r[]){
    int n=strlen(s);
    int pos=0;
    for (int i=0; i < n;i++){
        if(isalpha(s[i])){
            r[pos++] = tolower(s[i]);
        }
    }
    // Caractere de terminação 
    r[pos] = 0;
}

// Determinar se uma palavra é palíndromo 
bool palindromo(char s[]){
    int n=strlen(s);
    for (int i =0; i<= n/2; i++)
        if(s[i]!= s[n-1-i])
            return false;
    return true;
}

// Determinar se uma frase é palíndromo
bool frasepalindromo(char s[]){
    char aux[TAM];
    remover(s, aux);
    return palindromo(aux);
}

