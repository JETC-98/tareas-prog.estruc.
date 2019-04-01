#include<stdio.h>
#include<stdlib.h>
#include <string.h>
FILE *fd;

struct datosPersonales
{
	char nombre[40];
	char par1[6];
	char par2[6];
	char proy[6];
	char prom[6];
}datos;

int crear();
int agregar();
int visualizar();

int main() 
{
	int opc;
	do
	{
		printf ("**OPCIONES**\n");
		printf("\n1.-Crear archivo");
		printf("\n2.-Agregar contacto");
		printf("\n3.-Visualizar toda la informacion");
		printf("\n4.-Salir");
		printf("\nEscriba la  opcion que quiere usar: ");
		scanf("%d",&opc);
		
		switch(opc)
		{
		case 1:
			crear();
			break;
		case 2:
			agregar();
			break;
		case 3:
			visualizar();
			break;
		}
	} while(opc!=4);
	return 0;
}

int crear()
{
	char direccion[] = "C:\\prueba\\Grupo2_LIS.txt";
	char rpt;
	fd=fopen(direccion,"w");
	if(fd==NULL)
	{
		printf("Error al tratar de crear el archivo");
		return 1;
	}
	printf("\nArchivo creado\n");
	fprintf(fd,"\t.:Directorio\n");
	
	do
	{
		fflush(stdin);
		printf("\nNombre: ");
		gets(datos.nombre);
		printf("\nIngrese calificacion del parcial 1: ");
		gets(datos.par1);
		printf("\nIngrese calificacion del parcial 2: ");
		gets(datos.par2);
		printf ("\nIngrese calificacion del proyecto: ");
		gets(datos.proy);
		printf ("\nIngrese el promedio general: ");
		gets (datos.prom);
		
		fprintf(fd,"\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nParcial 1: ");
		fwrite(datos.par1,1,strlen(datos.par1),fd);
		fprintf(fd,"\nParcial 2: ");
		fwrite(datos.par2,1,strlen(datos.par2),fd);
		fprintf(fd,"\nProyecto: ");
		fwrite(datos.proy,1,strlen(datos.proy),fd);
		fprintf(fd,"\nPromedio: ");
		fwrite (datos.prom,1,strlen(datos.prom),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	} while(rpt=='s');
	return 0;
}

int agregar()
{
	char direccion[] = "C:\\prueba\\Grupo2_LIS.txt";
	char rpt;
	fd=fopen(direccion,"at");
	if(fd==NULL)
	{
		printf("Error al tratar de abrir el archivo");
		return 1;
	}
	printf("\n**Agregar Contactos**\n");
	
	do
	{
		fflush(stdin);
		printf("\nNombre: ");
		gets(datos.nombre);
		printf("\nIngrese calificacion del parcial 1: ");
		gets(datos.par1);
		printf("\nIngrese calificacion del parcial 2: ");
		gets(datos.par2);
		printf("\nIngrese calificacion del proyecto: ");
		gets(datos.proy);
		printf("\nIngrese el promedio general: ");
		gets(datos.prom);
		
		fprintf(fd,"\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nParcial 1: ");
		fwrite(datos.par1,1,strlen(datos.par1),fd);
		fprintf(fd,"\nParcial 2: ");
		fwrite(datos.par2,1,strlen(datos.par2),fd);
		fprintf(fd,"\nProyecto: ");
		fwrite(datos.proy,1,strlen(datos.proy),fd);
		fprintf(fd,"\nPromedio: ");
		fwrite(datos.prom,1,strlen(datos.prom),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	} while(rpt=='s');
	return 0;
}

int visualizar()
{
	int c;
	char direccion[] = "C:\\prueba\\Grupo2_LIS.txt";
	fd=fopen(direccion,"r");
	
	if(fd== NULL)
	{
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	while((c=fgetc(fd))!=EOF)
	{
		if(c=='\n')
		{
			printf("\n");
		}
		else 
		{
			putchar(c);
		}
	}
	return 0;
}
