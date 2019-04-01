#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


/*Problema 70. Punto C
Descripci�n: 70. E.P. que reserve memoria para un arreglo de 10 elementos
 de tipo float, rellenarlo con datos que digite el usuario, luego utilizar
 realloc para ampliar dicho arreglo a 20 elementos e imprimir el arreglo
 resultante.
Fecha: 31/03/2019
Versi�n: 1.0 */

int main ()
{
//Declaraci�n de variables 
	float *vector;
	int i;
	float elemento;
	
	vector =malloc(10*sizeof(float)); 
	/*Reservo memoria para 10 elementos e 
	indico que son datos de tipo float*/
	
//Lectura de datos 
	for (i=0;i<10;i++)
	{
		printf("\n Deme el elemento %d del vector : ",i+1);
		scanf("%f",&elemento);
		vector[i]=elemento;
	}
	printf("\n -------------------------------------");
	printf("\n Vector de 10 elementos");
	
	for (i=0;i<10;i++)
	{
		printf("\n %.2f",vector[i]);
	}
	
//Proceso 
	printf("\n --------------------------------------------");
	printf("\n Ejecutando realloc...");
	printf("\n Arreglo ampliado a 20 elementos exitosamente");
	realloc(vector,20*sizeof(float)); //vector pasa de 10 a 20 elementos

	for (i=10;i<20;i++)
	{
		printf("\n Deme el elemento %d del vector : ",i+1);
		scanf("%f",&elemento);
		vector[i]=elemento;
	}
//Salida
	printf("\n -------------------------------------");
	printf("\n Vector resultante");
	for (i=0;i<20;i++)
	{
		printf("\n %.2f",vector[i]);
	}

 
	return 0;

}
/*Esta tan optimizado como podria estar el unico problema es que a la hora de volver a escribir
el vector ya de 20 numeros los primeros dos me quedan como 0*/
//Josue Torres
