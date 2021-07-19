///////////////////////////
// 1
// ///////////////////////

#include <iostream>
#define MAX_LENGTH 50
using namespace std;

int main(void){
    char str[MAX_LENGTH];

    cout << "Nome: " ;
    // cin vs cin.getline
    cin.getline(str, MAX_LENGTH);
    cout << str << endl;
    return 0;
}


///////////////////////////
// 2
// ///////////////////////
#include <iostream>
	
#define TAM 50

using namespace std;
	
int main(){
    int i;
    char str1[TAM];
    char str2[TAM];
    bool iguais = true; // Determina se as strings são iguais ou não
	
 
	
    // Leer as duas strings
	
    cin.getline(str1,TAM);
    cin.getline(str2,TAM);
    i = 0;
	
    // Condição de parada: as 2 strings terminaram
	
    while(str1[i] !=0 || str2[i] != 0){
        // Se os caracteres são diferentes, as 2 strings são diferentes
	
        if(str1[i] != str2[i]){
            iguais = false;
            break;
        }
        i++;
	
    }
	
    if(iguais)
        cout << "as duas strings são iguais" << endl ;
    else
        cout << "as duas strings são diferentes" << endl ;

    return 0;
}

///////////////////////////
// 3
// ///////////////////////
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    cin.getline(str, 100);

    for(int i=0; i< strlen(str);i++)
        str[i] = toupper(str[i]);

    cout << str << endl ;
    return 0;
}
