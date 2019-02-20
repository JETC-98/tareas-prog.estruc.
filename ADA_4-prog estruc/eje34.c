#include <stdio.h>

int main () 
{
	int a;
	float b;
	a=0;
	while (a<100)
	{
		printf ("Escriba un numero ");
		scanf ("%f",&b);
		printf("El numero que escribiste fue: %f \n",b);
		a++;
	}
}
