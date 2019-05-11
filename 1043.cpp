#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(1);
    float a, b, c, perimetro, area;

    cin >> a >> b >> c;

    if((b-c < a < b+c) && (a-c < b < a+c) && (a-b < c < a+b)){
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        area = ((a+b)*c)/2;
        cout << "Area = " << area << endl;
      }
      return 0;
}

