#include <iostream>
#include <cmath>
using namespace std;

double toRad(double A);
void rotar(double v[], double r[], double ang);
void printPonto(double []);


int main(){
    double v[2] = {4.3, 6.4};
    double res[2];
    rotar(v,res, 180);
    printPonto(v);
    printPonto(res);
    return 0;

}
// Graus em radianos
double toRad(double A){
    return (M_PI * A) / 180.0 ;
}
void rotar(double v[], double r[], double ang){
    double x,y;
    ang = toRad(ang);
    x = cos(ang) * v[0] + sin(ang)*v[1];
    y = -1 * sin(ang) * v[0] + cos(ang)*v[1];
    r[0] = x;
    r[1] = y;
}

void printPonto(double p[]){
    cout << "x: " << p[0] << " y: " << p[1] << endl;
}
