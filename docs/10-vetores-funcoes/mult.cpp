
#include<iostream>
#define TAM 30
using namespace std;

void ler(int M[][TAM],int n, int m);
void mult(int M1[][TAM], int M2[][TAM], int nlm1, int ncm1, int ncm2, int M3[][TAM]);
void imprimir(int M[][TAM], int n, int m);

int main(){
    int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
    int la,ca,cb;
    cout << "Linhas e colunas de A e colunas de B" << endl ;;
    cin >> la >> ca >> cb ;
    cout << "Matriz A" << endl;
    ler(A,la,ca);
    cout << "Matriz B" << endl;
    ler(B,ca,cb);
    mult(A,B,la,ca,cb,C);
    cout << "Matriz A" << endl;
    imprimir(A, la, ca);
    cout << "Matriz B" << endl;
    imprimir(B, ca, cb);
    cout << "Matriz C" << endl;
    imprimir(C, la, cb);

    return 0;

}

void ler(int M[][TAM],int n, int m){
    for(int i=0 ; i < n ; i++){
        for(int j=0 ; j < m ; j++)
            cin >> M[i][j];
    }
}

void imprimir(int M[][TAM], int n, int m){
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++)
            cout << M[i][j] << " ";

        cout << endl ;
    }
}

void mult(int M1[][TAM], int M2[][TAM], int nlm1, int ncm1, int ncm2, int M3[][TAM]){
    for(int i=0 ; i < nlm1 ; i++){
        for(int j=0 ; j < ncm2 ; j++){
            // Produto escalar: 
            // linha i de M1 coluna j de M2
            int soma = 0;
            for (int k = 0 ; k < ncm1 ; k++){
                soma += M1[i][k] * M2[k][j];
            }
            M3[i][j] = soma;
        }
    }

}

