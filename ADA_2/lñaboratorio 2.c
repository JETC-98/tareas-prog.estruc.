#include <stdio.h>
#include <math.h>
#include <conio.h>

float fahrenheit(float c)
{
	float f;
	f=1.8*c+32;
	return f;
}
float fahren_centi (float f)
{
	float c;
	c=(f-32)*(5.0/9.0);
	return c;
}
float kelvin (float c)
{
	float k;
	k=c+273;
	return k;
}
float kelvin_centi (float k)
{
	float c;
	c=273-k;
	return k;
}
int main () 
{
	float f,c,k;
	int opc;
	printf ("Escriba el numero de la opcion que desea realizar \n");
	printf ("1.-centigrados a fahrenheit \n");
	printf ("2.-fahrenheit a centigrados \n");
	printf ("3.-centigrados a kelvin \n");
	printf ("4.-kelvin a centigrados  \n");
	scanf ("%d",&opc);
	
	switch (opc)
	{
	case 1:
		printf ("ingrese el valor en centigrados");
		scanf ("%f",&c);
		f=fahrenheit(c);
		printf ("La temperatura en fahrenheit es de %.2f",f);
	case 2:
		printf ("ingrese el valor en fahrenheit");
		scanf ("%f",&f);
		c=fahren_centi(f);
		printf ("La temperatura en centigrados es de %.2f",c);
	};
}
