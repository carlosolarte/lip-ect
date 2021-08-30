## Algoritmos de Ordenação 
### Parte II
---
## Merge Sort

_Dividir e Conquistar_:

- Em lugar de ordenar um vetor de $n$ elementos, ordenamos dois subvetores (de $n/2$ elementos cada). 
- Apos ordenar os subvetores, __unimos as soluções__

---
## Merge Sort
```
[ 5 , 3 , 2 , 10 ] ==> [ 5 , 3 ] , [ 2 , 10] (dividir)
[ 5 , 3 ] ==> [ 5 ] , [ 3 ] (dividir)
[ 5 ] + [ 3 ] ==> [ 3 , 5 ] (conquistar)
[ 2 , 10 ] ==> [ 2 ] , [ 10 ] (dividir)
[ 2 ] , [ 10 ] ==> [2 , 10 ] (conquistar)
[ 3 , 5] + [2,10] = [2,3,5,10] (conquistar)
```
---
## Merge Sort
A parte recursiva... bem simples!
```cpp
// Merge Sort
void mergeSort(int v[], int n){
    mergeRec(v,0, n-1);
}

// Ordenar o subvetor v[ini..fim]
void mergeRec(int v[], int ini, int fim){
    if (fim > ini) { // Condição
        int m = (fim + ini) / 2; // metade  
        mergeRec(v, ini, m); // subv a esquerda 
        mergeRec(v, m+1, fim); //subv a direita
        intercalar(v, ini, m+1 , fim);  // Unir
    }
} 
```
---
## Merge Sort
```
// Unir v[ini..meio-1] + v[meio ..fim]
// Os subvetores devem estar ordenados
void intercalar(int v[], int ini, int meio, int fim){
    int aux[TAM];
    int i=ini, j=meio, k=0;
    while(i< meio && j <= fim){
        if(v[i]< v[j]) // copiar da esquerda
            aux[k++] = v[i++];
        else // copiar da direita
            aux[k++] = v[j++];
    }
    // Armazenar os valores que faltaram
    while(i < meio) 
        aux[k++] = v[i++];

    while(j <= fim) 
        aux[k++] = v[j++];

    // Copiar aux no vetor original
    k=0;
    for(i=ini ; i <= fim ; i++) 
        v[i] = aux[k++];
}
```
---
## Ordem decrescente

Como ordenamos de forma decrescente?

O que deve ser modificado? 

```cpp
void bubble(int v[], int n){
  int i, j;
  for(i=n-1;i >= 1;i--){
    for(j=0 ; j < i ; j++){
      if(v[j] > v[j+1])
        swap(v,j,j+1);
    }
    print(v,TAM);
  }
}
```
---
## Ordem decrescente

Como ordenamos de forma decrescente?

O que deve ser modificado? 

```cpp
void bubble(int v[], int n){
  int i, j;
  for(i=n-1;i >= 1;i--){
    for(j=0 ; j < i ; j++){
      if(v[j] < v[j+1]) // !!!!!
        swap(v,j,j+1);
    }
    print(v,TAM);
  }
}
```

---
## Ordenar Círculos
Implemente uma função que ordene um vetor de círculos em ordem decrescente
segundo a sua área.

---
## Ordenar Círculos

Definimos a estrutura de dados

```cpp
struct Ponto {
    double x, y;
};

struct Circulo{
    Ponto c;
    double raio;
};
```
---
## Ordenar Círculos
Modificamos qualquer um dos algoritmos de ordenação

```cpp
void swap(Circulo v[], int p1, int p2){
    Circulo temp;
    temp = v[p1];
    v[p1] = v[p2];
    v[p2] = temp;
}
```
---
## Ordenar Círculos
Modificamos qualquer um dos algoritmos de ordenação

```cpp
void ordenar(Circulo v[], int n){
    int i, j, min;
    for(i = 1 ; i < n ; i++){
        for(j = i; j >0 ; j--){
            if(v[j].raio > v[j-1].raio)
                swap(v,j,j-1);
            else 
                break;
        }
    }
}
```

