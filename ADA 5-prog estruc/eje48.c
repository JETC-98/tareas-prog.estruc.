#include <stdio.h>
#include <string.h>
/*
Nombre del Programa:concurso Srita. Simpatía

Descripción:Se llevará a cabo en la Universidad el concurso Srita. Simpatía.
Existen dos candidatas: Hortencia y Anacreta. E.P. que lea el voto de
los 500 alumnos y que determine e imprima el nombre de la ganadora.
Considerar la posibilidad de votos nulos y empate en el concurso.
 
Versión y fecha:1.0 17/02/2019 
*/
int main () 
{
	/*declaracion de variables*/
	int count,hortencia,anacreta,nulo;
	char voto[9];
	count=0;
	anacreta=0;
	hortencia=0;
	printf ("**Votaciones Srita. Simpatia** \n");
	/*proceso*/
	for (count=0;count<4;count++)
	{
		printf ("Escriba hortencia o anacreta de acuerdo a su preferencia \n");
		printf ("AVISO:Si escribe cualquier otra cosa su voto se tomara como nulo \n");
		scanf ("%s",voto);
		if (strcmp(voto,"hortencia")==0)
		{
			hortencia=hortencia+1;
		}
		else if (strcmp(voto,"anacreta")==0)
		{
			anacreta=anacreta+1;
		}
		else
			nulo++;
	}
	/*salida*/
	if (anacreta<hortencia)
	{
		printf ("La ganadora es Hortencia \n");
	}
	else if (anacreta>hortencia)
	{
		printf ("La ganadora es Anacreta\n");
	}
	else
	{
		printf ("Es un empate\n");
	}
	printf ("%d Hortencia		",hortencia);
	printf ("%d Anacreta",anacreta);
}
