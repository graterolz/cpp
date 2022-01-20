#include <stdio.h>
#include <math.h>
#include <conio.h>
//
void Program1() {
	int A,B;
	float X;

	printf("Ingrese Valor A: ");
	scanf("%d",&A);
	printf("Ingrese Valor B: ");
	scanf("%d",&B);

	X = pow(A+B,2)/3;

	printf("El Resultado Es: %.2f",X);
}
//
void Program2() {
	int A,B,C,D;
	printf("Ingrese Valor A: ");
	scanf("%d",&A);
	printf("Ingrese Valor B: ");
	scanf("%d",&B);
	printf("Ingrese Valor C: ");
	scanf("%d",&C);
	printf("Ingrese Valor D: ");
	scanf("%d",&D);

	printf("El Orden Ingresado es:\n");
	printf("El Valor de D: %d\n",D);
	printf("El Valor de C: %d\n",C);
	printf("El Valor de B: %d\n",B);
	printf("El Valor de A: %d\n",A);
}
//
void Program3() {
	int A,Cubo,Cuadrado;
	printf("Ingrese Numero: ");
	scanf("%d",&A);

	Cubo = pow(A,2);
	Cuadrado = pow(A,3);

	printf("El Cubo Es: %d\n",Cubo);
	printf("El Cuadrado Es: %d",Cuadrado);
}
//
void Program4() {
	int Mat,C_1,C_2,C_3,C_4,C_5;
	float Promedio;

	printf("Ingrese Matricula: ");
	scanf("%d",&Mat);
	printf("Ingrese Calificacion A: ");
	scanf("%d",&C_1);
	printf("Ingrese Calificacion B: ");
	scanf("%d",&C_2);
	printf("Ingrese Calificacion C: ");
	scanf("%d",&C_3);
	printf("Ingrese Calificacion D: ");
	scanf("%d",&C_4);
	printf("Ingrese Calificacion E: ");
	scanf("%d",&C_5);

	Promedio = (C_1+C_2+C_3+C_4+C_5)/5;

	printf("La Matricula Es: %d\n",Mat);
	printf("El Promedio Es: %.1f",Promedio);
}
//
void Program5() {
	int Costo,Dinero,Cambio;

	printf("Ingrese Costo del Articulo: ");
	scanf("%d",&Costo);
	printf("Ingrese Cantidad de Dinero: ");
	scanf("%d",&Dinero);

	if (Dinero>Costo){
		Cambio = (Dinero-Costo);
		printf("El Cambio Es: %d",Cambio);}
	else{
		printf("La Cantidad de Dinero debe ser mayor que el costo, Intente Nuevamente.");
	}
}
//
void Program6() {
	int Base,Altura,Perimetro,Superficie;
	printf("Ingrese Base: ");
	scanf("%d",&Base);
	printf("Ingrese Altura: ");
	scanf("%d",&Altura);

	Perimetro = (Base+Altura)*2;
	Superficie = (Base*Altura);

	printf("El Perimetro Es: %d\n",Perimetro);
	printf("La Superficie Es: %d",Superficie);
}
//
void Program7() {
	int Galon;
	float Cobrar;

	printf("Ingrese Numero de Galones: ");
	scanf("%d",&Galon);

	Cobrar = (Galon*3.785*4.50);
	printf("El Monto a Cobrar Es: %.1f",Cobrar);
}
//
void Program8() {
	int N,Seg;
	printf("Ingrese Numero de Dia(s): ");
	scanf("%d",&N);

	Seg = (N*86400);
	printf("La Cantidad de Segundos Es: %d",Seg);
}
//
void Program9() {
	int Radio,Altura,Area,Volumen;
	printf("Ingrese Radio: ");
	scanf("%d",&Radio);
	printf("Ingrese Altura: ");
	scanf("%d",&Altura);

	Area = (2*3.14*Radio*Altura);
	Volumen = 3.14*pow(Radio,2)*Altura;
	printf("El Area Es: %d\n",Area);
	printf("El Volumen Es: %d",Volumen);
}
//
void Program10() {
	int Lado_1,Lado_2,Lado_3;
	float S,Producto,Area;

	printf("Ingrese Lado 1: ");
	scanf("%d",&Lado_1);
	printf("Ingrese Lado 2: ");
	scanf("%d",&Lado_2);
	printf("Ingrese Lado 3: ");
	scanf("%d",&Lado_3);

	S = (Lado_1+Lado_2+Lado_3)/2;

	if (Lado_1>0 || Lado_2>0 || Lado_3>0){
		Producto = S*(S-Lado_1)*(S-Lado_2)*(S-Lado_3);
	}
	else{
		printf("Los Lados Deben ser Mayor a Cero.");
	}

	if (Producto>0){
		Area = sqrt(Producto);
		printf("El Area Es: %.2f",Area);}
	else{
		printf("El Producto es Negativo o Menor a Cero.");
	}
}
//
int main(){
	Program10();
	//getch();
	return 0;
}
