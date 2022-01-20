#include <stdio.h>
#include <math.h>
#include <conio.h>
//
void Program1() {
	float S_1,S_2,S_3,S_4,S_5,S_6,S_7,S_8,S_9,S_10,Nomina;

	printf("Ingrese Sueldo 1: ");
	scanf("%f",&S_1);
	printf("Ingrese Sueldo 2: ");
	scanf("%f",&S_2);
	printf("Ingrese Sueldo 3: ");
	scanf("%f",&S_3);
	printf("Ingrese Sueldo 4: ");
	scanf("%f",&S_4);
	printf("Ingrese Sueldo 5: ");
	scanf("%f",&S_5);
	printf("Ingrese Sueldo 6: ");
	scanf("%f",&S_6);
	printf("Ingrese Sueldo 7: ");
	scanf("%f",&S_7);
	printf("Ingrese Sueldo 8: ");
	scanf("%f",&S_8);
	printf("Ingrese Sueldo 9: ");
	scanf("%f",&S_9);
	printf("Ingrese Sueldo 10: ");
	scanf("%f",&S_10);

	Nomina = (S_1+S_2+S_3+S_4+S_5+S_6+S_7+S_8+S_9+S_10);
	printf("El Total de la Nomina Es: %.1f",Nomina);
}
//
void Program2() {
	int x;
	scanf("%d",&x);
	printf("\n");

    int suma=10;
    int indicador = suma > 10;

    char letra= 'a';
    letra = letra - 32;
    letra = letra + 32;

    printf("\a");
    printf("\b");
}
//
void Program3() {
    char sonido='\a';
    char bs='\b';
    printf("%c%c",sonido,sonido);
    printf("ZZ");
    printf("%c%c",bs,bs);
}
//
void Program4() {
	char primero, ultimo;
	printf("Introduzca su primera y ultima inicial:");
	scanf("%c %c",&primero,&ultimo);
	printf("Hola, %c . %c",primero,ultimo);
}
//
#define T "Tambor de hojalata."
void Program5() {
    char st[21]="Todo puede hacerse.";
    puts(T);
    puts("Permiso para salir en la foto.");
    puts(st);
    puts(&st[8]);
}
//
void Program6() {
	char pax[]="Juan Sin Miedo.";
	printf("%s %s\n",pax,&pax[4]);
	puts(pax);
	puts(&pax[4]);
}
//
void Program7() {
	int m=45,n=75;
	printf(" M = %d, N = %d\n",m,n);
	++m;
	--n;
	printf(" M = %d, N = %d\n",m,n);
	m++;
	n--;
	printf(" M = %d, N = %d\n",m,n);
}
//
void Program8() {
	int m=99,n;
	n=++m;
	printf(" M = %d, N = %d\n",m,n);
	n=m++;
	printf(" M = %d, N = %d\n",m,n);
	printf(" M = %d \n",m++);
	printf(" M = %d \n",++m);
}
//
void Program9() {
	int n=5,t;
	t= ++n * --n;
	printf("N = %d, T = %d\n",n,t);
	printf("%d %d %d\n",++n,++n,++n);
}
void Program10() {
	printf("El tamaño de variables enteras es %d .\n",sizeof(int));
	printf("El tamaño de variables caracter es %d .\n",sizeof(char));
	printf("El tamaño de variables de coma flotante es %d .\n",sizeof(float));
	printf("El tamaño de variables de doble precision es %d .\n",sizeof(double));
}
//
void Program11() {
	const int M=6;
	int a,b,c;
	puts("Introduce el valor de a y de b");
	scanf("%d %d",&a,&b);
	c=2*a-b;
	c-=M;
	b=a+c-M;
	a=b*M;
	printf("\n a = %d\n",a);
	b=-1;
	printf("%6d %6d",b,c);
}
//
void Program12() {
	int n,d;
	printf("Introduzca dos enteros: ");
	scanf("%d %d",&n,&d);
	if (n%d==0){
		printf("%d es divisible entre %d\n",n,d);
	}
}
//
void Program13() {
	float numero;

	printf("Introduzca un numero positivo o negativo: ");
	scanf("%f",&numero);

	if(numero>0){
		printf("%f es mayor que cero\n",numero);
	}
	if(numero<0){
		printf("%f es menor que cero\n",numero);
	}
	if(numero==0){
		printf("%f es igual a cero\n",numero);
	}
}
//
void Program14() {
	int x,y;
	printf("Introduzca dos enteros: ");
	scanf("%d %d",&x,&y);
	if(x>y){
		printf("%6d\n",x);
	}else{
		printf("%6d\n",y);
	}
}
//
void Program15() {
	int n,d;
	printf("Introduzca dos enteros: ");
	scanf("%d %d",&n,&d);
	if(n%d==0){
		printf("%d es divisible entre %d\n",n,d);
	}else{
		printf("%d no es divisible entre %d\n",n,d);
	}
}
//
void Program16() {
	int a,b,c,mayor;
	printf("Introduzca tres enteros: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c){
			mayor=a;
		}else{
			mayor=c;
		}
	}else{
		if(b>c){
			mayor=b;
		}
	}
	printf("El mayor es %d \n",mayor);
}
//
void Program17() {
	char nota;
	printf("Introduzca calificacion (A-F) y pulse Intro: ");
	scanf("%c",&nota);

	switch(nota){
	case 'A':
		puts("Excelente.");
		break;
	case 'B':
		puts("Notable.");
		break;
	case 'C':
		puts("Aprobado.");
		break;
	case 'D':
	case 'F':
		puts("Reprobado.");
		break;
	default:
		puts("No es posible esta nota.");
	}
	puts("Final del prorgrama");
}
//
void Program18() {
	int n1,n2;
	printf("Introduzca dos numeros positivos o negativos: ");
	scanf("%d %d",&n1,&n2);

	if(n1>n2){
		printf("%d > %d\n",n1,n2);
	}else{
		printf("%d <= %d\n",n1,n2);
	}

	n1 > n2 ? printf("%d > %d\n",n1,n2) : printf("%d <= %d\n",n1,n2);
}
//
int main(){
	Program18();
	//getch();
	return 0;
}
