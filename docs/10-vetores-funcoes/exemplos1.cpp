// =======================================
// =======================================
#include <iostream>
using namespace std;
// n é o tamanho do vetor v
// Note que NÃO precisa do operador &
void imprimir(int v[], int n);
int main (){
   int vetor1[] = {5, 10, 15};
   int vetor2[] = {2, 4, 6, 8, 10};
   // O nome do vetor sem colchetes
   imprimir(vetor1, 3);
   // Segundo parâmetro é o tamanho
   imprimir(vetor2, 5);
   return 0;
}

void imprimir(int v[], int n) {
   for (int i=0; i < n; i++)
      cout << v[i] << " ";
   cout << endl ;
}
// =======================================
// =======================================

#include <iostream>
#define TAM 200
using namespace std;

float calcula_media(float notas[], int tamanho);

int main (){
   int tam; float media, notas[TAM];
   cout << "Qual o tamanho da turma? "; 
   cin >> tam;

   for(int i = 0; i < tam; i++)
      cin >> notas[i];

   media = calcula_media(notas, tam);
   cout << "A media é: " << media << endl;
   return 0;
}

float calcula_media(float notas[], int tamanho){
   float media = 0;
   for(int i = 0; i < tamanho; i++)
      media += notas[i];
   return  media/tamanho;
}
// =======================================
// =======================================
#include <iostream>
#define TAM 200
using namespace std;
void imprimir(int v[], int n) ;
void soma(int A[], int B[], int C[], int n);

int main(){
 int A[] = {1,2,3};
 int B[]= {4,5,6};
 int C[3];
 soma(A,B,C,3);
 imprimir(C,3);
 return 0;
}
void soma(int A[], int B[], int C[], int n){
   for(int i = 0; i < n; i++)
      C[i] = A[i] + B[i];
}
void imprimir(int v[], int n) {
   for (int i=0; i < n; i++)
      cout << v[i] << " ";
   cout << endl ;
}

// =======================================
// =======================================

#include <iostream>
#define TAM 200
using namespace std;
void imprimir(int M[][TAM], int n, int m);
void ler(int M[][TAM], int n, int m);
void soma(int A[][TAM], int B[][TAM], int C[][TAM], int n, int m);
int main(){
    int M1[TAM][TAM], M2[TAM][TAM], M3[TAM][TAM];
    int n,m;
    cin >> n >> m ;// Dimensões da matriz

    ler(M1, n , m);
    ler(M2, n , m);
    soma(M1,M2,M3, n, m);
    imprimir(M3, n, m);
    return 0;
}
void imprimir(int M[][TAM], int n, int m){
   for(int i=0; i < n; i++){
    for(int j=0; j < m; j++)
        cout << M[i][j] << " ";

    cout << endl ;
   }
}
void ler(int M[][TAM], int n, int m){
   for(int i=0; i < n; i++){

    for(int j=0; j < m; j++)
        cin >>  M[i][j];
   }
}
void soma(int A[][TAM], int B[][TAM], int C[][TAM], int n, int m){
   for(int i=0; i < n; i++){

    for(int j=0; j < m; j++){

      C[i][j] = A[i][j]+B[i][j];
    }
  }
}
// =======================================
// =======================================
#include <iostream>
#define TAM 30

using namespace std;

int converterInt(char s[]);

int main(){
    char str[TAM];
    int i;

    cin >> str;
    i = converterInt(str);

    cout << i << endl;
    return 0;
}
int converterInt(char s[]){
    int soma=0;
    int l = strlen(s);
    int d;

    for (int i=0; i < l ; i++){
        d = s[i] - '0';
        soma = soma*10 + d;
    }
    return soma;
}
