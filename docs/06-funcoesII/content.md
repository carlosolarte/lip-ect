### Parâmetros por valor e referência

---

### Objetivos

- Entender o conceito de __escopo__ das variáveis.
- Como devemos definir uma função para _retornar mais de um valor_ ?
- Podemos _modificar_ os valores dos parâmetros ?

---
### Escopo de variáveis

> O escopo de uma variável é o bloco de código onde esta variável é válida.

```cpp
int main(){
   int x ; // x está definida na main
}

int f(int z){
    // a variável x da main não existe aqui!
}
```
---
### Escopo de variáveis

> O escopo de uma variável é o bloco de código onde esta variável é válida.

```cpp
int main(){
   int x ; // x está definida na main
}

int f(int z){
    int x ; // diferente da variável x da main
}
```
---
### Escopo de variáveis

As variáveis podem ser declaradas em três lugares:

- _Variáveis locais_: declaradas dentro de uma função
- _Parâmetros formais_: parâmetros de funções
-_Variáveis globais_: declarada fora de todas as funções.

```cpp
void f(int x, double y){// x e y são parâmetros formais
 int a;
 float b;// a e b são variáveis locais

 ...
}
```

---
### Escopo de variáveis

```cpp
void f1();

int main (){
  int x=3;
  f1();
  cout << x; // 3 ou 5 ??
  return 0;
}

void f1(){
 int x=5;
}
```

---
### Escopo de variáveis

```cpp
void f1();
void f2(int x);

int main (){
  cout << x; // ERRO! x não existe na main.
  return 0;
}

void f1(){
 int x=5;
 cout << x; // variável local
}
void f2(int x){
 cout << x; // parâmetro
}
```

---
### Escopo de variáveis

```cpp

void f1();

int main (){
  int x = 3;
  f1();
  return 0;
}

void f1(){
  cout << x; // ERRO! x não existe na função f1
}
```

---
### Parâmetros de uma função

São variáveis __locais__ que são *inicializadas* pelos valores passados na
chamada da função:
- São visíveis apenas _dentro da função_: são _criadas_ na entrada e
  _destruídas_ na saída da função
- No momento da chamada de uma função, o número e o tipo dos parâmetros devem
  _corresponder_ à declaração da função

--- 
### Passagem de parâmetros

Em geral, pode-se passar parâmetros para funções de duas maneiras:

- _Por valor_: o _valor_ do argumento _é copiado_ para o parâmetro e as
  alterações feitas no parâmetro __não tem efeito__ sobre a variável usada na
  chamada da função.
- _Por referência_: o _endereço de uma variável_ é copiado para o
  parâmetro, portanto,  as mudanças feitas no parâmetro _afetam a variável
  usada_ na chamada da função

---
### Parâmetros por Valor

```cpp
void inc(int x);

int main(void){
 int i = 5;
 cout << "i: " << i << endl; // 5.
 inc(i);
 cout << "i: " << i << endl; // 5 ou 6 ??
 return 0;
}

void inc(int x){
  x++;
}
```

---
### Parâmetros por Valor

```cpp

int quadrado(int x);
int main(){
 int n=10;
 cout << quadrado(n) ; // resultado ?
 cout << n; // resultado ?
 return 0;
}

int quadrado(int x){
 x = x * x;
 return x;
}
```

---
### Qual é o problema?

```cpp
void trocar (int x, int y);

int main (){
  int a=5,b=7;
  cout << "a=" << a << " b=" << b << endl;
  trocar(a,b);
  cout << "a=" << a << " b=" << b << endl;
  return 0;
}

void trocar (int x, int y){
  int temp = x;
  x = y;
  y = temp;
}
```
Solução: Parâmetros por __referência__!

---
### Parâmetros por Referência

Video Passagem de parâmetros por valor e por referência (15.15)

---
<iframe width="1085" height="610" src="https://www.youtube.com/embed/pp6iWfYM2mg?list=PLLjLO9s7KS4UBrOBelz0GyfiFn4CSqquH" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

---

### Parâmetros por Referência

```cpp
void trocar (int &x, int &y);

int main (){
  int a=5,b=7;
  cout << "a=" << a << " b=" << b << endl;
  trocar(a,b);
  cout << "a=" << a << " b=" << b << endl;
  return 0;
}

void trocar (int &x, int &y){
  int temp = x;
  x = y;
  y = temp;
}
```
As valores de `a` e `b` são modificados!


---

### Parâmetros por Referência

O _endereço de uma variável_ é copiado: __mudanças no parâmetro afetam a
variável usada__

- Se a função _NÃO deve modificar_ o valor do parâmetro, melhor utilizar parâmetros _por valor_.
- Se precisar de _retornar mais de um valor_, deve utilizar parâmetros por __referência__.

---

### Parâmetros por Referência
#### Retornando vários valores

Video Exercício Resolvido (parâmetros de entrada e saída) (12.16)

---
<iframe width="1085" height="610" src="https://www.youtube.com/embed/ymellvbj8Cc?list=PLLjLO9s7KS4UBrOBelz0GyfiFn4CSqquH" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

---

### Exemplo

Faça uma função que, dado um número de segundos _S_,  calule a quantidade
correspondente em horas, minutos e segundos. 

#### Protótipo da função
- Entradas?
- Saídas?

---

### Exemplo

#### Protótipo da função

```cppp
void time(int S, int &seg, int&min, int &hora);
```
- `S`: parâmetro de __entrada__ (valor)
- 3 parâmetros de __saída__ (referência)
---

### Exemplo

#### Definição da Função

```cpp
void time(int S, int &seg, int&min, int &hora){
    seg = S % 60;
    hora = S/3600;
    min = (S - hora*3600)/60;
}

```
- Parâmetros por referência
- Atribuir dentro da função significa __modificar os valores dos parâmetros__
  utilizados na chamada da função. 

---

### Exemplo

#### Utilizando a função

```cpp
int main(){
    int s,m,h;
    time(10000,s,m,h);
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
```
- O primeiro parâmetro é a entrada
- O resultado será armazenado nas variáveis `s`, `m` e `h` da `main`.

---
### Exemplo

Agora vamos implementar uma função para imprimir em formato hh:mm:ss

#### Protótipo
```cpp
void printTime(int S);
```

---
### Exemplo

#### Definição
```cpp
void printTime(int S){
    int s,m,h;
    time(S,s,m,h);
    cout << (h <= 9 ? "0" : "") << h << ":" <<
            (m <= 9 ? "0" : "") << m << ":" <<
            (s <= 9 ? "0" : "") << s << endl;
}
```
- O resultado será armazenado nas __variáveis locais__ da função `printTime`
--- 
### Exemplo
Utilizar a função

```cpp
int main(){
 // 02:46:40
 printTime(10000); 
 // 00:00:00
 printTime(0);  
 // 00:20:01
 printTime(1201);  
 return 0;
}

```
---
### Teste!
<https://multiprova.ufrn.br/>

