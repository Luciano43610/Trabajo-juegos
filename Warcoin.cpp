/*El jugador ingresa la cantidad mínima y la cantidad máxima de monedas que se puede
sacar en cada turno.
Luego de realizado esto, la computadora elegirá un valor al azar entre 10 y 50,
que representará.
La cantidad inicial de monedas que tendrá la pila.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){

	int rangoMin,rangoMax,num,azar,retUsu,cantMonedas=0;
	int retPc;

	printf("\t\t ======= WARCOIN ======= ");
	printf("\nIngrese la cantidad minima de monedas que se pueden retirar:");
	scanf("%d", &rangoMin);
	printf("Ingrese la cantidad maxima de monedas que se pueden retirar:");
	scanf("%d", &rangoMax);
    system("pause");
	system("cls");


	printf(" \nWARCOIN \t\n ======= ");
    //printf("\nLa cantidad minima de monedas que se pueden retirar: %d",rangoMin);
	//printf("\nLa cantidad maxima de monedas que se pueden retirar: %d",rangoMax);
	//Genera numero entre el 10 y el 50
	srand(time(NULL));
	num=(rand()%40)+11;
	//Genera un numero, que puede ser el 1 o el 2, que nos indicara quien comenzara
	srand(time(NULL));
	azar=(rand()%2)+1;
	printf("\nInicia la partida ==> ");
    cantMonedas=num;
