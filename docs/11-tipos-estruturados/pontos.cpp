
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct Ponto{
    double x, y;
};
struct Linha{
    Ponto p1, p2;
};
struct Triangulo{
    Ponto p1, p2, p3;
};

struct Quadrilatero{
    Ponto vertices[4];
};

void print_ponto(Ponto p);
void print_quadrilatero(Quadrilatero q);
void ler_ponto(Ponto &p);
double dist (Ponto p1, Ponto p2) ;
float distancia(Ponto vp[], int n);
void ler_quadrilatero(Quadrilatero &q);


int main(){
    Ponto vp = {4,11}; // Inicializando 
    Linha vl = { {2,7}, {10,9}} ;
    Triangulo vt; // Declarar e depois atribuir
    vt.p1.x = 2; vt.p1.y = 0;
    vt.p2.x = 6; vt.p2.y = 5;
    vt.p3.x = 8; vt.p3.y = 3;

    Quadrilatero q1 = { { {4,1}, {4,3}, {10,3}, {10,1}} };
    Quadrilatero q2;
    q2.vertices[0].x = 4 ; q2.vertices[0].y = 1;
    q2.vertices[1].x = 4 ; q2.vertices[1].y = 3;
    q2.vertices[2].x = 10 ; q2.vertices[2].y = 3;
    q2.vertices[3].x = 10 ; q2.vertices[3].y = 1;

    print_quadrilatero(q2);
    return 0;

}
void print_ponto(Ponto p){ 
    cout << "(" << p.x << "," << p.y << ")"; 
}

void ler_ponto(Ponto &p){
 cin >> p.x >> p.y;
}
void print_quadrilatero(Quadrilatero q){
    int i;
    for(i=0;i < 4;i++){
        print_ponto(q.vertices[i]) ;
        cout << endl ;
    }
}

double dist (Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) +
                pow(p2.y - p1.y, 2));
}

float distancia(Ponto vp[], int n){
    float soma=0;
    for(int i = 0 ; i < n - 1 ; i++){
        soma += dist(vp[i], vp[i+1]);
    }
    return soma;
}

void ler_quadrilatero(Quadrilatero &q){
    for(int i=0; i < 4 ; i++)
        ler_ponto(q.vertices[i]);
}
