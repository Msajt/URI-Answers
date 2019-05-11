#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double A, B, C, pi= 3.14159,
           triangulo, circulo, trapezio, quadrado, retangulo;

    cin >> A;
    cin >> B;
    cin >> C;

    triangulo = (A*C)/2;
    circulo = pi * pow(C,2);
    trapezio = ((A+B)*C)/2;
    quadrado = B * B;
    retangulo = A * B;

    cout << "TRIANGULO: " << triangulo << "\n"
         << "CIRCULO: " << circulo << "\n"
         << "TRAPEZIO: " << trapezio << "\n"
         << "QUADRADO: " << quadrado << "\n"
         << "RETANGULO: " << retangulo << endl;
         return 0;
}
