/*Proyecto final (Catálogo de Medicinas)
El “Proyecto” tiene como objetivo informar acerca de medicamentos de venta libre o sin prescripción médica.
*/

//Librerias
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

//Declaración de funciones
void color(char color);
void pantalla_de_presentacion();
void pantalla_principal();
void pantalla_medicinas();
void pantalla_sintomas();
void pantalla_alergias();
void pantalla_salida();

//Función principal
int main() {
	
	int s;
	char sintomas [12][30]={"1.- DOLOR DE CABEZA",//vector de sintomas
		"2.- INSOMNIO",
		"3.- TOS",
		"4.- CONGESTION NASAL",
		"5.- DOLOR DE GARGANTA",
		"6.- ALERGIAS",
		"7.- DIARREA",
		"8.- DESHIDRATACION MODERADA",
		"9.- MALESTAR ESTOMACAL",
		"10.-MAREO",
		"11.-ERUCIONES CUTANEAS",
		"12.-ACIDEZ ESTOMACAL"
	};
	
	pantalla_de_presentacion();
	
	pantalla_principal();
	
	pantalla_sintomas();
	//impresion de sintomas
	for (int i=0;i<12;i++)
	{
		printf ("%s",sintomas[i]);
		printf ("\n");
	}
	printf ("\nSeleccione el sintoma que padece. ");
	scanf  ("%d",&s);//variable para guardar el síntoma. 
		
	system("cls");//Limpiar pantalla
	
	pantalla_alergias();
	
	pantalla_medicinas();
	
	pantalla_salida();
	
	return 0;
}

//Funciones
void color(char color){//Cambio de color
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
void pantalla_de_presentacion(){//Imprimir la pantalla de presentación
	
	color(11);
	printf("  ____________________________________________________________________________________\n");
	printf(" |                                                                        _           |\n");
	printf(" |   _____                                                               /_/          |\n");//Primera línea
	printf(" |  | ___ | _____  _____  _____  _____  _____  _____  _____  _____  _  _____  _____   |\n");//Segunda línea
	printf(" |  |  ___||  ___||  _  || ___ ||  ___||____ ||     ||____ ||  ___|| ||  _  ||   | |  |\n");//Tercera línea
	printf(" |  | |    | |    | |_| ||___  || |    | ___ || | | || ___ || |___ | || |_| || | | |  |\n");//Cuarta línea
	printf(" |  |_|    |_|    |_____| ___| ||_|    |_____||_|_|_||_____||_____||_||_____||_|___|  |\n");//Quinta línea
	printf(" |                       |_____|                                                      |\n");//Sexta línea
	printf(" |                                                                                    |\n");
	printf(" | _____           _                           _                             _        |\n");//Septima línea
	printf(" ||  ___| _____  _| |_  _____  _   _  _____  _| |_  _   _  _____  _____     | | _____ |\n");//Octava línea
	printf(" || |_   | ____||_   _||  ___|| | | ||  ___||_   _|| | | ||  ___||____ | ___| ||____ ||\n");//Novena línea
	printf(" || |___ |____ |  | |  | |    | |_| || |___   | |  | |_| || |    | ___ || ___ || ___ ||\n");//Décima línea
	printf(" ||_____||_____|  |_|  |_|    |_____||_____|  |_|  |_____||_|    |_____||_____||_____||\n");//Onceava línea
	printf(" |____________________________________________________________________________________|");
	
	printf("\n");
	printf("  Este es el proyecto final del equipo Programación estructurada.");
	
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
	printf ("*Sepa qué está tomando. Revise la lista de ingredientes y seleccione productos con el menor número de elementos en lista. \n"
			"*Todos los medicamentos se vuelven menos eficaces con el tiempo y deben reemplazarse. Verifique la fecha de vencimiento antes de usar cualquier producto.\n"
			"*Guarde los medicamentos en un lugar seco y fresco. Mantenga todos los medicamentos fuera del alcance de los niños.\n"
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

void pantalla_sintomas(){//Imprimir la pantalla de síntomas
	
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
	
	getch();
	
	system("cls");//Limpiar pantalla
	
}

void pantalla_medicinas(){//Imprimir la pantalla de medicinas
	
	color(14);
	printf(" _________             _\n");
	printf("|  _   _  | _____     | | _  _____  _  _____  _____  _____\n");
	printf("| | | | | || ___ | ___| || ||  ___|| ||   | ||____ || ____|\n");
	printf("| | | | | || ____|| ___ || || |___ | || | | || ___ ||____ |\n");
	printf("|_| |_| |_||_____||_____||_||_____||_||_|___||_____||_____|\n");
	
	getch();
	
	system("cls");//Limpiar pantalla
	
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
