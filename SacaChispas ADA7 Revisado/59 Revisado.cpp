/* 59. E.P. que lea una matriz de M X N elementos y que cuente e
imprima cuantos elementos son pares y cuantos son impares.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 11/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define X (i = 0; i < filas; i++)
#define Y (j = 0; j < columnas; j++)

int main() {
	
	/*Declaramos las variables*/
	int filas, i, columnas, j, cont_pares = 0, cont_impares = 0;
	
	double aux, p;
	
	printf ("\nInserte las filas ");
	
	/*Validamos dicha longitud con un Do-While*/
	do
	{
		scanf ("%i", &filas);
		
		if (filas <= 0)
		{
			printf("\n\nInsert� una cantidad NO v�lida, int�ntelo de nuevo\n\nFilas ");
		}
		
	} while (filas <= 0);
	
	
	printf ("\nInserte las columnas ");
	
	/*Validamos dicha longitud con un Do-While*/
	do
	{
		scanf ("%i", &columnas);
		
		if (columnas <= 0)
		{
			printf("\n\nInsert� una cantidad NO v�lida, int�ntelo de nuevo\n\nColumnas ");
		}
		
	} while (columnas <= 0);
	
	/*Declaramos la matriz*/
	double matriz_numeros[filas][columnas];
	
	/*Creamos un ciclo For para la lectura de los datos*/
	for X
	{
		for Y
		{
			/*ENTRADA de datos*/
			printf("\n\nInserte el n�mero de la fila %i�, columna %i� ", i + 1, j + 1);
			scanf("%lf", &matriz_numeros[i][j]);
			
			/*PROCESO para determinar si un n�mero es par o impar*/
			aux = modf(matriz_numeros[i][j]/2, &p);
			
			if (aux == 0)
			{
				cont_pares++;
				
			} else
			{
				cont_impares++;
			}
		}
	}
	
	/*SALIDA de datos*/
	printf("\n\nN�mero de pares %i\n\nN�mero de impares %i", cont_pares, cont_impares);
	
	getch();
	
	return 0;
}

//El programa funciona bien
//Revisado por: Abigael Arjona
