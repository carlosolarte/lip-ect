#include <iostream>
using namespace std;

void func(int n){
    if (n==0) return;
    cout << "(" ;
    func(n-1);
    cout << ")" ;

}

int main(){
    int n;
    cin >> n;
    func(n);
    return 0;
}

