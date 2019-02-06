#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c,l,p;
	float r;
	/*entrada de datos*/
	printf ("Introduzca cantidad de libros a comprar \n");
	scanf ("%d",&l);
	printf ("\nIntroduzca cantidad de cuadernos a comprar\n");
	scanf("%d",&c);
	printf("\nIntroduzca cantidad de plumas a comprar\n");
	scanf ("%d",&p);
	/*proceso*/
	r=(l*100)+(c*15.5)+(p*2.35);
	/*Salida de datos*/
	printf ("\nEl monto total a pagar es de: %.2f",r);
	return 0;
}

