#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(4);

    double area, pi= 3.14159, raio;
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << "A=" << area << endl;
    return 0;
}
