#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(1);
    double A, B, C, MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA = ((A*0.2)+(B*0.3)+(C*0.5));

    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}
