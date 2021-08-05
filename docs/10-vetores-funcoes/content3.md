## Vetores e Matrizes
### Revisão e exercícios

---
### Quadrado Latino

Dizemos que uma matriz quadrada A de dimenssão $n \times n$ é um __quadrado latino__
de ordem $n$  se em cada linha e em cada coluna aparecem todos os inteiros  1,2,3,
.. n. Por exemplo, a matriz

```cpp
1  2  3  4
2  3  4  1
4  1  2  3 
3  4  1  2
```

é um quadrado latino de ordem 4.

Implemente  uma função que,  dada uma matriz  quadrada $A$ de dimensão $n \times n$
( $n  \leq 100$) determine (retornando true/false)  se $A$ é um quadrado latino de 
ordem $n$. 

---
### Quadrado Latino
A ideia: _Utilizar um vetor para contar os dígitos:_

Por exemplo: 
```
contador: [1,2,2,1,2,4,0,0,0,0]
                     ^ 4 vezes o número 5

vetor: [1,4,5,0,5,3,2,5,1,2,4,5]

```
---
### Quadrado Latino
A ideia: _Utilizar um vetor para contar os dígitos:_

```cpp
                 *
contador = [ 0 , 0 , 0 , 0 , 0 , ... ]
             ^   ^   ^   ^   ^
             0   1   2   3   4

vetor = [ 1 , 3 , 2 , 1 ,...]
          ^
          i

contador[v[i]]++;
```

---
### Quadrado Latino

A ideia: Utilizar um vetor para contar os dígitos:

```cpp
                         *
contador = [ 0 , 1 , 0 , 0 , 0 , ... ]
             ^   ^   ^   ^   ^
             0   1   2   3   4

vetor = [ 1 , 3 , 2 , 1 ,...]
              ^
              i

contador[v[i]]++;
```

---
### Quadrado Latino

A ideia: Utilizar um vetor para contar os dígitos:

```cpp
                     *
contador = [ 0 , 1 , 0 , 1 , 0 , ... ]
             ^   ^   ^   ^   ^
             0   1   2   3   4

vetor = [ 1 , 3 , 2 , 1 ,...]
                  ^
                  i

contador[v[i]]++;
```
---
### Quadrado Latino

A ideia: Utilizar um vetor para contar os dígitos:

```cpp
                 *
contador = [ 0 , 1 , 1 , 1 , 0 , ... ]
             ^   ^   ^   ^   ^
             0   1   2   3   4

vetor = [ 1 , 3 , 2 , 1 ,...]
                      ^
                      i

contador[v[i]]++;
```
---
### Quadrado Latino

A ideia: Utilizar um vetor para contar os dígitos:

```cpp
                 *
contador = [ 0 , 2 , 1 , 1 , 0 , ... ]
             ^   ^   ^   ^   ^
             0   1   2   3   4

vetor = [ 1 , 3 , 2 , 1 ,...]
                         ^
                         i

contador[v[i]]++;
```

---
### Quadrado Latino

Função para verificar _uma linha_ (parâmetro `linha`) utilizando a ideia anterior:
```cpp
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
```

---
### Quadrado Latino
A função similar para as colunas
```cpp
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
```
---
### Quadrado Latino

Utilizando as duas funções anteriores, resolvemos o problema:
```cpp
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
```

---
### Quadrado Latino

Exemplo de main
```cpp
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
```
---
### Frase Palíndromo
Vamos determinar se uma frase é um palíndromo:

> Fica facil escrever palindromos com nomes proprios, como fazem Mezaf Omocso, Irporp Semon, Mocs Omord, Nila Prevercs e Lica Facif

---
### Frase Palíndromo

1. Vamos escrever uma função para eliminar os espaços e sinais ortográficos. 
2. Também, vamos converter todas as letras para minúscula

---
### Frase Palíndromo
```cpp
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
```

---
### Frase Palíndromo
A função que determina se uma palavra é palíndromo
```cpp
bool palindromo(char s[]){
    int n=strlen(s);
    for (int i =0; i<= n/2; i++)
        if(s[i]!= s[n-1-i])
            return false;
    return true;
}
```

---
### Frase Palíndromo
A função para determinar se uma frase é palíndromo
```cpp
bool frasepalindromo(char s[]){
    char aux[TAM];
    remover(s, aux);
    return palindromo(aux);
}
```

---
### Teste
<https://multiprova.ufrn.br/>

