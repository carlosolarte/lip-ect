#include <iostream>
using namespace std;

void printn(int n){
    for (int i=1;i<=n;i++)
        cout << "*";
}

void func(int m,int n){
    if (m>n) return;
    printn(m);
    cout << endl;
    func(m+1,n);
    printn(m);
    cout << endl;
}

int main(){
    int n,m;
    cin >> m >> n;
    func(m,n);
}

