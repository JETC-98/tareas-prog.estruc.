#include <stdio.h>
#include <stdlib.h>

/*	Ejercicio: ADA 9, Ejercicio 68.
Descripción: Pedir  al  usuario  el  número  de  elementos  para  un arreglo  de
números   enteros,   posteriormente   comprobar   con   malloc   si   hay memoria 
suficiente  (si  el  puntero  es  válido,  es  decir  diferente  de NULL),  si  la  hay,
entonces leer y  luego  imprimir dicho arreglo; si no, indicar un error en la asignación de memoria.
Fecha: 1 Abril 2019
Versión: 1.0
*/

//NOTA: En caso de dar error, copiar el código y pegarlo en una plantilla nueva de "Programa C en Blanco"

int n;//Variable para la cantidad de elementos del arreglo
int i;//Variable contador

//Proceso
int main() {
	
	//Se pide el tamaño del arrelgo
	printf("Introduzca el tamaño del arrelgo. ");
	scanf ("%i",&n);
	system("cls");//Se limpia pantalla
	
	int *arreglo;//Arreglo como puntero	
	
	arreglo = malloc(n * sizeof(int));//Determinar el tamaño del arreglo respecto a la memoria
	
	if(arreglo == NULL){
		printf("Error en la asignación de memoria.");//Se informa si la memoria es insuficiente
	}
	else{
		for(i=0;i<n;i++){
			printf("Introduzca el %i° valor del arreglo. ",i+1);//Se piden los elementos del arreglo
			scanf ("%i",&arreglo[i]);
		}
		
		system("cls");//Se limpia pantalla
		
		//Salida
		for(i=0;i<n;i++){
			printf("%i.\n",arreglo[i]);//Se imprime el arreglo
		}
		
	}
	
	return 0;
}

