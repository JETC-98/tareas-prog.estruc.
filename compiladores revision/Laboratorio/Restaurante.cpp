/*
II. Un restaurante ofrece hamburguesas sencillas, dobles y triples, 
las cuales tienen un costo de $60.00, $80.00 y $100.00, respectivamente. 
La empresa acepta tarjetas de crédito con un cargo adicional de 3% sobre 
la compra. Los clientes pueden hacer su pedido con cualquier cantidad de 
hamburguesas de los tipos que deseen comer.  E.P. para determinar cuánto 
debe pagar cada uno de los N clientes que llegan al establecimiento. También,
 al final del día, se requiere imprimir el monto total de las ventas y 
el total de las comisiones por tarjeta de crédito. 
Utilizar sólo estructuras repetitivas for.

*/

#include <stdio.h>

int main() {
	
	int clientes,pedido,cs,cd,ct,pago,total1,total2,orden,totalventas,comision,sumcom,sumtotalventas;
	comision=0;
	sumcom=0;
	sumtotalventas=0;
	cs=0;
	cd=0;
	ct=0;
	
	int i;
	int x;
	printf("\n Ingrese el numero de clientes que desean ordenar: ");
	scanf("%d",&clientes);
	
	for (i=1;i<=clientes;i++){
		
		printf("\n Cliente %d :",i);
		printf("\n Ingrese la cantidad de hamburguesas a ordenar ");
		printf("\n :");
		scanf("%d",&pedido);
		printf("\n/////////////////////////////////////////");
		printf("\n Ingrese (1)sencilla,(2)doble,(3)triple");
		printf("\n :");
		for(x=1;x<=pedido;x++){
			scanf("%d",&orden);
			if(orden==1){
				cs++;
			}else if(orden==2){
				cd++;
			}else if(orden==3){
				ct++;
			}
			
		}
		total1=((cs*60)+(cd*80)+(ct*100));
		cs=0;
		cd=0;
		ct=0;
		printf("Ingrese el metodo de pago");
		printf("(1)efectivo (2)tarjeta");
		scanf("%d",&pago);
		if(pago==1){
		   total2=total1;
			
		}else 
		   comision=total2*0.03;
		   total2=(total1+comision);
		printf("\n La cantidad a pagar del cliente %d es: $ %d",i,total2);
		sumcom=sumcom+comision;
		comision=0;
		sumtotalventas=sumtotalventas+total2;
		
		
	}
	printf("\n total de clientes: %d",clientes);
	printf("\n total de comisiones con tarjeta: $ %d",sumcom);
	printf("\n total de ventas: $ %d",sumtotalventas);
	
	
	return 0;
}

