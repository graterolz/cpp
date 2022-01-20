#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
//MessageBox
void Program1() {
	MessageBox(NULL,"Contenido","Titulo", MB_OK);
}
//ArchivoTexto
void Program2() {
	ifstream infile;
	char *NombreArchivo = "file.txt";
	string Cadena = "Mensaje de prueba.";

	ofstream fs(NombreArchivo);	// Crea fichero
	fs << Cadena << endl;		// Cadena a fichero
	fs.close();					// Cierra fichero

	infile.open (NombreArchivo);
	while(!infile.eof()){
		getline(infile,Cadena);	//Linea a Variable
		for (int i=0; i<Cadena.length();i++){
			cout << Cadena.at(i) << endl;
		}
	}
	infile.close();
	remove(NombreArchivo);	//Elimina fichero
}
//NumerosOrden
void Program3() {
	int numero1,numero2,numero3;
	cout << "Ingrese primer numero: ";
	cin >> numero1;
	cout << "Ingrese segundo numero: ";
	cin >> numero2;

	if((numero1<numero2)||(numero1==numero2)){
		cout << "Ingrese tercer numero: ";
		cin >> numero3;

		if((numero2<numero3)||(numero2==numero3)){
			cout << "Estan en orden ascendente.";
		}
		else{
			cout << "No estan en orden ascendente.";
		}
	}
	else{
		cout << "No estan en orden ascendente.";
	}
}
//BarraCargando
void Program4() {
	int segundos;
	cout << "Segundos?: ";
	cin >> segundos;

	for(int i=0; i<=79; i++){
		cout << "=";
		Sleep(segundos*1000/80);
	}
}
//
int main(){
	Program4();
	//cin.get();
	return 0;
}
