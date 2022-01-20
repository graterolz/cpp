//CPP014 - Fecha y hora actual del sistema.
#include <iostream>
#include <ctime>
using namespace std;
int main(){
	time_t fecha_hora_actual = time(0);
	struct tm *horalocal = localtime(&fecha_hora_actual);

	int hora = horalocal->tm_hour;
	int min = horalocal->tm_min;
	int seg = horalocal->tm_sec;
	int dia = horalocal->tm_mday;
	int mes = horalocal->tm_mon;
	int anio = horalocal->tm_year;

	cout << "Fecha actual: " << dia << "/" << mes << "/" << (anio + 1900) << endl;
	cout << "Hora actual: " << hora << ":" << min << ":" << seg;

	cin.get();
	return 0;
}
