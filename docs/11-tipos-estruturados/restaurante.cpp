#include <iostream>
#define TAM 100
using namespace std;


enum EQualidade {Excelente, Bom , Regular};
enum ETipo {Internacional, Regional, Carnes, Vegetariano};

struct Restaurante {
	char nome[50];
    char endereco[100];
    double preco;
    EQualidade qualidade;
    ETipo tipo;
};
void ler(Restaurante &R);
void imprimir(Restaurante R);
Restaurante maisBarato(Restaurante vr[], int n);
int RExcelente(Restaurante vr[], int n, Restaurante resultado[]);

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

    // Restaurantes excelentes
    Restaurante vrex[TAM];
    int nexc = RExcelente(vr,n, vrex);
    cout << "Lista dos restaurantes avaliados como Excelente: " << endl ;
    for (int i = 0 ; i < nexc ; i++){
        imprimir(vrex[i]);
        cout << "****" << endl ;
    }
	return 0;
}


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
int RExcelente(Restaurante vr[], int n, Restaurante resultado[]){
    int pos = 0 ;

    for(int  i=0 ; i < n ; i++){
        if (vr[i].qualidade == Excelente)
            resultado[pos++] = vr[i];
    }
    return pos;
}
