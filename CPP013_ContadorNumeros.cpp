//CPP013 - Contador de números.
#include <iostream>
using namespace std;
int main(){
	int desde,hasta;
	cout << "Desde: ";
	cin >> desde;
	cout << "Hasta: ";
	cin >> hasta;

	if (desde<hasta){
		while(desde<=hasta){
			cout << desde << endl;
			desde++;
		}
	}
	else{
		while(hasta<=desde){
			cout << desde << endl;
			desde--;
		}
	}
	cin.get();
	return 0;
}