//CPP003 - Multiplicación, división y residuo de dos números enteros.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Ingrese valor de A: ";
    cin >> a;
    cout << "Ingrese valor de B: ";
    cin >> b;

    //Multiplicacion
    int multiplicacion = a * b;
    cout << "La multiplicacion es: " << multiplicacion << endl;

    if (b!=0){
        //Division
        float division = a / b;
        int residuo = a % b;
        cout << "La division es: " << division << endl;
        cout << "El residuo es: " << residuo << endl;
    }else{
        cout << "El divisor no puede ser 0." << endl;
    }
    cin.get();
    return 0;
}
