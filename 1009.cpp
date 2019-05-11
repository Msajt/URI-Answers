#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    char nome[20];
    double salario, vendas;
    cin >> nome;
    cin >> salario;
    cin >> vendas;

    salario = salario + (vendas*0.15);

    cout <<"TOTAL = R$ " << salario << endl;
    return 0;
}
