#include <iostream>
using namespace std;

void infoDigito1(int n, int &dpares, int &tdigitos);
int infoDigito2(int n, int &tdigitos);
int infoDigito3(int n, int &dpares);

int main (){
    int n, dp, td;
    n = 1023456;
    infoDigito1(n, dp, td); // Sem retorno
    cout << n << ": " << dp << " , " << td << endl;
    dp = infoDigito2(n, td); // Retorna dígitos pares
    cout << n << ": " << dp << " , " << td << endl;
    td = infoDigito3(n, dp); // Retorna total de dígitos
    cout << n << ": " << dp << " , " << td << endl;
    return 0;
}
void infoDigito1(int n, int &dpares, int &tdigitos){
    int d; // Variável local
    dpares=0;
    tdigitos=0;
    do{
        d = n % 10; // Próximo dígito
        tdigitos ++; // Dígitos totais
        if (d %2 ==0) dpares++; // Dígitos pares

        n /= 10 ; // próximo valor de n
    }
    while(n>0);
}

int infoDigito2(int n,  int & tdigitos){
    int d; // Variável local
    int dpares=0; // Variável local!
    tdigitos=0;
    do{
        d = n % 10; // Próximo dígito
        tdigitos ++; // Dígitos totais
        if (d %2 ==0) dpares++; // Dígitos pares

        n /= 10 ; // próximo valor de n
    }
    while(n>0);
    return dpares;
}

int infoDigito3(int n, int & dpares){
    int d; // Variável local
    dpares=0; // Variável local!
    int tdigitos=0;
    do{

        d = n % 10; // Próximo dígito
        tdigitos ++; // Dígitos totais
        if (d %2 ==0) dpares++; // Dígitos pares

        n /= 10 ; // próximo valor de n
    }
    while(n>0);
    return tdigitos;
}

