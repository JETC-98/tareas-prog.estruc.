
/*Proyecto final (Nombre pendiente)
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
	
	pantalla_de_presentacion();
	
	pantalla_principal();
	
	pantalla_sintomas();
	
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
void pantalla_de_presentacion(){//Imprimir la pantalla de presentaci�n
	
	color(11);//Se escoge el color
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
	printf("T�tulo del proyecto.\n");
	printf("T�tulo del proyecto.\n");
	printf("T�tulo del proyecto.\n");
	printf("T�tulo del proyecto.\n");
	printf("T�tulo del proyecto.\n");
	
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
	printf("|_____||_||_|___|  |_|  |_____||_|_|_||_____||_____|\n");
	
	printf("\nIdentifique en la lista siguiente el s�ntoma que padece e introduzca el n�mero correspondiente.\n\n");
	
	getch();
	
	system("cls");//Limpiar pantalla
	
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
