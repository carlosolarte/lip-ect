#include <iostream>
#include <cstring>
#define TAM 100
using namespace std;

struct Pessoa{
    char cpf[12];
    int idade;
    char sexo;
    float salario;
    int nfilhos;
};

void ler(Pessoa &P); // ler as informações de uma pessoa
void imprimir(Pessoa P); // imprimir as informações de uma pessoa
float mediaSalarios(Pessoa vp[], int n); // calcular a média dos salários
float mediaFilhos(Pessoa vp[], int n); // calcular a média do número de filhos

int main(){
    Pessoa dados[TAM];
    int n;
    float msalario, mfilhos;

    cout << "Número de pessoas: ";
    cin >> n;

    // Ler os dados das n pessoas
    for(int i=0 ; i < n ; i++)
        ler(dados[i]);

    // calcular as médias
    msalario = mediaSalarios(dados, n);
    mfilhos = mediaFilhos(dados, n);

    cout << "Média Salário: " << msalario
        << " Média Número de Filhos: " << mfilhos << endl;


    // Imprimir as pessoas
    for(int i=0 ; i < n ; i++){
        if(dados[i].salario < msalario && dados[i].nfilhos > mfilhos)
            imprimir(dados[i]);
    }

    return 0;
}


void ler(Pessoa &P){
    cout << "CPF: " ;
    cin >> P.cpf;
    cout << "Idade: " ;
    cin >> P.idade ;
    cout << "Sexo: " ;
    cin >> P.sexo;
    cout << "Salario: " ;
    cin >> P.salario ;
    cout << "Número de filhos: ";
    cin >> P.nfilhos;
}

void imprimir(Pessoa P){
    cout<< "CPF: "<< P.cpf << " idade: " << P.idade
        << " sexo: " << P.sexo << " salário: " << P.salario
        << " número de filhos: " << P.nfilhos << endl ;
}

float mediaSalarios(Pessoa vp[], int n){
    float soma =0;
    for(int i=0 ; i < n ; i++){
        soma += vp[i].salario;
    }
    return soma / n ;
}

float mediaFilhos(Pessoa vp[], int n){
    int soma =0;
    for(int i=0 ; i < n ; i++){
        soma += vp[i].nfilhos;
    }
    return (float) soma / n ;
}


