#include <iostream>
#define TAM 100
using namespace std;

bool verificarLinha(int M[][TAM], int n, int linha);
bool verificarCol(int M[][TAM], int n, int col);
bool QDLT(int M[][TAM],int n);

int main() {
    int M[TAM][TAM],d;
    cin>>d;

    for(int i=0;i < d;i++){
        for(int j=0;j < d;j++){
            cin >> M[i][j];
        }
    }
    if(QDLT(M,d)){
        cout << "A matriz é quadrado latino" << endl;
    }
    else{
        cout << "A matriz não é um quadrado latino" << endl;
    }
    return 0;
}

// Determinar se os números 1..n estão na linha
bool verificarLinha(int M[][TAM], int n, int linha){
    int v[TAM]={}; // v = [0,0,0,0...0]
    for(int i=0; i < n ;i++){
        // Os números dever estar no intervalo [1,n]
        if (M[linha][i] <= 0 || M[linha][i] > n)
            return false; 
        v[M[linha][i]-1] ++; 
    }
    // Todos os valores devem ser 1
    for(int i=0; i < n;i++)
        if(v[i]!=1) return false;

    return true;
}

// Determinar se os números 1..n estão na coluna
bool verificarCol(int M[][TAM], int n, int col){
    int v[TAM]={};
    for(int i=0; i < n;i++){
        if (M[i][col] <= 0 || M[i][col] > n)
            return false;
        v[M[i][col]-1] ++;
    }
    // Todos os valores devem ser 1
    for(int i=0;i < n;i++)
        if(v[i]!=1) return false;

    return true;
}

// Verificar se M é um quadrado latino
bool QDLT(int M[][TAM],int n){
    // Linha
    for(int i=0;i < n;i++)
        if(!verificarLinha(M, n, i)){
            return false;
        }
    // colunas
    for(int i=0;i < n;i++)
        if(!verificarCol(M, n, i))
            return false;

    return true;
}
