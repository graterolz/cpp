//CPP002 - Suma y resta de dos números enteros.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Ingrese valor de A: ";
    cin >> a;
    cout << "Ingrese valor de B: ";
    cin >> b;

    //Suma - Resta
    int suma = a + b;
    int resta = a - b;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cin.get();
    return 0;
}
