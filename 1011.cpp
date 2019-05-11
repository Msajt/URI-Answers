#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double R, pi = 3.14159, volume;

    cin >> R;
    volume = (4/3.0)*pi*(pow(R,3));

    cout << "VOLUME = " << volume << endl;
    return 0;
}
