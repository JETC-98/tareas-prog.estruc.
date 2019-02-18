#include <stdio.h>
#define t 3
int main(int argc, char *argv[]) {
	char nombre[20];
	
	printf ("Escribe el nombre del empleado");
	for (i=1;i<t;i++){
		printf ("Escribe el nombre del empleado");
		scanf ("%c",&nombre[i]);
		printf ("\nSalario:");
		scanf ("%i",&s);	
		printf ("\nAntigüedad:");
		scanf ("%i",&a);
		if (a<4){
			ss[i]=s+(s*0.01);}
				else if (a<7){
					ss[i]=s+(s*0.03);}
				else if (a<10){
					ss[i]=s+(s*0.05);}
				else if (a>9){
					ss[i]=s+(s*0.07);}
				}
	for (j=1;j<t;j++){
		printf ("Empleado %c \t salario %d",nombre[j],ss[j]);
	}
		return 0;
}

