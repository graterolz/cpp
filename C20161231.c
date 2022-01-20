#include <stdio.h>
#include <conio.h>

int main(){
	char nombre[20], apellido[20];
	long int cedula, horas_diurnas, horas_vespertinas, horas_nocturas;

	const float c_hora_diurna = 95.23;
	const float c_hora_vespertina = 95.23;
	const float c_hora_nocturna = 125;

	printf("Ingrese nombre: ");
	scanf("%s",&nombre);

	printf("Ingrese apellido: ");
	scanf("%s",&apellido);

	printf("Ingrese cedula: ");
	scanf("%i",&cedula);

	printf("Ingrese horas diurnas trabajadas: ");
	scanf("%i",&horas_diurnas);

	printf("Ingrese horas vespertinas trabajadas: ");
	scanf("%i",&horas_vespertinas);

	printf("Ingrese horas nocturas trabajadas: ");
	scanf("%i",&horas_nocturas);

	int total_horas = horas_diurnas + horas_vespertinas + horas_nocturas;
	float valor_hora_nocturna = 0;

	// Si el empleado trabaja menos 120hrs tendrá un incremento en la hora nocturna del 10%
	if(total_horas<120){
		valor_hora_nocturna = valor_hora_nocturna + (c_hora_nocturna * 0.10);
	}
	
	// Si el empleado trabaja entre  120 y 240 hrs tendrá un incremento en la hora nocturna del 15%
	if(total_horas>=120 && total_horas<=240){
		valor_hora_nocturna = valor_hora_nocturna + (c_hora_nocturna * 0.15);
	}

	// Si el empleado trabaja  entre 240 y 360  hrs tendrá un incremento en la hora nocturna del 20%
	if(total_horas>=240 && total_horas<=360){
		valor_hora_nocturna = valor_hora_nocturna + (c_hora_nocturna * 0.20);
	}

	// Si el empleado trabaja  más 360hrs tendrá un incremento en la hora nocturna del 15%
	if(total_horas>360){
		valor_hora_nocturna = valor_hora_nocturna + (c_hora_nocturna * 0.15);
	}

	//Mostrar El sueldo trimestral sin incremento, el incremento de la hora, el sueldo trimestral con incremento y los datos del empleado.
	float sueldo_sin_incremento = 
		((horas_diurnas * c_hora_diurna) + 
		(horas_vespertinas * c_hora_vespertina) + 
		(horas_nocturas * c_hora_nocturna))/4;

	float sueldo_con_incremento =
		((horas_diurnas * c_hora_diurna) + 
		(horas_vespertinas * c_hora_vespertina) + 
		(horas_nocturas * valor_hora_nocturna))/4;
	
	// Resultados        
	printf("Sueldo trimestral sin incremento: %f\n", sueldo_sin_incremento);
	printf("Incremento de la hora: %s\n", valor_hora_nocturna);
	printf("Sueldo trimestral con incremento: %f\n", (sueldo_con_incremento));
	printf("Nombre: %s\n", nombre);
	printf("Apellido: %s\n", apellido);
	printf("Cedula: %s\n", cedula);
	//
	return 0;
}
