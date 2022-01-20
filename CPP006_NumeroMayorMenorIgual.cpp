//CPP006 - Número entero mayor, menor o igual.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Ingrese valor de A: ";
    cin >> a;
    cout << "Ingrese valor de B: ";
    cin >> b;
    if(a>b){
       cout << "Es mayor el valor de A: " << a;
    }
    else if (a<b){
       cout << "Es mayor el valor de B: " << b;
    }
    else{
       cout << "Son iguales ambos numeros.";
    }
    cin.get();
    return 0;
}