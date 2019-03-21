/* 57. E.P. que lea una matriz de N X M elementos y que encuentre e
imprima la posici�n de los elementos negativos.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 11/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Declaramos las variables*/
	int filas, i, columnas, j, cont_negativos = 0, a = 1;
	
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
	float matriz_numeros[filas][columnas];
	
	/*Creamos un ciclo For para la lectura de los datos*/
	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			/*ENTRADA de datos*/
			printf("\n\nInserte el n�mero de la fila %i�, columna %i� ", i + 1, j + 1);
			scanf("%f", &matriz_numeros[i][j]);
			
			/*PROCESO para determinar el n�mero de negativos en la matriz*/
			if (matriz_numeros[i][j] < 0)
			{
				cont_negativos++;
			}
			
		}
	}
	
	/*SALIDA de datos*/
	if (cont_negativos > 0)
	{
		printf("\n\nLa posici�n de los n�meros negativos es:\n\n");
		
		for (i = 0; i < filas; i++)
		{
			for (j = 0; j < columnas; j++)
			{
				if (matriz_numeros[i][j] < 0)
				{
					printf("%i.-[Fila: %i, Columna: %i]\n", a++, i + 1, j + 1);
				}
			}
		}
		
	} else 
	{
		printf("\n\nNo hay n�meros negativos en la matriz");
	}

	getch();
	
	return 0;
}

//Funciona bien
//Revisado por: Abigael Arjona
