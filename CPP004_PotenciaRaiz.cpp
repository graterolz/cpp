//CPP004 - Potencia y raíz de un número entero.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cout << "Ingrese valor de A: ";
    cin >> a;
    cout << "Ingrese valor de B: ";
    cin >> b;

    //Potencia
    float potencia = pow(a,b);
    cout << "La potencia es: " << potencia << endl;

    if (a>-1){
        //Raiz
        float raiz = pow (a, (float) 1 / b);
        cout << "La raiz es: " << raiz << endl;
    }else{
        cout << "El valor de A debe ser positivo.";
    }
    cin.get();
    return 0;
}
