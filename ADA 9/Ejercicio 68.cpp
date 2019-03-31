#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*	Ejercicio: ADA 9, Ejercicio 68.
Descripción:  E.P.  que utilice  dos estructuras una  llamada  promedio  que tendrá
los siguientes miembros:Parcial1, Parcial2 y Proyecto; y otro llamada
alumno  que  tendrá  los  siguientes  miembros:  nombre,  sexo y equipo;
anidar  la estructura  promedio en  la  estructura  alumno,  leer los  datos para
los N alumnos   de   Programación   Estructurada, calcular el promedio de  cada  uno
e imprimirlos  datos  del  alumno con el  mejor promedio del grupo.
Fecha: 1 Abril 2019
Versión: 1.0
*/

//NOTA: En caso de dar error, copiar el código y pegarlo en una plantilla nueva de "Programa C en Blanco"

int n; //Variable para la cantidad de alumnos
int i; //Variable para contador
float tron=0;
char nombre_tron[20];
char sexo_tron[20];
char equipo_tron[20];

//Declarando la estructura promedio
struct promedio{
	float parcial_1;
	float parcial_2;
	float proyecto;
};

//Proceso
int main() {
	
	//Se pregunta la cantidad de alumnos
	printf("Introduzca la cantidad de alumnos que hay en programación estructurada. ");
	scanf ("%i",&n);
	system("cls");//Se limpia pantalla
	
	float promed[n];//Vector para los promedios de cada alumno
	
	//Declarando la estructura alumno y anidando la estructura promedio
	struct alumno{
		char nombre[20];
		char sexo[20];
		char equipo[20];
		struct promedio prom;
	}alumnos[n];
	
	
	//Estructura de repetición para obtener los datos de los alumnos
	for(i=0;i<n;i++){
		printf("\nAlumno %i",i+1);
		fflush(stdin);
		
		//Datos del alumno
		printf("\nIntroduzca su nombre. ");
		gets(alumnos[i].nombre);
		printf("\nIntroduzca su sexo. ");
		gets(alumnos[i].sexo);
		printf("\nIntroduzca su equipo. ");
		gets(alumnos[i].equipo);
		
		//Calificaciones del alumno
		printf("\nIntroduzca su calificación del parcial 1. ");
		scanf("%f",&alumnos[i].prom.parcial_1);
		printf("\nIntroduzca su calificación del parcial 2. ");
		scanf("%f",&alumnos[i].prom.parcial_2);
		printf("\nIntroduzca su calificación del proyecto. ");
		scanf("%f",&alumnos[i].prom.proyecto);
		
		//Se obtiene el promedio de cada alumno
		promed[i] = (alumnos[i].prom.parcial_1 + alumnos[i].prom.parcial_2 + alumnos[i].prom.proyecto)/3;
		
	}
	
	//Estructura para obtener el mejor promedio
	for(i=0;i<n;i++){
		if(promed[i] > tron){
			//Se asignan los valores a las variables
			tron = promed[i];
			strcpy(nombre_tron, alumnos[i].nombre);
			strcpy(sexo_tron, alumnos[i].sexo);
			strcpy(equipo_tron, alumnos[i].equipo);
		}
	}
	
	//Salida
	system("cls");//Se limpia pantalla
	printf("\nEl alumno con el mejor promedio del grupo fue: ");
	printf("\nNombre: %s",nombre_tron);
	printf("\nSexo: %s",sexo_tron);
	printf("\nEquipo: %s",equipo_tron);
	printf("\nPromedio: %.2f",tron);
	
	return 0;
}
 
