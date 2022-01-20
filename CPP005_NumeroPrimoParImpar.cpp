//CPP005 - Número entero primo, par e impar.
#include <iostream>
using namespace std;
int main(){
    int n, contador = 0;
    cout << "Ingrese valor de N: ";
    cin >> n;

    //Convertir a positivo
    if(n<0){
        n = (n*-1);
    }

    //Primo
    for (int i = 1; i < (n+1); i++){
        if(n%i==0){
            contador++;
        }
    }

    if(contador==2){
        cout << "Es un numero primo." << endl;
    }else{
        cout << "No es un numero primo." << endl;
    }

    //Par o Impar
    if(n%2==0){
        cout << "Es un numero par." << endl;
    }else{
        cout << "Es un numero impar." << endl;
    }

    cin.get();
    return 0;
}
