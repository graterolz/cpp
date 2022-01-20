#include <stdio.h>
#include <math.h>
#include <conio.h>
//
void Program1() {
	int X_1,Y_1,X_2,Y_2,Producto;
	float Distancia;

	printf("Ingrese Valor X1: ");
	scanf("%d",&X_1);
	printf("Ingrese Valor Y1: ");
	scanf("%d",&Y_1);
	printf("Ingrese Valor X2: ");
	scanf("%d",&X_2);
	printf("Ingrese Valor Y2: ");
	scanf("%d",&Y_2);

	Producto = pow(X_1-X_2,2)+(Y_1-Y_2,2);
	Distancia = sqrt(Producto);
	printf("La Distancia Es: %.2f",Distancia);
}
//
void Program2() {
	int Calif;
	printf("Ingrese Calificacion: ");
	scanf("%d",&Calif);

	if (Calif>8){
		printf("Aprobado.");}
	else{
		printf("Fin del Proceso.");
	}
}
//
void Program3() {
	int  Sueldo;
	float N_Sueldo;

	printf("Ingrese Sueldo: ");
	scanf("%d",&Sueldo);

	if (Sueldo<1000){
		N_Sueldo = (Sueldo+Sueldo*0.15);
		printf("El Nuevo Sueldo Es: %.1f",N_Sueldo);
	}
	else{
		printf("No se asigno nuevo sueldo, Fin del Proceso.");
	}
}
//
void Program4() {
	int Sueldo;
	float N_Sueldo;

	printf("Ingrese Sueldo: ");
	scanf("%d",&Sueldo);

	if (Sueldo<1000){
		N_Sueldo = (Sueldo+Sueldo*0.15);
		printf("El Nuevo Sueldo Es: %.2f",N_Sueldo);
	}
	else{
		N_Sueldo = (Sueldo+Sueldo*0.12);
		printf("El Nuevo Sueldo Es: %.2f",N_Sueldo);
	}
}
//
void Program5() {
	int Categ;
	float Sueldo,N_Sueldo;
	printf("Ingrese Categoria: ");
	scanf("%d",&Categ);

	if (Categ>4){
		printf("Categoria Invalida, Intente Nuevamente.");
	}
	else{
		printf("Ingrese Sueldo: ");
		scanf("%f",&Sueldo);

		if (Categ==1){
			N_Sueldo = (Sueldo+Sueldo*0.15);
		}
		else if (Categ==2){
			N_Sueldo = (Sueldo+Sueldo*0.10);
		}
		else if (Categ==3){
			N_Sueldo = (Sueldo+Sueldo*0.8);
		}
		else if (Categ==4){
			N_Sueldo = (Sueldo+Sueldo*0.7);
		}

		printf("La Categoria Es: %d\n",Categ);
		printf("El Nuevo Sueldo Es: %.1f",N_Sueldo);
	}
}
//
void Program6() {
	int P,Q,Expresion;

	printf("Ingrese Valor P: ");
	scanf("%d",&P);
	printf("Ingrese Valor Q: ");
	scanf("%d",&Q);

	Expresion = pow(P,3)+pow(Q,4)-2*pow(P,2);

	if (Expresion<680){
		printf("Correcto, La Expresion Es: %d",Expresion);}
	else{
		printf("Incorrecto, La Expresion Es: %d",Expresion);
	}
}
//
void Program7() {
	int A,B,C,Producto,Raiz,Xs_1,Xs_2;

	printf("Ingrese Valor A: ");
	scanf("%d",&A);
	printf("Ingrese Valor B: ");
	scanf("%d",&B);
	printf("Ingrese Valor C: ");
	scanf("%d",&C);

	Producto = pow(B,2)-4*A*C;
	Raiz = sqrt(Producto);
	Xs_1 = (-(B)+Raiz)/2*A;
	Xs_2 = (-(B)-Raiz)/2*A;

	printf("X1 Equivale: %d\n",Xs_1);
	printf("X2 Equivale: %d\n",Xs_2);
	printf("Recuerde Pasar Los Valores al Otro Lado de La Igualdad.");
}
//
void Program8() {
	int Mat;
	float C_1,C_2,C_3,C_4,C_5,Promedio;

	printf("Ingrese Matricula: ");
	scanf("%d",&Mat);
	printf("Ingrese Calificacion A: ");
	scanf("%f",&C_1);
	printf("Ingrese Calificacion B: ");
	scanf("%f",&C_2);
	printf("Ingrese Calificacion C: ");
	scanf("%f",&C_3);
	printf("Ingrese Calificacion D: ");
	scanf("%f",&C_4);
	printf("Ingrese Calificacion E: ");
	scanf("%f",&C_5);

	Promedio = (C_1+C_2+C_3+C_4+C_5)/5;

	if (Promedio>=6){
		printf("La Matricula Es: %d\n",Mat);
		printf("El Promedio Es: %.1f\n",Promedio);
		printf("Aprobado.");}
	else{
		printf("La Matricula Es: %d\n",Mat);
		printf("El Promedio Es: %.1f\n",Promedio);
		printf("Reprobado.");
	}
}
//
void Program9() {
	int N;
	printf("Ingrese Valor N: ");
	scanf("%d",&N);

	if (N>0){
		printf("Positivo.");
	}
	else if (N<0){
		printf("Negativo.");
	}
	else {
		printf("Nulo.");
	}
}
//
void Program10() {
	int Num;
	float Division;

	printf("Ingrese Numero: ");
	scanf("%d",&Num);

	Division = (Num%2);

	if (Division==0){
		if (Num==0){
			printf("Numero NULO.");
		}
		else{
			printf("Numero PAR.");
		}
	}
	else{
		printf("Numero IMPAR.");
	}
}
//
int main(){
	Program10();
	//getch();
	return 0;
}
