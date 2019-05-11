#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(1);
    double n1, n2, n3, n4, exame, media, media_exame;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2+n2*3+n3*4+n4*1)/10;

    if (media >= 7.0){
        cout << "Media: " << media << "\n"
             << "Aluno aprovado." << endl;
    } else {
        if (media >= 5 && media < 7){
            cin >> exame;
            media_exame = (media+exame)/2;
            if (media >= 5){
                cout << "Media: " << media << "\n"
                     << "Aluno em exame.\n"
                     << "Nota do exame: " << exame << "\n"
                     << "Aluno aprovado.\n"
                     << "Media final: " << media_exame << endl;
            } else {
                cout << "Media: " << media << "\n"
                     << "Aluno em exame.\n"
                     << "Nota do exame: " << exame << "\n"
                     << "Aluno reprovado.\n"
                     << "Media final: " << media_exame << endl;
              }
        } else {
            cout << "Media: " << media << "\n"
                 << "Aluno reprovado." << endl;
          }
      }

    return 0;
}
