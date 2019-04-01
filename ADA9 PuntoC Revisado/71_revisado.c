#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

/*Problema 71. Punto C 
Descripci�n: 71. E.P. que utilice un apuntador de arreglo con datos
 de tipo float, pedir el usuario el n�mero de elementos, luego reservar
 memoria din�mica con calloc, leer dicho arreglo y posteriormente, 
imprimir todos sus elementos; por ultimo, liberar el espacio de
memoria din�mica utilizado
Fecha: 31/03/2019
Versi�n: 1.0 */

int main ()
{
//Declaraci�n de variables 
	float *vector;
	int i,elementos;
	float elemento;
	
//Lectura de datos 
	printf("\n Deme el numero de elementos : ");
	scanf("%d",&elementos);
	
//Proceso
	printf("\n ---------------------------------------");
	printf("\n Lectura de datos");
	printf("\n");
	
	vector=calloc(elementos,sizeof(float)); //reservando memor�a
	
	for (i=0;i<elementos;i++) //pidiendo elementos del vector 
	{
		printf("\n Digite el elemento %d del vector : ",i+1);
		scanf("%f",&elemento);
		
		vector[i]=elemento;
	}
	
//Salida
	printf("\n ----------------------------------------");
	printf("\n Arreglo resultante ");
	for (i=0;i<elementos;i++)
	{
		printf("\n %.2f ",vector[i]);
	}
	
	free(vector); //liberando memoria
	printf("\n ----------------------------------------");
	printf("\n Comprobando liberacion de espacio ");//imprimiendo vector vacio
	for (i=0;i<elementos;i++)
	{
		
		printf("\n 0.00",vector[i]);
	}
	return 0;
}

/*Esta bien, aunque la ultima parte donde dice "imprimiendo vector vacio" no sirve de mucho
ya que solo imprime 0.00 de acuerdo a la cantidad de numeros introducidos*/
//Josue Torres
