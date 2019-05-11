#include <iostream>
using namespace std;

void soma_natural(int a, int b);

int main(){
    int x, y;
    cin >> x >> y;
    if(x >= 1 && y>=1 && x<=long(10000000000) && y <= long(10000000000)){
        soma_natural(x, y);
    }

    return 0;
}

void soma_natural(int a, int b){
    int i, x, y, soma = 0;

    for(i=a; i<=b; i++){
        soma = long(soma + i);
    }

    cout << soma;
}
