/**
 * Fibo
 */
#include <iostream>
using namespace std;

long fibo(int n){
    if (n<=2)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}

int main(void){
    int n=8;
    cout << "fib " << n << " = " << fibo(n) << endl;
    return 0;
}


