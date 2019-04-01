#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	float *arreglo=NULL;
	arreglo=realloc(NULL,sizeof(float));
	arreglo[10];
		for(i=0;i<10;i++){
		scanf ("%f",&arreglo[i]);
	}
		
		arreglo=realloc(NULL,sizeof(float*)*2);
		
		for(i=0;i<20;i++){
			printf ("\n%.2f",arreglo[i]);
		}
		
	return 0;
}

