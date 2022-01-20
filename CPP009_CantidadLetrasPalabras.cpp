//CPP009 - Cantidad de letras y palabras en cadena de caracteres.
#include <iostream>
using namespace std;
int main(){
	cout << "Ingresa cadena de caracteres: ";
	string cadena;
	getline(cin, cadena);

	int cantidadPalabras = 1;
	int cantidadLetras = cadena.length();
	char letra;

	for (int i=0;i<cantidadLetras;i++){
		letra = cadena.at(i);
		if (letra == ' '){
			cantidadPalabras++;
		}
		if (letra == '\0'){
			cantidadPalabras++;
		}
	}

	if (cantidadLetras == 0){
		cantidadPalabras = 0;
	}
	cout << "Cadena ingresada: " << cadena << endl;
    cout << "Cantidad de letras: " << cantidadLetras << endl;
	cout << "Cantidad de palabras: " << cantidadPalabras << endl;

	cin.get();
	return 0;
}
