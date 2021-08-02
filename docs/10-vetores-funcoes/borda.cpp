
#include<iostream>
#define TAM 30
using namespace std;

void ler(int M[][TAM],int n, int m);
int minBorda(int M[][TAM],int n, int m);
bool mBorda(int M[][TAM],int n, int m);

int main(){
    int M[TAM][TAM];
    int i,j,n,m;
    int min;

    cin >> n >> m ;
    ler(M,n,m);

    if (mBorda(M,n,m))
        cout << "Todos os elementos da borda são maiores que os elementos internos";
    else
        cout << "Não todos os elementos da borda são maiores que os elementos internos";
}

void ler(int M[][TAM],int n, int m){
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < m ; j++)
            cin >> M[i][j];
    }
}
int minBorda(int M[][TAM],int n, int m){
    // Calcular o min da borda
    int min=M[0][0];

    // Inferior e superior
    for(int j=0 ; j < m ; j++){
        if (min > M[0][j])
            min = M[0][j];
        if (min > M[n-1][j])
            min = M[n-1][j];

    }
    // Direita e esquerda
    for(int i=0 ; i < n ; i++){
        if (min > M[i][0])
            min = M[i][0];
        if (min > M[i][m-1])
            min = M[i][m-1];
    }
    return min;
}

bool mBorda(int M[][TAM],int n, int m){
    // Determinar se os elementos internos são todos menores
    int min = minBorda(M,n,m);
    for(int i=1 ; i < n-1 ; i++){
        for(int j=1 ; j < m-1 ; j++)
            if(M[i][j] >= min){
                return false;
            }
    }
    return true;
}
