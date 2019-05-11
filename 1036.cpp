#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout << fixed << setprecision(5);
    double a, b, c, delta, raiz1, raiz2;
    cin >> a >> b >> c;

    delta = (pow(b,2))-(4*a*c);
    raiz1 = (-b + (sqrt(delta)))/(2*a);
    raiz2 = (-b - (sqrt(delta)))/(2*a);

    if (a != 0 && delta > 0){
        cout << "R1 = " << raiz1 << "\n"
             << "R2 = " << raiz2 << endl;
    } else {
            cout << "Impossivel calcular" << endl;
    }
    return 0;
}
