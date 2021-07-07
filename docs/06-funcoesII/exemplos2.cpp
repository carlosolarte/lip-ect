#include <iostream>
using namespace std;

int inverteX(int x, int &xi);
/*
   - x: parâmetro (valor) entrada
   - xi: parâmetro (*referência*) saída
   - int: tipo de retorno (-1, 0 ou 1)
   */

int main()
{
    int num, inv, comp;
    cin >> num;
    comp = inverteX(num,inv); // Chamar a função
    cout << "X = " << num << endl <<
        "X invertido = " << inv << endl;
    if(comp == -1)
        cout << "X é menor que X invertido";
    else if(comp == 0)
        cout << "X é igual que X invertido";
    else if(comp == 1)
        cout << "X é maior que X invertido";
    return 0;
}

int inverteX(int x, int &xi) {
    int xa = x, res;
    xi = 0; // Inicializar xi
    while(x > 0){ // calcular x invertido em xi
        res = x % 10;
        xi = xi*10 + res;
        x /= 10;
    }
    if(xa < xi) // retornar segundo o valor de xi
        return -1;
    else if(xa == xi)
        return 0;
    else
        return 1;
}

