#include <iostream>
#include <cmath>
#define TAM 100
using namespace std;

struct Ponto {
    double x, y;
};

struct Circulo{
    Ponto c;
    double raio;
};

void swap(Circulo v[], int p1, int p2){
    Circulo temp;
    temp = v[p1];
    v[p1] = v[p2];
    v[p2] = temp;
}

void ordenar(Circulo v[], int n){
    int i, j, min;
    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(v[j].raio> v[j-1].raio)
                swap(v,j,j-1);
            else break;
        }
    }
}

void print(Circulo c){
    cout << "( x : " << c.c.x << " , y : "
        << c.c.y << " , r : " << c.raio << " )";
}



int main(){
    int n;
    Circulo v[TAM];
    cin>>n;

    for(int i=0;i<n;i++){
        cin >> v[i].c.x;
        cin >> v[i].c.y;
        cin >> v[i].raio;
    }

    ordenar(v,n);
    for(int i=0;i<n;i++){
        print(v[i]);
        cout << " ";
    }
    return 0;

}

