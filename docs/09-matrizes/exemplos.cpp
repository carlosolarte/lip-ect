//==========================
//==========================
#include< iostream>
#define TAM 30

using namespace std;

int main(){
    int M[TAM][TAM];
    int i,j,n;
    cin >> n;

    // Matriz identidade
    for(i=0; i < n ; i++){
        for(j=0; j < n ; j++){
            if (i == j)
                M[i][j] = 1;
            else
                M[i][j] = 0;
        }
    }

    // Imprimir a Matriz
    for(i=0; i < n ; i++){
        for(j=0; j < n ; j++){
                cout << M[i][j] << " ";
        }
        cout << endl ;
    }

    return 0;
}
//==========================
//==========================
#include< iostream>
#define TAM 30

using namespace std;

int main(){
    int M[TAM][TAM] = {}; // 0,0,0...0
    int i,j,n;
    cin >> n;

    // Matriz identidade
    for(i=0; i < n ; i++){
        M[i][i] = 1;
    }

    // Imprimir a Matriz
    for(i=0; i < n ; i++){
        for(j=0; j < n ; j++){
                cout << M[i][j] << " ";
        }
        cout << endl ;
    }

    return 0;
}

//==========================
//==========================
#include < iostream>
#define TAM 30
using namespace std;

int main(){
    int M[TAM][TAM], MT[TAM][TAM];
    int i,j,n,m;

    cin >> n >> m;
    // Ler os valores da matriz
    for(i=0 ; i < n ; i ++){
        for(j=0 ; j < m ; j++){
            cin >> M[i][j];
        }
    }

    // Calcular a matriz transposta
    for(i=0 ; i < n ; i ++){
        for(j=0 ; j < m ; j++){
            MT[j][i] = M[i][j];
        }
    }

    // Imprimir MT
    for(i=0 ; i < m ; i ++){ // Número de linhas = m
        for(j=0 ; j < n ; j++){ // Número de colunas = n
            cout << MT[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}

// ==========================
//==========================
#include< iostream>
#define MAX 30

using namespace std;

int main()
{
    int n, m, x, A[MAX][MAX];
    bool achou = false;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
    }
    cin >> x;

    // Buscar o elemento
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(x == A[i][j])
            	achou = true;
        }
    }
    if (achou)
    	cout << "Matriz tem elemento " << x << endl;
    else
    	cout << "Matriz não tem elemento " << x << endl;

    return 0;
}

//==========================
//==========================
#include< iostream>
#define MAX 30

using namespace std;

int main()
{
    int n, m, x, A[MAX][MAX];
    bool achou = false;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> A[i][j];
    }
    cin >> x;

    // Buscar o elemento
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(x == A[i][j]){
            	achou = true;
                break;
            }
        }
        if(achou)
            break;
    }
    if (achou)
    	cout << "Matriz tem elemento " << x << endl;
    else
    	cout << "Matriz não tem elemento " << x << endl;

    return 0;
}
