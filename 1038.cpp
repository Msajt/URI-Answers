#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    char codigo;
    int quantidade;

    cin >> codigo;
    cin >> quantidade;

    if(codigo == '1'){
        cout << "Total: R$ " << double(4.00*quantidade) << endl;
    } else {
        if(codigo == '2'){
            cout << "Total: R$ " << double(4.50*quantidade) << endl;
        } else {
            if(codigo == '3'){
                cout << "Total: R$ " << double(5.00*quantidade) << endl;
            } else {
                if(codigo == '4'){
                    cout << "Total: R$ " << double(2.00*quantidade) << endl;
                } else {
                    if(codigo == '5'){
                        cout << "Total: R$ " << double(1.50*quantidade) << endl;
                    }
                  }
              }
          }
      }

    return 0;
}
