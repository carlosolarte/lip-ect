#include <iostream>
#include <cstring>
#define TAM 100
using namespace std;

struct Produto{
  int id;
  char nome[20];
};

struct Lista{
  // TAM= capacidade máxima
  Produto vp[TAM];
  // n=número de elementos atualmente armazenados
  int n;
};


Produto novo(int id, char nome[]);
void imprimir(Produto P);
Lista novaLista();
int tamanho(Lista L);
void imprimir(Lista L);
bool inserir(Lista &L, Produto P);
Produto elemento(Lista L, int i);


int main(){
  Lista L = novaLista() ;
  inserir(L, novo(1, "produto1"));
  inserir(L, novo(2, "produto2"));
  inserir(L, novo(3, "produto3"));
  inserir(L, novo(4, "produto4"));
  inserir(L, novo(5, "produto5"));
  imprimir(L);
  return 0;
 }

// Criar um produto
Produto novo(int id, char nome[]){
  Produto P;
  P.id = id;
  strcpy(P.nome, nome);
  return P;
}

// Imprimir um produto
void imprimir(Produto P){
  cout << P.id << " " << P.nome;
}

// Cirar uma lista vazia
Lista novaLista(){ 
 Lista L;
 L.n = 0;
 return L;
}

// Determinar o tamanho da lista
int tamanho(Lista L){ 
 return L.n;
}

// Imprimir os elementos da lista
void imprimir(Lista L){
 for(int i=0 ; i < L.n ; i++){
   imprimir(L.vp[i]);
   cout << endl ;
 }
}

// Inserir um elemento no final da lista
bool inserir(Lista &L, Produto P){
  if (L.n == TAM)
    return false;
  L.vp[L.n] = P;
  L.n++;
  return true;
}

// Assumimos que i>=0 e i < L.n
Produto elemento(Lista L, int i)
{
  return L.vp[i];
}

