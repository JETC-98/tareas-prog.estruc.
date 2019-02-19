#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int Num_mov; 
	int i; 
	int w=0; 
	int k=0;
	float Direc;
	int x=0;
	int y=0;
	
	
	do{
		printf("Cuantos movimientos va an dar el robot: ");
		scanf("%d",&Num_mov);
		if(Num_mov>=0){
			printf("Direccion valida\n");
			printf("Implemente tab para avanzar");
			k=1;
		}else{
			printf("No puedes ingresar negativos\n");
			printf("Implemente tab para avanzar");
		}
		
		getchar();
		getchar();
		system("cls");
		
	} while(k==0);
	
	
	if(Num_mov>0){
		
		for(i=0; i<Num_mov; i++){
			
			do{
				
				
				system("cls");
				printf("\n**************************************");
				printf("\n    6 :Aumenta coordenada x por 1\n");
				printf("\n    4 :Reduce coordenada x por 1\n");
				printf("\n    8 :Aumenta coordenada y por 1\n");
				printf("\n    2 :Reduce coordenada y por 1\n");
				printf("\n*************************************");
				
				printf("\nMovimiento numero: %d de %d que hace el robot\n",i+1,Num_mov);
				
				printf("\nDime para donde se mueve el robot: ");
				scanf("%f",&Direc);
				
				if(Direc ==6){
					x=(x+1);
					w=1;
					printf("Implemente tab para avanzar");
				}else if(Direc==4){
					x=(x-1);
					w=1;
					printf("Implemente tab para avanzar");
				}else if(Direc==8){
					y=(y+1);
					w=1;
					printf("Implemente tab para avanzar");
				}else if(Direc==2){
					y=(y-1);
					w=1;
					printf("Implemente tab para avanzar");
				}else printf("Direccion no valida, implemente tab para avanzar");
				
				getchar();
				getchar();
				system("cls");
				
				
			} while(w==0);
			
			w=0;
			
			
		}
	}else{
		
		printf("No hay movimiento");
		
	}
	
	
	
	
	printf("\nLa cordenada del robot es: x=%d  y=%d",x , y);
	
	
	
	
	return 0;
}

