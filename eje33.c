#include <stdio.h>

int main ()
{
	float a;
	int b;
	b=0;
	while (b<10)
	{
		printf ("Introduzca un numero ");
		scanf ("%f",&a);
		if (a>100)
		{
			printf ("EL numero %.2f es mayor a 100 \n",a);
		}
		b++;
	}
}
