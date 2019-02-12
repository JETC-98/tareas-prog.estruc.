#include <stdio.h>

int main () 
{
	int mcont,contpos,contneg;
	float d;
	mcont=0;
	contpos=0;
	contneg=0;
	do
	{
		printf ("escriba un numero ");
		scanf ("%f",&d);
		if (d<0)
		{
			contneg++;
		}
		if (d>0)
		{
			contpos=contpos+1;
		}
		if (d==0)
		{
			printf ("El 0 no es negativo ni positivo introduzca otro numero \n");
			mcont--;
		}
		mcont++;
	} while(mcont<5);
	printf ("Hubo %d positivos y %d negativos",contpos,contneg);
}
