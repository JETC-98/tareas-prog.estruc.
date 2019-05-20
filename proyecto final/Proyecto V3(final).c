/*Proyecto final (Cat�logo de Medicinas)
El �Proyecto� tiene como objetivo informar acerca de medicamentos de venta libre o sin prescripci�n m�dica.
*/

//Librerias
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

//Declaraci�n de funciones
void color(char color);
void pantalla_de_presentacion();
void pantalla_principal();
void pantalla_medicinas();
void pantalla_sintomas();
void pantalla_alergias();
void pantalla_salida();

//Funci�n principal
int main() {
	
	int s,a,vacio=0;
	//vector sintomas
	char sintomas [6][30]={"1.- DOLOR DE CABEZA",//vector de sintomas
		"2.- INSOMNIO",
		"3.- TOS",
		"4.- CONGESTION NASAL",
		"5.- MALESTAR ESTOMACAL",
		"6.-MAREO",
	};
	//vector alergias
	char alergias [13][50]={"1.-Parecetamol",
		"2.-Acido acetilsalicilico(aspirina)",
		"3.-Ibuprofeno",
		"4.-Naproxeno",
		"5.-Difenhidramina",
		"6.-Succinato de doxilamina",
		"7.-Guaifenesina",
		"8.-Mentol",
		"9.-Dextrometorfano",
		"10.-Loratadina",
		"11.-Oximetazolina",
		"12.-subsalicilato de bismuto",
		"13.-Dimenhidranato",
	};
	//vector medicinas
	char medicinas[15][40]={"Paracetamol 500Mg 10 tabletas:$17",
		"Aspirina 40 tabletas:$28",
		"Advil oral 20 capsulas:$110",
		"Naproxeno 20 tabletas:$42",
		"Difenhidramina 20 tabletas:$35",
		"Unisom SleepTabs 32 tabletas:$152",
		"Dextrometorfa 120ml:$38",
		"Pastillas vick sabor fresa:$18",
		"Jarabe vick 120ml:$115",
		"Loratadina 10 tabletas:$91",
		"Afrin lub adulto spray 20ml:$63",
		"Pepto-bismol 236ml:$95",
		"Subsalcilato de bismuto 24 tabletas:$41",
		"Dimenhidrinato 24 tabletas:$34",
		"Dramamine 24 tabletas:$115",
	};
	int relaciones [16][2]={1,1,
		1,2,
		1,3,
		1,4,
		2,5,
		2,6,
		3,7,
		3,8,
		3,9,
		4,10,
		4,11,
		5,12,
		5,12,
		6,13,
		6,0,
	};
	
	pantalla_de_presentacion();
	
	pantalla_principal();
	
	pantalla_sintomas();
	//impresion de sintomas
	for (int i=0;i<6;i++)
	{
		printf ("%s",sintomas[i]);
		printf ("\n");
	}
	printf ("\nSeleccione el numero del sintoma que padece. ");
	scanf  ("%d",&s);//variable para guardar el s�ntoma. 
	
	if (s<1 || s>6)
	{
		printf ("numero no valido intente otra vez\n");
		do
		{
			scanf ("%d",&s);
		} while(s<1 || s>6);
	}

	system("cls");//Limpiar pantalla
	
	pantalla_alergias();
	//impresion de alegias
	for (int i=0;i<13;i++)
	{
		printf ("%s",alergias[i]);
		printf ("\n");
	}
	printf ("\nSeleccione el numero de la alergia que tiene. ");
	scanf  ("%d",&a);//variable para guardar el s�ntoma.
	if (a<1 || a>13)
	{
		printf ("numero no valido intente otra vez\n");
		do
		{
			scanf ("%d",&a);
		} while(a<1 || a>13);
	}
	
	system("cls");//Limpiar pantalla
	
	pantalla_medicinas();
	printf ("\n");
	for (int i=0;i<15;i++)
	{
		for (int j=0;j<1;j++)
		{
			if (relaciones[i][j]==s && relaciones[i][j+1]!=a)
			{
				vacio++;
				printf ("	%d .- %s \n",vacio,medicinas[i]);
				
			}
		};
	}
	if (vacio==0)
	{
		printf ("Lo sentimos no tenemos medicina con que cumpla sus requerimientos");
	}
	
	getch();
	
	system("cls");//Limpiar pantalla
	
	pantalla_salida();
	
	return 0;
}

