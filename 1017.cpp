#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    int tempo, velocidade;
    double resultado;
    cin >> tempo;
    cin >> velocidade;

    resultado = velocidade*tempo;

    resultado = resultado/12;

    cout << resultado << endl;
    return 0;
}

