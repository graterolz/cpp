//CPP008 - Cadena de texto en mayúscula y minúscula.
#include <iostream>
using namespace std;

//Minuscula
string lowerString(string pCadena){
	for (int i = 0; i < pCadena.length(); i++){
		pCadena[i] = tolower(pCadena[i]);
	}
	return pCadena;
}

//Mayuscula
string upperString(string pCadena){
	for (int i = 0; i < pCadena.length(); i++){
		pCadena[i] = toupper(pCadena[i]);
	}
	return pCadena;
}

int main(){
    cout << "Ingresa cadena de caracteres: ";
    string cadena;
    getline(cin, cadena);
    cout << "Cadena en minuscula: " << lowerString(cadena) << endl;
    cout << "Cadena en mayuscula: " << upperString(cadena) << endl;
    cin.get();
    return 0;
}
