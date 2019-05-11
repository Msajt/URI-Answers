#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, c, maiorAB, maiorABC;
    cin >> a;
    cin >> b;
    cin >> c;

    maiorAB = (a+b+abs(a-b))/2;
    maiorABC = (maiorAB+c+abs(maiorAB-c))/2;

    cout << maiorABC << " eh o maior" << endl;
    return 0;
}
