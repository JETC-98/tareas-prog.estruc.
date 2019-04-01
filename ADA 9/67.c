#include <stdio.h>
#define N 2

struct empleado{
	int clave;
	char nombre[20];
	int edad;
	float salario;
	int sexo;
}trabajador[N],aux; 

int main(int argc, char *argv[]) {
	int i,j;
	
	
	for(i=0;i<N;i++){
		printf ("\n\nTrabajador %d", i+1);
		printf("\nDigite su nombre: ");
		gets(trabajador[i].nombre);
		printf("Digite su clave: ");
		scanf("%d",&trabajador[i].clave);
		fflush(stdin);		
		printf("Digite su edad: ");
		scanf("%d",&trabajador[i].edad);
		fflush(stdin);
		printf("Digite su salario: ");
		scanf("%f",&trabajador[i].salario);
		fflush(stdin);
		printf("Digite su sexo (1 para mujer, cualquier otra cosa para hombre): ");
		scanf("%d",&trabajador[i].sexo);
		fflush(stdin);
	}
	
	for(i=1;i<N;i++){
		for (j=N-1;j>=i;j--){
		if (trabajador[j-1].salario>trabajador[j].salario)
		{
			aux=trabajador[j];
			trabajador[j]=trabajador[j-1];
			trabajador [j-1]=aux;
		}
		}
	}
	
	for(i=0;i<N;i++){
		printf ("\n\n Trabajador %d",i+1);
		printf ("\nNombre del empleado : %s", trabajador[i].nombre);
		printf ("\nClave : %d", trabajador[i].clave);
		if (trabajador[i].sexo==1){
		printf ("\nSexo: Femenino");
		}
		else 
			printf ("\nSexo: Masculino");
		printf ("\nSalario : %.2f", trabajador[1].salario);
		
	}
	return 0;
}
