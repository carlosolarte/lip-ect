#include <iostream>
#include <cstring>
#include <cmath>
#define TAM 100
using namespace std;

enum ESexo {Feminino, Masculino};

// Struct e Enum:
struct Pessoa{
  char nome[50];
  ESexo sexo;
};

void print(Pessoa P);
int filtrar(Pessoa vp[], int n, Pessoa vmulheres[]);

int main(){
    Pessoa P,P2;
    strcpy(P.nome, "Maria");
    P.sexo = Feminino;
    strcpy(P2.nome, "João");
    P2.sexo = Masculino;
    print (P);
    print (P2);

    Pessoa v[TAM], res[TAM];
    v[0] = P;
    v[1] = P2;

    cout << "Filtrar: " << endl ;
    int n = filtrar(v, 2, res);
    for (int i=0;i<n ;i++)
        print(v[i]);

    return 0;
}
void print(Pessoa P){
    if (P.sexo == Masculino)
        cout << "Sr. " << P.nome << endl;
    else    
        cout << "Sra. " << P.nome << endl;

}

// Retorna o número de elementos do vetor de saída
// Segundo vetor: saída da função
int filtrar(Pessoa vp[], int n, Pessoa vmulheres[]){
    int pos = 0; // índice para atribuir valores em vmulheres

    for( int i=0; i < n ; i++){
        if (vp[i].sexo == Feminino)
            vmulheres[pos++] = vp[i];
    }
    return pos;

}


