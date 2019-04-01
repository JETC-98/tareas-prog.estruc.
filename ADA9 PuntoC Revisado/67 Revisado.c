#include <stdio.h>
/*67. E.P. que lea un arreglo de estructuras los datos de N empleados
de una empresa (clave (numérica), nombre, edad, salario (real), sexo
(numérica) y que determine e imprima los datos del empleado con
mayor y menor salario.*/

int main(int argc, char *argv[]) {
	int Nemp;
	//Entrada
	printf("¿Cuantos empleados?");
	scanf ("%d", &Nemp);
	struct empleados{
	int clave;
	char nombre[40];
	int edad;
	float salario;
	int sexo;
	}empleado[Nemp];
	int i, SmayorF, SmenorF;
	float Smayor=0, Smenor=9999999;
	for (i=0; i<Nemp;i++){
		//Entrada
		printf("\n Empleado numero %d ", i+1);
		printf("\nClave (numerica): \n");
		scanf ("%d", &empleado[i].clave);
		printf("Nombre: \n");
		scanf ("%s", &empleado[i].nombre);
		printf("Edad (numerico): \n");
		scanf ("%d", &empleado[i].edad);
		printf("Salario: \n");
		scanf ("%f", &empleado[i].salario);
		//PROCESO
		if (empleado[i].salario > Smayor){
			Smayor = empleado[i].salario;
			SmayorF=i;
		}
		if (empleado[i].salario < Smenor){
			Smenor = empleado[i].salario;
			SmenorF=i;
			
		}
		printf("Sexo (1-hombre, 2-mujer): \n");
		scanf ("%d", &empleado[i].sexo);
	}
	//SALIDA
	
	printf("\n ----------------------------------------");
	printf("\nEl empleado con el sueldo mayor es: ");
	for (i=0;i<Nemp;i++){
		if (i==SmayorF){
			printf("clave (numerica): %d\n", empleado[i].clave);
			printf("nombre: %s\n", empleado[i].nombre);
			printf("edad (numerico): %d\n", empleado[i].edad);
			printf("salario: %f\n", empleado[i].salario);
			printf("sexo:  %d \n", empleado[i].sexo);
		}
	}
	
	printf("\n ----------------------------------------");
	printf("\nEl empleado con el sueldo menor es: ");
	for (i=0;i<Nemp;i++){
		if (i==SmenorF){
			printf("clave (numerica): %d\n", empleado[i].clave);
			printf("nombre: %s\n", empleado[i].nombre);
			printf("edad (numerico): %d\n", empleado[i].edad);
			printf("salario: %f\n", empleado[i].salario);
			printf("sexo:  %d \n", empleado[i].sexo);
		}
	}		
	return 0;
}

//Funciona bien

/*Observaciones
El empleado con el sueldo mayor es: clave (numerica): 123
nombre: Abigael
edad (numerico): 20
salario: 9999.000000 --> Demaciados digitos después del punto.
sexo:  1  --> Sería mejor que sea una cadena y no un número.
*/

//Revisado por Abigael Arjona. Equipo: Programación estructurada.
