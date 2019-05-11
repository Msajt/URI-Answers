#include <iostream>
using namespace std;

int main(){
    float n;
    int i, soma = 0;

    for(i=0; i<6; i++){
        if (n >= 0){
            soma = soma + 1;
        }
        cin >> n;
    }
    cout << soma << " valores positivos" << "\n";
    return 0;
}
