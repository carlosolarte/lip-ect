#include<iostream>
using namespace std;

int collatz(int n);

int main(){
    int n,p;
    cin>>n;
    p = collatz(n);
    cout<<"Números de passos: "<<p<<endl;
    return 0;
}


int collatz(int n){
    cout<<n<<endl;
    if(n==1)
        return 0;

    return 1 + collatz(n%2==0? n/2 : 3*n +1 );
}

