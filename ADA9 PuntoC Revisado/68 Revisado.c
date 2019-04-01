/*68. E.P. que utilice dos estructuras una llamada promedio que tendr�
los siguientes miembros: Parcial1, Parcial2 y Proyecto; y otro llamada
alumno que tendr� los siguientes miembros: nombre, sexo y equipo;
anidar la estructura promedio en la estructura alumno, leer los datos
para los N alumnos de Programaci�n Estructurada, calcular el
promedio de cada uno e imprimir los datos del alumno con el mejor
promedio del grupo. 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int Nalum, i,PromMayorF;
	float PromFinal, PromMayor=0;
	printf("�Cuantos alumnos? \n");
	scanf("%d", &Nalum);
	struct promedio{
		float Parcial;
		float Parcial2;
		float Proyecto;
	};
	struct alumno{
		char nombre[20];
		char sexo[20];
		char equipo[20];
		struct promedio prom;
	}alumnos[Nalum];
	for (i=0;i<Nalum;i++){
		PromFinal = 0;
		printf("\n ----------------------------------------");
		printf("\nNombre: ");
		scanf("%s", &alumnos[i].nombre);
		printf("Sexo: \n");
		scanf("%s", &alumnos[i].sexo);
		printf("Equipo: \n");
		scanf("%s", &alumnos[i].equipo);
		printf(" Calificaciones(3):\n ");
		scanf("%f %f %f", &alumnos[i].prom.Parcial, &alumnos[i].prom.Parcial2, &alumnos[i].prom.Proyecto);
		
		PromFinal = (alumnos[i].prom.Parcial + alumnos[i].prom.Parcial2 + alumnos[i].prom.Proyecto)/3;
		if (PromFinal>PromMayor){
			PromMayor=PromFinal;
			PromMayorF=i;
		}
		
	}
	printf("\n ----------------------------------------");
	printf("El alumno con el promedio mayor es: \n");
	for (i=0;i<Nalum;i++){
		if (PromMayorF==i){
			printf("Nombre: %s\n", alumnos[i].nombre);
			printf("sexo: %s\n", alumnos[i].sexo);
			printf("equipo: %s\n", alumnos[i].equipo);
			printf("calificaciones: %f %f %f\n", alumnos[i].prom.Parcial, alumnos[i].prom.Parcial2, alumnos[i].prom.Proyecto);
			printf("Promedio: %f \n", PromMayor);
		}
	}
	printf("\n ----------------------------------------");
	return 0;
}

//Funciona bien

/*Observaciones
Nombre: Alejandro
{Sexo:
Hombre
Equipo:
Pr } --> Ser�a bueno que el preguntar sea en la misma l�nea (como est� en nombre).
 Calificaciones(3):
 99
100
98

 ----------------------------------------El alumno con el promedio mayor es: -->Ser�a mejor si estuviese un poco m�s centrado.
Nombre: Alejandro
{sexo: Hombre
equipo: Pr
calificaciones: 99.000000 100.000000 98.000000
Promedio: 99.000000} --> Algo sin real importancia, pero que lo har�a m�s vistoso, es cuidar el uso de may�sculas, y el no imprimir tantos digitos despu�s del punto.
*/

//Revisado por Abigael Arjona. Equipo: Programaci�n estructurada.
