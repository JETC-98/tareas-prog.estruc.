/* II. Un maestro que imparte un curso de Programaci�n Estructurada, entrega calificaciones (tipo real), 
del segundo parcial a sus alumnos. �stos, se sientan en un rect�ngulo dentro del laboratorio de c�mputo, 
formado por N filas y M columnas de sillas . Se desea como conocer la posici�n (fila, columna), de los estudiantes, 
que tienen la mayor calificaci�n del grupo. Adem�s, se desea conocer cu�ntos reprobaron (es decir, obtuvieron menos de 70 puntos). 
Finalmente, se desea determinar cu�l es el promedio del grupo y generar un vector que contenga el 
promedio de las calificaciones de cada fila.    E.P. que realice lo solicitado.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 13/marzo/2019
Version: 1.0*/

#include <stdio.h>


int main() {
	
	/*Declaramos las variables*/
	int filas, columnas, trono = 0, cont_reprobados = 0, sum = 0;
	
	printf("\nFilas: ");
	scanf("%i", &filas);
	
	printf("\n\nColumnas: ");
	scanf("%i", &columnas);
	
	/*Declaramos la matriz*/
	float matriz[filas][columnas];
	
	/*Declaramos el vector de la sumatoria de cada fila*/
	float vector[filas];

	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			/*ENTRADA de datos*/
			printf("\n\nCalificaci�n del alumno en la fila %i, columna %i: ", i + 1, j + 1);
			scanf("%f", &matriz[i][j]);
			
			sum += matriz[i][j];
			
			/*PROCESO para saber la calificaci�n m�s alta*/
			if(matriz[i][j] > trono)
			{
				trono = matriz[i][j];
				
			}
			
			/*PROCESO para saber el n�mero de reprobados*/
			if(matriz[i][j] < 70)
			{
				cont_reprobados++;
			}
			
		}
	}
	
	float prom = 0;
	
	/*PROCESO para saber el promedio general*/
	prom = (float)sum/(filas*columnas);
	
	sum = 0;
	
	/*PROCESO para guardar el promedio de cada fila en el vector*/
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			sum += matriz[i][j];
			
		}
		
		vector[i] = (float)sum/columnas;
		
		sum = 0;
	}
	
	/*SALIDA de datos*/
	printf("\n\nLas calificaciones son:\n\n");
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			printf("[%.2f] ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	/*SALIDA de datos*/
	printf("\n\nLa(s) posicion(es) con mayor(es) calificaci�n son:\n\n");
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			if(matriz[i][j] == trono)
			{
				printf("\nPosici�n: [%i, %i]", i + 1, j + 1);
			}
			
		}
		
	}
	
	/*SALIDA de datos*/
	printf("\n\nEl vector con el promedio de las filas es:\n\n");
	for(int i = 0; i < filas; i++)
	{
		printf("[%.2f] ", vector[i]);
		
	}
	
	/*SALIDA de datos*/
	printf("\n\nEl promedio general es: %.2f", prom);
	printf("\n\nN�mero de reprobados: %i", cont_reprobados);
	
	return 0;
}

