#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    int n, horas;
    float salario;

    cin >> n;
    cin >> horas;
    cin >> salario;

    salario = salario * horas;

    cout << "NUMBER = " << n << "\n"
         << "SALARY = U$ " << salario << endl;
    return 0;
}
