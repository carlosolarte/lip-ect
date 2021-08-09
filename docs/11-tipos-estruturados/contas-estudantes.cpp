
#include <iostream>
#include <cstring>
#define TAM 100
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
} ;

struct contaBancaria{
    char Nome[15];
    char ContaNo[10];
    double saldo;
    Data abertura;
};

struct Estudante{
    char Nome[15];
    int Id;
    char Curso[20];
    char sexo;
};



int main(){
    Estudante E;
    Estudante Turma[TAM];

    cout << "Nome: " ;
    cin.getline(E.Nome,15) ;
    cout << "Id: " ;
    cin >> E.Id;
    cin.get();
    cout << "Curso: " ;
    cin.getline( E.Curso,20);
    cout << "Sexo: " ;
    cin >> E.sexo;

    if (E.sexo == 'M')
        cout << "Sr. " << E.Nome;
    else
        cout << "Sra. " << E.Nome;

    // = funciona com tipos estruturados!
    Turma[0] = E ;
    cout << "Utilizando um vetor: " << endl ;
    cout << Turma[0].Nome << endl ;

    return 0;


}