//Funciones
void color(char color){//Cambio de color
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
void pantalla_de_presentacion(){//Imprimir la pantalla de presentaci�n
	
	color(11);
	printf("  ____________________________________________________________________________________\n");
	printf(" |                                                                        _           |\n");
	printf(" |   _____                                                               /_/          |\n");//Primera l�nea
	printf(" |  | ___ | _____  _____  _____  _____  _____  _____  _____  _____  _  _____  _____   |\n");//Segunda l�nea
	printf(" |  |  ___||  ___||  _  || ___ ||  ___||____ ||     ||____ ||  ___|| ||  _  ||   | |  |\n");//Tercera l�nea
	printf(" |  | |    | |    | |_| ||___  || |    | ___ || | | || ___ || |___ | || |_| || | | |  |\n");//Cuarta l�nea
	printf(" |  |_|    |_|    |_____| ___| ||_|    |_____||_|_|_||_____||_____||_||_____||_|___|  |\n");//Quinta l�nea
	printf(" |                       |_____|                                                      |\n");//Sexta l�nea
	printf(" |                                                                                    |\n");
	printf(" | _____           _                           _                             _        |\n");//Septima l�nea
	printf(" ||  ___| _____  _| |_  _____  _   _  _____  _| |_  _   _  _____  _____     | | _____ |\n");//Octava l�nea
	printf(" || |_   | ____||_   _||  ___|| | | ||  ___||_   _|| | | ||  ___||____ | ___| ||____ ||\n");//Novena l�nea
	printf(" || |___ |____ |  | |  | |    | |_| || |___   | |  | |_| || |    | ___ || ___ || ___ ||\n");//D�cima l�nea
	printf(" ||_____||_____|  |_|  |_|    |_____||_____|  |_|  |_____||_|    |_____||_____||_____||\n");//Onceava l�nea
	printf(" |____________________________________________________________________________________|");
	
	printf("\n");
	printf("  Este es el proyecto final del equipo Programaci�n estructurada.");
	
	printf("\n");
	
	color(10);
	printf("\n  Presione enter para comenzar el programa.");
	getch();
	
	system("cls");//Limpiar pantalla
	
}

void pantalla_principal(){//Imprimir la pantalla principal
	
	color(12);
	printf("                       _\n");
	printf(" ____           _     /_/                                       _\n");
	printf("|  __| _____  _| |_  _____  _     _____  _____  _____          | | _____\n");
	printf("| |   |____ ||_   _||____ || |   |  _  || ___ ||  _  |      ___| || ___ |\n");
	printf("| |__ | ___ |  | |  | ___ || |__ | |_| ||___  || |_| |     | ___ || ____|\n");
	printf("|____||_____|  |_|  |_____||____||_____| ___| ||_____|     |_____||_____|\n");
	printf("                                        |_____|\n");
	printf("                   _\n");
	printf(" _____  _____     | | _  _____  _  _____  _____  _____\n");
	printf("|     || ___ | ___| || ||  ___|| ||   | ||____ || ____|\n");
	printf("| | | || ____|| ___ || || |___ | || | | || ___ ||____ |\n");
	printf("|_|_|_||_____||_____||_||_____||_||_|___||_____||_____|\n");
	
	color(8);
	printf ("\n        ***ADVERTENCIAS***\n");
	printf ("*Sepa qu� est� tomando. Revise la lista de ingredientes y seleccione productos con el menor n�mero de elementos en lista. \n"
			"*Todos los medicamentos se vuelven menos eficaces con el tiempo y deben reemplazarse. Verifique la fecha de vencimiento antes de usar cualquier producto.\n"
			"*Guarde los medicamentos en un lugar seco y fresco. Mantenga todos los medicamentos fuera del alcance de los ni�os.\n"
			"*Las mujeres embarazadas o que amamantan deben hablar con su proveedor antes de tomar cualquier medicamento nuevo.\n");
	
	color(13);
	printf("\n");
	printf("Para iniciar el programa introduzca 1.\n");
	printf("Para salir del programa introduzca 2.\n");
	
	int resp;
	
	scanf("%i",&resp);
	
	if(resp == 2){
		
		system("cls");//Limpiar pantalla
		pantalla_salida();
	}
	
	system("cls");//Limpiar pantalla
	
}

void pantalla_sintomas(){//Imprimir la pantalla de s�ntomas
	
	color(9);
	printf(" _____  _\n");
	printf("|  ___|/_/          _\n");
	printf("| |___  _  _____  _| |_  _____  _____  _____  _____\n");
	printf("|___  || ||   | ||_   _||  _  ||     ||____ || ____|\n");
	printf(" ___| || || | | |  | |  | |_| || | | || ___ ||____ |\n");
	printf("|_____||_||_|___|  |_|  |_____||_|_|_||_____||_____|\n\n");
	
	color(4);
	
}

void pantalla_alergias(){//Imprimir la pantalla de alergias
	
	color(6);
	
	printf(" _____ \n");
	printf("| ___ | _     _____  _____  _____  _  _____  _____\n");
	printf("|  _  || |   | ___ ||  ___|| ___ || ||____ || ____|\n");
	printf("| | | || |__ | ____|| |    |___  || || ___ ||____ |\n");
	printf("|_| |_||____||_____||_|     ___| ||_||_____||_____|\n");
	printf("                           |_____|\n");
	
	
}

void pantalla_medicinas(){//Imprimir la pantalla de medicinas
	
	color(14);
	printf(" _________             _\n");
	printf("|  _   _  | _____     | | _  _____  _  _____  _____  _____\n");
	printf("| | | | | || ___ | ___| || ||  ___|| ||   | ||____ || ____|\n");
	printf("| | | | | || ____|| ___ || || |___ | || | | || ___ ||____ |\n");
	printf("|_| |_| |_||_____||_____||_||_____||_||_|___||_____||_____|\n");
	
	
	
}

void pantalla_salida(){//Imprimir la pantalla de salida
	
	color(3);
	printf(" _____\n");
	printf("|  ___|                     _\n");
	printf("| |___  _____  _     _     | | _____\n");
	printf("|___  ||____ || |   | | ___| ||____ |\n");
	printf(" ___| || ___ || |__ | || ___ || ___ |\n");
	printf("|_____||_____||____||_||_____||_____|\n");
	
	printf("\n");
	
	color(2);
	printf("Gracias por utilizar este programa.");
	
	color(15);
	exit(0);//Se termina el programa
	
}
