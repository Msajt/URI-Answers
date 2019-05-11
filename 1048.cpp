#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    float salario;

    cin >> salario;

    if (salario >= 0 && salario <= 400){
        cout << "Novo salario: " << salario + (salario*0.15) << "\n"
             << "Reajuste ganho: " << (salario + (salario*0.15)) - salario << "\n"
             << "Em percentual: 15 %" << endl;
    } else {
        if (salario > 400 && salario <= 800){
            cout << "Novo salario: " << salario + (salario*0.12) << "\n"
                 << "Reajuste ganho: " << (salario + (salario*0.12)) - salario << "\n"
                 << "Em percentual: 12 %" << endl;
        } else {
            if (salario > 800 && salario <= 1200){
                cout << "Novo salario: " << salario + (salario*0.10) << "\n"
                     << "Reajuste ganho: " << (salario + (salario*0.10)) - salario << "\n"
                     << "Em percentual: 10 %" << endl;
            } else {
                if (salario > 1200 && salario <= 2000){
                    cout << "Novo salario: " << salario + (salario*0.07) << "\n"
                         << "Reajuste ganho: " << (salario + (salario*0.07)) - salario << "\n"
                         << "Em percentual: 7 %" << endl;
                } else {
                    cout << "Novo salario: " << salario + (salario*0.04) << "\n"
                         << "Reajuste ganho: " << (salario + (salario*0.04)) - salario << "\n"
                         << "Em percentual: 4 %" << endl;
                  }
              }
          }
      }
      return 0;
}
