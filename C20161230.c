#include <stdio.h>
#include <conio.h>
int main(){		
	printf("1 - Local\n");
	printf("2 - Celular\n");
	printf("3 - Nacional\n");
	printf("4 - Internacional\n");

	const int minuto_local=3;
	const int minuto_celular=5;
	const int minuto_nacional=7;
	const int minuto_internacional=11;
	char desc_llamada[20];

	int tipo_llamada;
	int minutos_llamada;
	float recargo=0;
	
	float total;

	printf("Ingrese tipo de llamada: ");
	scanf("%i",&tipo_llamada);

	printf("Ingrese minutos consumidos: ");
	scanf("%i",&minutos_llamada);

	if(tipo_llamada==1){
		total = minutos_llamada*minuto_local;
		desc_llamada = 'Local';
		recargo = recargo + 2;
	}
	else if	(tipo_llamada==2){
		total = minutos_llamada*minuto_celular;
		desc_llamada = 'Celular';
		recargo = recargo + 3;
	}
	else if(tipo_llamada==3){
		total = minutos_llamada*minuto_nacional;
		desc_llamada = 'Nacional';
		recargo = recargo + 2.5;
	}
	else if(tipo_llamada==4){
		total = minutos_llamada*minuto_internacional;
		desc_llamada = 'Internacional';
		recargo = recargo + 3.5;		
	}

	printf("Minutos consumidos: %s\n", minutos_llamada);
	printf("Tipo de llamada: %s\n", desc_llamada);
	printf("Subtotal: %f\n", total);	
	printf("Recargo: %i\n", recargo);
	printf("Total: %f\n", (total+recargo));
	//
	return 0;
}