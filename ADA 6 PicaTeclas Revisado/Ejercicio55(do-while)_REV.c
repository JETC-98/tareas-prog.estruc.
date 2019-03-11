/*
Programa: VectorConNegativo.C
Nombre equipo: Picateclas
Descripción:  Lee un vector de n elementos, el cual se sabe tiene un
elemento negativo y determina e imprime su posición.
Version: 1.0
Fecha de creación: 6/mar/2019
*/

#include <stdio.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	int n, i=1, j=1, m=1, posicion;//no es un error pero normalmente los arreglos en c estan inicializados en 0 y no en 1
	printf("Inserte el tamaño del vector: ");
	scanf(" %i", &n);
	posicion=0;
	
	float arreglo_1[n];
	
	//ENTRADA- leer vector
	do{
		printf("\nInserte el elemento %i del vector: ", i);
		scanf(" %f", &arreglo_1[j]);
		i++;
		j++;//la variable j es un tanto innecesaria si siempre tendra el mismo valor que i
	}while(i<=n);
	
	//PROCESO- Determinar elemento negativo y guardar su posición
	do{
		if(arreglo_1[m]<0){
			posicion=m;//Por qué guardar la posicion y no solo imprimir el contador con su valor actual?
		}
		m++;//el lugar de m como otro contador se podia regresar el valor de i a 1
	}while(m<=n);
	
	//SALIDA- imprimir la posición
	printf("\n El número negativo se encuentra en la posición %i del arreglo.", posicion); 
	
	getch();
	return 0;
}

