/* I. E.P. que solicite al usuario la dimensi�n de una matriz cuadrada de n x m elementos de tipo real, as� como
leer  e imprimir dicho arreglo. Posteriormente, debe solicitar la posici�n de un elemento dentro de la matriz y 
proceder a dividir todos los elementos, entre dicho elemento ubicado en la posici�n proporcionada. Por �ltimo, 
imprimir� el estado final de la matriz.  Se deber� validar que no se realicen divisiones entre cero.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 13/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <stdlib.h>



int main() 
{
	/*Declaramos las variables*/
	int filas, columnas, fila_posicion, columna_posicion;
	
	
	printf("\nFilas: ");
	scanf("%i", &filas);
	
	printf("\n\nColumnas: ");
	scanf("%i", &columnas);
	
	/*Declaramos la matriz*/
	double matriz[filas][columnas];
	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			/*ENTRADA de datos*/
			printf("\n\nN�mero en la fila %i, columna %i: ", i + 1, j + 1);
			scanf("%lf", &matriz[i][j]);
			
		}
	}
	
	system("cls");
	
	/*Mostrar en pantalla la matriz despu�s de los datos ingresados*/
	printf("\n\nMatriz resultante:\n\n");
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			printf("[%.2lf] ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	int validar = 0;
	double numero_dividir;
	
	printf("\n\nValor a dividir");
	
	do
	{
		/*ENTRADA de datos*/
		printf("\n\nFila:");
		scanf("%i", &fila_posicion);
		
		printf("\n\nColumna:");
		scanf("%i", &columna_posicion);
		
		numero_dividir = matriz[fila_posicion - 1][columna_posicion - 1];
		
		
		if (numero_dividir == 0)
		{
			printf("\n\nElemento NO v�lido");
			
		} else
		{
			/*PROCESO para hacer la divisi�n entre el n�mero que el usuario solicit�*/
			for(int i = 0; i < filas; i++)
			{
				for(int j = 0; j < columnas; j++)
				{
					
					matriz[i][j] /= (double)numero_dividir;
					
				}
			}
			
			validar = 1;
			
		}
		
	} while(validar == 0);
	
	
	/*SALIDA de datos*/
	printf("\n\nMatriz resultante:\n\n");
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			printf("[%.2lf] ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}

