#include <iostream>
using namespace std;
int main(){
	//Variable que guarda cantidad de numeros a procesar
	int cantidadNum=0;
	
	cout << "Ingresa cantidad de enteros que va a procesar: ";
	cin >> cantidadNum;
	
	//Evaluamos que sea mayor a cero
	if(cantidadNum<=0){
		cout << "Debe ingresar una cantidad mayor a cero.";
		return 0;
	}
	
	//Creamos arreglo con cantidad de numeros a procesar	
	int serie[cantidadNum];
		
	//Variable que almacenan cantidad que caso de que se cumpla alguna de las condiciones
	double sumaSerie=0;	
	double multiplo3=0;
	double numImpar=0;
	double tresCifras=0;	
	int cantidadPrimos=0;
	
	//Contador principal
	int i=0;
		
	//Ciclo principal para la lectura de los valores
	while(i<cantidadNum){
		//Se ingresa el valor del numero
		cout << "Ingresa numero " << (i+1) <<" : ";
		cin >> serie[i];

		//Se evalua que sea numero positivo; Sino vuelve a solicitar ingresar numero
		if (serie[i]>=0){
			//Guarda el valor sumarizado en variable
			sumaSerie=sumaSerie+serie[i];
			
			//Saber si es multiplo de 3
			if((serie[i]%3)==0){
				multiplo3++;
			}
			//Saber si es impar
			if((serie[i]%2)!=0){
				numImpar++;
			}
			//Saber si es de tres cifras
			if(serie[i]>99){
				tresCifras++;
			}
			
			//Contador de divisor de un numero
			int a=0;
			for(int j=1;j<(serie[i]+1);j++){  
				if(serie[i]%j==0){
					a++;
				}  
			}
			//Si tiene solo 2 divisores el numero; Es primo.
			if(a==2){  
				cantidadPrimos++;
			}
			//Ve al siguiente numero
			i++;
		}else{
			continue;
		}
	}
	//Luego de contar los numero se efectuan las formulas de calculo	
	double promedio=sumaSerie/cantidadNum;
	double promMultiplo3=(multiplo3*100)/cantidadNum;
	double promNumImpar=(numImpar*100)/cantidadNum;
	double promtresCifras=(tresCifras*100)/cantidadNum;
	
	//Se imprimen las variables que requiere el problema
	cout << "Resultados:" << endl;
	cout << "Promedio de la serie: " << promedio << endl;
	cout << "Porcentaje de numeros multiplos de 3: " << promMultiplo3 <<"%"<< endl;
	cout << "Porcentaje de numeros impares: " << promNumImpar <<"%"<< endl;
	cout << "Cantidad de numeros primos: " << cantidadPrimos << endl;
	
	//Se presioan enter
	cin.get();
	//Fin del programa
	return 0;
}