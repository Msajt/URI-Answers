#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if (a < b < c){
        cout << a << "\n"
             << b << "\n"
             << c << "\n"
             << "\n"
             << a << "\n"
             << b << "\n"
             << c << endl;
    } else {
        if (b < c < a) {
        cout << b << "\n"
             << c << "\n"
             << a << "\n"
             << "\n"
             << a << "\n"
             << b << "\n"
             << c << endl;
        } else {
            if (c < a < b){
                cout << c << "\n"
                     << a << "\n"
                     << b << "\n"
                     << "\n"
                     << a << "\n"
                     << b << "\n"
                     << c << endl;
            }
          }
      }
}
