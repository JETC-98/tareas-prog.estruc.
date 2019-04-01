/*E.P.  que  utilice  un apuntador  de  arreglo con datos  de tipo  float,pedir
 el  usuario  el  número  de  elementos,  luego  reservar  memoria dinámica
 con  calloc,leer  dicho  arreglo y  posteriormente,imprimir todos sus elementos;
por  ultimo,liberar  el  espacio  de  memoria dinámica utilizado.*/
//Fecha:31/03/19

#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, n;
	float *vec;
	//tamaño de vector
	printf("numero de elementos a introducir:");
	scanf("%d",&n);
	//reservacion de memoria
	vec = (float*)calloc(n, sizeof(float));
	printf("escriba %d numeros:\n",n);
	//entrada de datos al vector
	for( i=0 ; i < n ; i++ ) {
		scanf("%f",&vec[i]);
	}
	//salida de elementos en el vector
	printf("Los numeros escritos son: ");
	for( i=0 ; i < n ; i++ ) {
		printf("%f ",vec[i]);
	}
	//liberacion de memoria
	free( vec );
	
	return(0);
}
