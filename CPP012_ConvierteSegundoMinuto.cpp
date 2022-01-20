//CPP012 - Convierte valor de segundos a minutos.
#include <iostream>
using namespace std;
int main(){
	const int minuto = 60;
	int segundo;
	cout << "Ingresa cantidad de segundos: ";
	cin >> segundo;
	
	if (segundo>=0){
		float total_min = segundo / minuto;
		float total_seg = segundo % minuto;
		cout << "Tiene " << total_min << " minuto(s) con " << total_seg <<" segundos.";
	}
	else{
		cout << "Deben ser valores mayor a cero (0).";
	}
	cin.get();
	return 0;
}
