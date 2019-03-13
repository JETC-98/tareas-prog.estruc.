#include <stdio.h>
#include <stdlib.h>

/*ADA 7 - Ejercicio 59
Actividad: E.P. que  lea  una  matriz  de  M  X  N  elementos  y  que  cuente  e
imprima cuantos elementos son pares y cuantos son impares.
Fecha: 13 de Marzo del 2019
*/

int f,c,i,j,elemp=0,elemi=0;//Contadores y variables para los contadores de positivos y negativos

//Proceso
int main() {
	
	printf("Introduzca la cantidad de filas. ");
	scanf ("%i",&f);//Se le pide al usuario la cantidad de filas
	printf("Introduzca la cantidad de columnas. ");
	scanf ("%i",&c);//Se le pide al usuario la cantidad de columnas
	printf("\n");//Imprime salto de linea
	
	int matriz[f][c];//Se inicializa la matriz con las dimensiones dadas
	
	//Proceso para obtener los elementos de la matriz
	for(i=0;i<f;i++){//Proceso filas
		for(j=0;j<c;j++){//Proceso columnas
			printf("Introduzca el elemento de la fila %i columna %i. ",i+1,j+1);
			scanf ("%i",&matriz[i][j]);//Se le pide al usuario los elementos
		}
	}
	
	system("cls");
	
	//Proceso para obtener los elementos pares e impares
	for(i=0;i<f;i++){//Proceso filas
		for(j=0;j<c;j++){//Proceso columnas
			
			if(matriz[i][j] % 2 == 0 ) {//Condicional para saber si el elemento es par o impar
				elemp++;//Si el elemento es par se aumenta en uno el contador
			}
			else{
				elemi++;//Si el elemento es impar se aumenta en uno el contador
			}
			
		}
	}
	
	//Salida
	printf(" %i elementos son pares y %i elementos son impares.",elemp,elemi);//Se imprime la cantidad de elementos par e impares
	
	return 0;
}

