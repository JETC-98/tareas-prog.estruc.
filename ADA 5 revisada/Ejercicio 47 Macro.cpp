#include <stdio.h>

/*	Ejercicio: ADA 4, Ejercicio 47 Macro.
Descripción: E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificación mayor al promedio de grupo.
Fecha: 17 Febrero 2019
Versión: 1.0
*/

#define FOR(A) for(A=1; A<=50; A++)

int main() {
	
	int cont,contm;
	float cal,prom,sum;
	
	sum = 0;
	cont = 0;
	contm = 0;
	
	FOR(cont){
		printf("\nAlumno %i",cont);
		
		printf("\nIntroduzca su calificación: ");
		scanf ("%f",&cal);
		
		sum += cal;
	}
	
	prom = (sum / 50);
	
	printf("           -------------");
	
	FOR(cont){
		
		printf("\nAlumno %i",cont);
		
		printf("\nIntroduzca su calificación: ");
		scanf ("%f",&cal);
		
		if(cal > prom){
			contm++;
		}
		
	}
	
	printf("\n%i alumnos obtuvieron una calificación mayor al promedio.",contm);
	
	return 0;
}
/* Revisado por los compiladores{
--EL archivo trabaja con calificaciones negativas

}
*/
