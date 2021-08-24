## Funções Recursivas
### Exemplos
---
### Parênteses 
Faça uma função recursiva que receba como parâmetro um número 
inteiro positivo n e imprima na tela uma sequência de 
parêntesis. Por exemplo, para n=4, o resultado deveria ser:

``` 
(((())))
``` 

---
### Parênteses 

*Caso base:* Se n=0, não imprimimos nada

*Caso recursivo:* (n>0)
 1. Imprimir `(` 
 2. Chamar recursivamente a função com n-1
 3. Imprimir `)` 

---
### Parênteses 
```cpp
void func(int n){
    if (n==0) return;

    cout << "(" ;
    func(n-1);
    cout << ")" ;
}
``` 
---
### Desenho

Faça uma função recursiva que receba dois parâmetros inteiros n e m
tal que m <= n. 

Para m=3 e n=5, a sua função deve imprimir a figura como a seguir:

``` 
***
****
*****
*****
****
***
``` 

---
### Desenho

*caso base:* m > n (e não imprimimos nada)

*caso recursivo:* 

1. Imprimir uma linha com m asteriscos
2. Chamar recursivamente a função com m+1
3. Imprimir uma linha com m asteriscos

---
### Desenho

```cpp
void func(int m,int n){
    if (m>n) return;

    printn(m);
    cout << endl;
    func(m+1,n);
    printn(m);
    cout << endl;
}

```

--- 
### Conjectura de Collatz

Considere as seguintes operações em um inteiro positivo n:

 - se n _for par_, divida-o por 2
 - se n _for ímpar_, multiplique-o por 3 e some 1

   
 A conjectura de Collatz diz que, para qualquer  n>0,  quando as regras
 acima são aplicadas, eventualmente sempre chegaremos a 1. 

 Faça uma função recursiva que, dado um número n>0, imprima os valores
 calculados e retorne o número de passos para chegar a 1. 

---
### Conjectura de Collatz

*caso base:* n=1 (e terminamos)

*caso recursivo:*

1. Se n for par, chamar recursivamente com n*2
2. Se n for ímpar, chamar recursivamente com 3*n + 1

---
### Conjectura de Collatz

```cpp
int collatz(int n){
    cout << n << endl;
    if(n == 1)
        return 0;

    return 1 + collatz(n%2==0? n/2 : 3*n +1 );
}
```

---
### Desafio 

Escreva uma função recursiva que permita sair de um labirinto:
```
# S # # #   # . 
# . #   #   # . 
# . #   #   # . 
# . #   #   # . 
# . . . #   # . 
#   # . #   # . 
#   # . . . # . 
# # # # # . . .
```
