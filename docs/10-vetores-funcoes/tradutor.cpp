#include<iostream>
#include<cstring>
#define MAX 100
using namespace std;

bool estaPalavra(char M[][MAX], int n, char s[], int &idx);
bool traduzir(char DIC1[][MAX], char DIC2[][MAX], 
   int n, char pal1[], char pal2[]);


int main(){
 char portugues[][MAX] =
    { "tirar","pronto","pegar","cha","cartera","acordar",
    "combinar","bolso","cedo","exquisito"};

 char espanol[][MAX] = 
    {"sacar","listo","tomar","te","billetera","despertar",
    "acordar","cartera","pronto","raro"};

 char pal1[] = "bolso";
 char res[MAX];

 bool ok = traduzir(portugues, espanol, 10,pal1, res);
 if(ok)
     cout << "tradução: " << res << endl ;
 else
     cout << "palavra não encontrada" << endl;

 return 0;

}

// M[i] é uma string!
bool estaPalavra(char M[][MAX], int n, char s[], int &idx){
    for(int i=0;i < n ; i++){
        if(strcmp(M[i], s)==0){
            idx = i;
            return true;
        }
    }
    idx = -1; // Palavra não encontrada
    return false;
}

bool traduzir(char DIC1[][MAX], char DIC2[][MAX], 
   int n, char pal1[], char pal2[]){
 int pos;
 bool esta =estaPalavra(DIC1, n, pal1, pos);
 if (esta){
     strcpy(pal2, DIC2[pos]);
     return true;
 }
 else return false;
}
