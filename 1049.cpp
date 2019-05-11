#include <iostream>
using namespace std;

int main(){
    char osso[15], especie[15], comida[15];

    cin >> osso;
    cin >> especie;
    cin >> comida;

    if (osso == "vertebrado"){
        if(especie == "ave"){
            if (comida == "carnivoro"){
                cout << "aguia" << endl;
            } else {
                if (comida == "onivoro"){
                    cout << "pomba" << endl;
                }
              }
        } else {
            if (especie == "mamifero"){
                if (comida == "onivoro"){
                    cout << "homem" << endl;
                } else {
                    if (comida == "herbivoro"){
                        cout << "vaca" << endl;
                    }
                  }
            }
          }
    }
}


