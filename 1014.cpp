#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    float y;
    cout << fixed << setprecision(3);

    cin >> x;
    cin >> y;

    y= x/y;

    cout << y << " km/l" << endl;
    return 0;
}
