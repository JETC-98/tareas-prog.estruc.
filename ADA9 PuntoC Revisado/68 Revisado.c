/*68. E.P. que utilice dos estructuras una llamada promedio que tendrá
los siguientes miembros: Parcial1, Parcial2 y Proyecto; y otro llamada
alumno que tendrá los siguientes miembros: nombre, sexo y equipo;
anidar la estructura promedio en la estructura alumno, leer los datos
para los N alumnos de Programación Estructurada, calcular el
promedio de cada uno e imprimir los datos del alumno con el mejor
promedio del grupo. 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int Nalum, i,PromMayorF;
	float PromFinal, PromMayor=0;
	printf("¿Cuantos alumnos? \n");
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
Pr } --> Sería bueno que el preguntar sea en la misma línea (como está en nombre).
 Calificaciones(3):
 99
100
98

 ----------------------------------------El alumno con el promedio mayor es: -->Sería mejor si estuviese un poco más centrado.
Nombre: Alejandro
{sexo: Hombre
equipo: Pr
calificaciones: 99.000000 100.000000 98.000000
Promedio: 99.000000} --> Algo sin real importancia, pero que lo haría más vistoso, es cuidar el uso de mayúsculas, y el no imprimir tantos digitos después del punto.
*/

//Revisado por Abigael Arjona. Equipo: Programación estructurada.
