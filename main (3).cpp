#include <iostream>
#define N 10
using namespace std;


/* 1) não acontece nada pois o programa só ira ver o nome do primeiro cliente sempre. Por so ver o nome do clinte uma vez o programa so lerá o primeiro nome array 
int main(){
    string cliente[N] = {"Robson"};
    cout << cliente[0];
    
    return 0;
}*/

/*2) 

int main(){
    string cliente[N];
    for(int i = 0; i<N ; i++){
        cin >> cliente[i];
    }
    
    return 0;
}

*/

/*3) a complexidade dele é linear.

int main(){
    int i=0;
    string cliente[N] = {"1", "2", "3", "4", "5", "Cliente_X", "7", "8","9","10"};
    for(i=0; i<N ; i++){
        if(cliente[i] == "Cliente_X"){
            cout << "Cliente X está na posição: " << i + 1;
            cout << endl;
        }
        else{
            cout << "Cliente X não está na posição: " << i + 1;
            cout << endl;
        }
    }
    return 0;
}


//4)

int main(){
    string palavras[N];
    for(int i = (N/2); i<N ; i++){
        
    }
    return 0;
}








//5)


int main(){
    string pessoas[N] = {"Eduardo","Robson","Diogo","Edson","Julia"};
    int numerodeconexoes = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N ;j++){
            if(pessoas[i] == pessoas[j]){
                
            }
            else{
                cout << pessoas[i] << " faz par com a(o) " <<pessoas[j] << "\n";
                numerodeconexoes++;
            }
        }
    }
    cout << numerodeconexoes;
    return 0;
}
*/

/* 6) 
R: O(log n) = 1, 

7)


10)
R: A amortização na complexidade é uma técnica usada na análise de algoritmos para determinar o custo médio de uma sequência de operações, em vez de focar no custo do pior caso de uma única operação. A ideia é que, embora uma operação possa ser muito cara em um caso específico, ela ocorre com pouca frequência, enquanto a maioria das outras operações é muito mais barata.

