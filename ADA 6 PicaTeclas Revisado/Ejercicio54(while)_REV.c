/*
Programa: SumaDeVectores_while.C
Nombre equipo: Picateclas
Descripción:  Lee dos vectores de n elementos y genera e imprime
un tercer vector con la suma de cada uno de los elementos de los dos
anteriores.
Version: 1.1
Fecha de creación: 6/mar/2019
*/

#include <stdio.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	int n, i=0, j=0;
	printf("Inserte el tamaño de los vectores: ");
	scanf("%d", &n);
	
	float arreglo_1[n], arreglo_2[n], arreglo_3[n], sum;
	
	//ENTRADA- leer primer vector
	while(i<n){
		printf("\nInserte el elemento %i del primer vector: ", i+1);
		scanf("%f", &arreglo_1[i]);
		i++;
	}
	
	
	//ENTRADA- leer segundo vector
	while(j<n){
		printf("\nInserte el elemento %i del segundo vector: ", j+1);
		scanf("%f", &arreglo_2[j]);
		j++; //Por que usar j en esta situacion si en los otros 3 ciclos se utilizó el i
	}
	
	//PROCESO- Calcular la suma de los elementos de los vectores y generar tercer vector
	i=0;
	while(i<n){
		sum = arreglo_1[i] + arreglo_2[i];
		arreglo_3[i] = sum;
		i++;
	}
	
	//SALIDA- imprimir tercer vector
	printf("\nResultados: \n");
	i=0;
	while(i<n){
		printf("\n%.3f\n", arreglo_3[i]);//hubiera preferido si me decia que poscion es que imprima "Posicion %d del arreglo 3"
		i++;
	}
	
	getch();
	return 0;
}

