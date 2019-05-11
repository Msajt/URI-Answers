#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout << fixed << setprecision(4);
    double x1, y1, x2, y2, result;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    result = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    cout << result << endl;
    return 0;
}

