### Aula 03

---
### Exemplo Restaurante
Crie uma estrutura para descrever restaurantes com as  informações a seguir:

 - Nome
 - Endereço
 - Preço Medio
 - Qualidade (pode ser Excelente, Bom ou Regular)
 - Tipo de Comida (pode escolher entre internacional, regional, carnes, vegetariano)

---
### Exemplo Restaurante

Definimos duas enumerações e uma estrutura: 

```
enum EQualidade {Excelente, Bom , Regular};
enum ETipo {Internacional, Regional, Carnes, Vegetariano};

struct Restaurante {
	char nome[50];
    char endereco[100];
    double preco;
    EQualidade qualidade;
    ETipo tipo;
};
```
---
### Exemplo Restaurante
Queremos determinar o restaurante mais barato. 

Definimos várias funções auxiliares:

```
void ler(Restaurante &R){
    int tipo, qualidade;
    cout << "Nome: " ;
    cin.getline(R.nome, 50);
    cout << "Endereço: " ;
    cin.getline(R.endereco, 100);
    cout << "Preço médio: " ;
    cin >> R.preco;
    cout << "Qualidade: (0) para Excelente, (1) para bom e (2) para regular";
    cin >> qualidade ;
    R.qualidade = (EQualidade) qualidade;
    cout << "Tipo: (0) para Internacional, (1) para Regional e (2) para Carnes e (3) para Vegetariano";
    cin >> tipo ;
    R.tipo = (ETipo) tipo;
    cin.get();
}
```

---
### Exemplo Restaurante
Queremos determinar o restaurante mais barato. 

Definimos várias funções auxiliares:
```
void imprimir(Restaurante R){
    cout <<" Nome: " << R.nome << endl;
    switch(R.tipo){
        case Internacional: cout << "Internacional" << endl; break;
        case Regional: cout << "Regional" << endl; break;
        case Carnes: cout << "Carnes" << endl; break;
        case Vegetariano: cout << "Vegetariano" << endl; break;
    }
    cout << " Preço médio:  " << R.preco << endl ;
}
```

---
### Exemplo Restaurante
Queremos determinar o restaurante mais barato. 

```
Restaurante maisBarato(Restaurante vr[], int n){
    double pbaixo = vr[0].preco;
    int menor = 0;

    for(int  i=1 ; i < n ; i++){
        if (pbaixo > vr[i].preco){
            pbaixo = vr[i].preco;
            menor = i;
        }
    }
    return vr[menor];
}
```
Note que a função _retorna um restaurante_

---
### Exemplo Restaurante
Queremos determinar o restaurante mais barato. 
```
int main () {
    int n;
    Restaurante vr[TAM];
    cout << "Número de restaurantes: " ;
    cin >> n;
    cin.get();

    for (int i = 0 ; i < n ; i++){
        ler(vr[i]);
    }

    Restaurante R = maisBarato(vr, n);
    cout << " O Restaurante mais barato é: " ;
    imprimir(R);

	return 0;
}
```

---
### Exemplo Restaurante
Como filtramos uma lista de restaurantes para selecionar só aqueles
avaliados como Excelente?

```
int RExcelente(Restaurante vr[], int n, Restaurante resultado[]){
    int pos = 0 ;

    for(int  i=0 ; i < n ; i++){
        if (vr[i].qualidade == Excelente)
            resultado[pos++] = vr[i];
    }
    return pos;
}
```
 -  A função _retorna_ o número de restaurantes Excelente
 - O parâmetro `resultado` é utilizado para armazenar o __resultado__

---
### Exemplo Restaurante
Como filtramos uma lista de restaurantes para selecionar só aqueles
avaliados como Excelente?

```cpp
int main () {
    int n;
    Restaurante vr[TAM], vrex[TAM];
    cout << "Número de restaurantes: " ;
    cin >> n;
    cin.get();

    for (int i = 0 ; i < n ; i++){
        ler(vr[i]);
    }

    int nexc = RExcelente(vr,n, vrex);
    cout << "Lista dos restaurantes avaliados como Excelente: " << endl ;
    for (int i = 0 ; i < nexc ; i++){
        imprimir(vrex[i]);
        cout << "****" << endl ;
    }
	return 0;
}
```

