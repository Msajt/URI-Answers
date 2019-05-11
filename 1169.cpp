#include <iostream>
#include <math.h>
using namespace std;

void peso_graos(int a);

int main(){
    int n, casas, i;
    cin >> n;
    if(n >= 1 && n <= 100){ // n precisa estar entre 1 e 100
        for(i=0; i<n; i++){
            cin >> casas;
            if(casas >=1 && casas <= 64){ // o numero de casas deve ser de 1 a 64, pois sao o numero de quadrados no tabuleiro
                peso_graos(casas);
            }
        }
    }
    return 0;
}

void peso_graos(int a){
    cout <<((long long)(pow(2,a)/12000))  << " kg" << endl;
}


