//CPP007 - Promedio de N cantidad de números enteros.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Numeros a promediar: ";
    cin >> n;

    if(n<0){
        n = (n*-1);
    }

    int numeros[n];
    float promedio = 0;

    for (int i=0;i<n;i++){
        cout << "Ingrese numero " <<(i+1) << ": ";
        cin >> numeros[i];
        promedio = promedio + numeros[i];
    }

    promedio = promedio / n;
	cout << "El promedio es: " << promedio;

	cin.get();
	return 0;
}
