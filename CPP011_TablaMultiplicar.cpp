//CPP011 - Tabla de multiplicar del 1 al 10.
#include <iostream>
using namespace std;
int main() {
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			cout << i << " * " << j << " = " << (i*j) << endl;
		}
	}

	cin.get();
	return 0;
}
