#include <stdio.h>


/*	Ejercicio: ADA 4, Ejercicio 46 Macro.
Descripción: E.P.  que  lea  200  números  y  que  calcule  e  imprima  cuantos son
negativos, cuantos son positivos y cuantos fueron iguales a cero.
Fecha: 17 Febrero 2019
Versión: 1.0
*/

#define FOR(A) for(A=1;A<=200;A++)

int main() {
	
	int cont,contp,contn,cont0;
	float num;
	
	contp=0;
	contn=0;
	cont0=0;
	
	FOR(cont){
		
		printf("\nIntroduzca un número: ");
		scanf ("%f",&num);
		
		if(num > 0){
			contp++;
		}
		else if(num < 0){
			contn++;
		}
		else{
			cont0++;
		}
		
	}
	
	printf("\nLa cantidad de números positivos es de %i",contp);
	printf("\nLa cantidad de números posnegativos es de %i",contn);
	printf("\nLa cantidad de ceros es de %i",cont0);
	
	return 0;
}


/* Revisado por los compiladores{
--EL archivo Funciona bien
--forma de usar macros interesante
--Pueden usar macros para los ceros en el if 
--Al imprimir los negativos dice posnegativos


}*/
