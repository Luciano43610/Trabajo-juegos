/*El jugador ingresa la cantidad mínima y la cantidad máxima de monedas que se puede 
sacar en cada turno. 
Luego de realizado esto, la computadora elegirá un valor al azar entre 10 y 50, 
que representará. 
La cantidad inicial de monedas que tendrá la pila.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	
	int ingre1,ingre2,num,azar,retUsu;       
	
	printf(" WARCOIN \t\n ======= ");
	printf("\nIngrese la cantidad Minima de Monedas que se pueden Retirar:");
	scanf("%d", &ingre1);
	printf("Ingrese la cantidad Maxima de Monedas que se pueden Retirar:");	 
	scanf("%d", &ingre2);
	system("cls");	
	system("pause");
	
	if(ingre2>ingre1){
		printf(" WARCOIN \t\n ======= ");
		printf("\nLa cantidad Minima de Monedas que se pueden Retirar:%d",ingre1);
		printf("\nLa cantidad Maxima de Monedas que se pueden Retirar:%d",ingre2);
		srand(time(NULL));
	
		num=(rand()%49)+10;
		
		printf("\nLa cantidad inicial de monedas en la pila es:%d",num);
		srand(time(NULL));
		azar=(rand()%2)+1;
		printf("\nAleatoriamente se Eligira quien inicia el juego es ==>");
		
			if(azar==1){
				printf("\tEl Usuario.");
				do {
				scanf("%d",retUsu);	
				}
				while(retUsu>=ingre1 || retUsu<=ingre2);{
				printf("\nIngresa la cantidad de monedas a eliminar:%d",retUsu);	
				}
				
				
		}
			else{
				printf("\tLa Computadora");
		}
	

	}
}
