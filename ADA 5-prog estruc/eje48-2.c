#include <stdio.h>
#include <string.h>
#define mini(x) (x+1)
int main () 
{
	int count,hortencia,anacreta,nulo;
	char voto[9];
	count=0;
	anacreta=0;
	hortencia=0;
	printf ("**Votaciones Srita. Simpatia** \n");
	for (count=0;count<4;count++)
	{
		printf ("Escriba hortencia o anacreta de acuerdo a su preferencia \n");
		printf ("AVISO:Si escribe cualquier otra cosa su voto se tomara como nulo \n");
		scanf ("%s",voto);
		if (strcmp(voto,"hortencia")==0)
		{
			hortencia=mini(hortencia);
		}
		else if (strcmp(voto,"anacreta")==0)
		{
			anacreta=mini(anacreta);
		}
		else
			nulo++;
	}
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
