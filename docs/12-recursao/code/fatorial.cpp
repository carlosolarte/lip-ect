/**
 * Fatorial recursivo
 */
#include <iostream>
using namespace std;

long fatorial(int n){
    if (n==0)
        return 1;

    return n* fatorial(n-1);
}

int main(void){
    int n=5;
    cout << n << "! = " << fatorial(n) << endl;
    return 0;
}

