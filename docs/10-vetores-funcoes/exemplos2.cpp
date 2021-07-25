// =======================================
// =======================================
#include <iostream>
#define MAX 100
using namespace std;

bool colOK(int M[][MAX], int col, int n);
bool linhaOK(int v[], int n);
bool permute(int M[][MAX], int n);
void ler(int M[][MAX], int n, int m);
int main()
{
    int n,M[MAX][MAX];
    cin >> n;
    ler(M, n, n);

    if(permute(M, n))
        cout << "É matriz de permutação" << endl;
    else
        cout << "Não é matriz de permutação" << endl;
    return 0;
}
bool colOK(int M[][MAX], int col, int n){
    int soma = 0;
    for(int i = 0 ; i< n;i++){
        if (M[i][col] != 0 && M[i][col] != 1)
            return false;

        soma+= M[i][col];
    }
    return soma == 1 ;
}
bool linhaOK(int v[], int n){
    int soma = 0;
    for(int i = 0 ; i < n ; i++){
        if (v[i] != 0 && v[i] != 1)
            return false;

        soma+= v[i];
    }
    return soma == 1;
}
bool permute(int M[][MAX], int n){
    for(int i = 0 ; i < n ; i++){
        // M[i] é um vetor!
        if (!linhaOK(M[i],n))
            return false;
    }

    for(int i = 0; i < n;i++){
        if (!colOK(M,i, n))
            return false;
    }

    return true;
}
void ler(int M[][MAX], int n, int m){
   for(int i=0; i < n; i++){

    for(int j=0; j < m; j++)
        cin >>  M[i][j];
   }
}

// =======================================
// =======================================
#include <iostream>
#define MAX 100
using namespace std;

int ocorre(int M[][MAX], int v, int n, int m);
bool repetidos(int M[][MAX], int n, int m);
int main(){
    int M[MAX][MAX] = { {1,2,3},{4,2,6},{7,8,9}};
    if(repetidos(M,3,3))
        cout << "sim" << endl;
    else
        cout << "não" << endl;

}
int ocorre(int M[][MAX], int v, int n, int m){
    int cont =0;
   for(int i=0; i < n; i++){
    for(int j=0; j < m; j++){
        if (M[i][j]==v)
            cont ++;
    }
   }
   return cont;
}
bool repetidos(int M[][MAX], int n, int m){
   for(int i=0; i < n; i++){
    for(int j=0; j < m; j++){
        if (ocorre(M, M[i][j], n ,m) >1)
            return true;
    }
   }
   return false;
}

// =======================================
// =======================================
#include <iostream>
#define MAX 100
using namespace std;

bool linhasIguais(int v1[], int v2[], int n);
bool matrizl(int M[][MAX],int nl,int nc);
// Alternativa
bool matrizAlt(int M[][MAX],int nl,int nc);
bool linhasIguais(int M[][MAX], int l1, int l2,  int n);

int main(){
    int M[MAX][MAX] = {{1,2,3},{4,5,6},{1,2,3}} ;
    int M2[MAX][MAX] = {{1,2,3},{4,5,6},{1,6,3}} ;
    if(matrizl(M,3,3))
        cout << "Linhas iguais" << endl ;
    else
        cout << "Sem linhas iguais" << endl ;


    if(matrizl(M2,3,3))
        cout << "Linhas iguais" << endl ;
    else
        cout << "Sem linhas iguais" << endl ;

    return 0;
}

bool linhasIguais(int v1[], int v2[], int n){
    for(int i=0 ; i < n ; i++){
        if(v1[i]!=v2[i])
            return false;
    }
    return true;
}
bool matrizl(int M[][MAX],int nl,int nc){
    for(int i=0 ; i < nl ;i++){
        for(int j=i+1 ; j < nl ; j++){
            if(linhasIguais(M[i], M[j], nc))
                return true;
        }
    }
    return false;
}
// Uma alternativa
bool linhasIguais(int M[][MAX], int l1, int l2,  int n){
    for(int i=0; i < n;i++){
        if(M[l1][i]!=M[l2][i])
            return false;
    }
    return true;
}
bool matrizAlt(int M[][MAX],int nl,int nc){
    for(int i=0; i < nl;i++){
        for(int j=i+1 ; j < nl;j++){
            if(linhasIguais(M, i, j , nc))
                return true;
        }
    }
    return false;
}