---
### Listas

Em qualquer sistema precisamos armazenar  vários dados do mesmo tipo. Por exemplo:
- Em uma turma temos 30 estudantes (ordenados alfabeticamente).
- Em um supermercado devemos armazenar a lista de todos os produtos disponíveis.
- Em uma empresa trabalham muitos funcionários.

> Quando utilizamos arrays, o número de elementos a serem armazenados é fixo.

---
### Listas
Considere um sistema    para armazenar os produtos de um supermercado. Neste
caso, precisamos de uma __Lista__ que é  uma  estrutura de dados que oferece
as seguintes operações:

- Adicionar e remover elementos (produtos neste caso)
- Retornar o número de produtos na lista.
- Retornar o elemento em uma posição dada.

---
### Listas

Temos várias opções para implementar a Lista:
- Implementar a lista utilizando _arranjos_.
- Implementar a lista utilizando _listas encadeadas_.

Algumas restrições:
 - A lista não permite remover elementos.
 - Os elementos são inseridos sempre no final da lista.
 - Vamos assumir que a lista tem uma capacidade máxima (fixa).

---
### Listas (Utilizando arranjos)

1. Definimos a estrutura _Produto_ 
2. Definimos a estrutura Lista (de produtos):
3. Implementamos algumas funções para manipular essas estruturas
---
### Listas 

Começamos com produto:
```cpp
struct Produto{
  int id;
  char nome[20];
};
```
---
### Listas 

Função para _criar_ um produto

```cpp
Produto novo(int id, char nome[]){
  Produto P;
  P.id = id;
  strcpy(P.nome, nome);
  return P;
}
```

---
### Listas 

Função para imprimir um produto
```cpp
void imprimir(Produto P){
  cout << P.id << " " << P.nome;
}
```

---
### Listas 
Definimos a lista:

```
struct Lista{
  // TAM= capacidade máxima
  Produto vp[TAM];
  // n=número de elementos atualmente armazenados
  int n;
};
```
---
### Listas 
Agora podemos definir várias funções para manipular a lista:

- Criar uma lista vazia
- Imprimir uma lista
- Testar se a lista está vazia
- Retornar o tamanho da lista
- Inserir um elemento no final da lista
- Retornar um elemento da lista

---

```cpp
// Cirar uma lista vazia
Lista novaLista(){ 
 Lista L;
 L.n = 0;
 return L;
}
```
--- 

```cpp
// Determinar o tamanho da lista
int tamanho(Lista L){ 
 return L.n;
}
```
--- 
 Imprimir

```cpp
// Imprimir os elementos da lista
void imprimir(Lista L){
 for(int i=0 ; i < L.n ; i++){
   imprimir(L.vp[i]);
   cout << endl ;
 }
}
```
--- 
Inserir

```
// Inserir um elemento no final da lista
bool inserir(Lista &L, Produto P){
  if (L.n == TAM)
    return false;
  L.vp[L.n] = P;
  L.n++;
  return true;
}
```
--- 
Retornar um elemento

```
// Assumimos que i>=0 e i < L.n
Produto elemento(Lista L, int i)
{
  return L.vp[i];
}
```
--- 
Um exemplo 
---
```
int main(){
  Lista L = novaLista() ;
  inserir(L, novo(1, "produto1"));
  inserir(L, novo(2, "produto2"));
  inserir(L, novo(3, "produto3"));
  inserir(L, novo(4, "produto4"));
  inserir(L, novo(5, "produto5"));
  imprimir(L);
  ...
 }
```
---
### Listas
Note que a lista já armazena seu próprio tamanho: 
```cpp
void imprimir(Lista L){
  for(int i=0;i < L.n ; i++){
  ...
```
---
### Teste

<https://multiprova.ufrn.br/>
