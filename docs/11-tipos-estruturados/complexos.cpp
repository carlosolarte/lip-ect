#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct Complexo{
    double real;
    double img;
};

void print(Complexo x);
double modulo(Complexo x);
bool iguais(Complexo x, Complexo y);
Complexo soma(Complexo x, Complexo y);
Complexo conjugado(Complexo x);

int main(){
    Complexo c,d;    //Variável tipo Complexo
    c.real = 3.4;  //Parte real
    c.img = 12.2;  // Parte imaginária 

    d.real = 2.2;
    d.img = 7.0;

    cout << "Iguais: " << iguais(c,d) << endl;
    print(c);
    print(conjugado(c));
    cout << modulo(d) << endl;
    print(conjugado(soma(c,d)));
    return 0;

}


void print(Complexo x){
    cout << x.real;
    if (x.img <0)
        cout << " - " << (-1 * x.img) ;
    else
        cout << " + " << x.img ;

    cout << "i" << endl ;

}

double modulo(Complexo x){
    return sqrt(pow(x.real,2.0) +
            pow(x.img,2.0));
}

bool iguais(Complexo x, Complexo y){
    if(x.real == y.real && x.img == y.img)
        return true;
    else
        return false;
}

Complexo soma(Complexo x, Complexo y){
    Complexo z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
}

Complexo conjugado(Complexo x){
    Complexo z;
    z.real = x.real;
    z.img = -1.0 * x.img;
    return z;
}
