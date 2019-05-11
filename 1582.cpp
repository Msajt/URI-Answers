#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int mdc(int a, int b, int c);
bool teorema(int a, int b, int c);
void tipo_triangulo(int a, int b, int c);

int main(){
    int x, y, z;

    while(cin >> x >> y >> z){
        if ((x || y || z) >= 1 && (x || y || z) <= 100000){
            tipo_triangulo(x, y, z);
        }
    }
    return 0;
}

void tipo_triangulo(int a, int b, int c){
    int result_mdc;
    bool retorna_teorema;
    result_mdc = mdc(a, b, c);
    retorna_teorema = teorema(a, b, c);


    if(result_mdc != 1 && retorna_teorema == false){
        cout << "tripla\n";
    } else {
        if(retorna_teorema == true){
            cout << "tripla pitagorica\n";
        } else {
            if(result_mdc == 1){
                cout << "tripla pitagorica primitiva\n";
            }
        }
    }
}

int mdc(int a, int b, int c){
    int maiorAB, maiorABC, i, max_div_com = 1;

    maiorAB = ((a+b)+abs(a-b))/2;
    maiorABC = ((maiorAB+c)+abs(maiorAB-c))/2;

    for(i=2; i<=maiorABC; i++){
        while(a%2 == 0 && b%2 == 0 && c%2 == 0){
            a = a/i;
            b = b/i;
            c = c/i;
            max_div_com*= i;
        }
    }
    return max_div_com;
}

bool teorema(int a, int b, int c){
    int x, y, z;
    bool total_teorema;

    if(a>b){
        if(b>c){
            x = a;
            y = b;
            z = c;
        } else {
            if(a>c){
                x = a;
                y = c;
                z = b;
            } else {
                    x = c;
                    y = a;
                    b = b;
              }
          }
    } else {
        if(b>c){
            if(a>c){
                x = b;
                y = a;
                z = c;
            } else {
                    x = b;
                    y = c;
                    z = a;
              }
        } else {
            x = c;
            y = b;
            z = a;
          }
      }

      if( (pow(x,2) == (pow(y,2) + pow(z,2))) ){
        total_teorema = true;
      } else {
        total_teorema = false;
      }

      return total_teorema;
}
