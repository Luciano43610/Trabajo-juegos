#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int numSecreto=0, numIngresado=0, mayor=0, menor=0, puntaje=10;
    int i=1;
    srand(time(NULL));
    numSecreto=(rand()%999)+1;
    menor=1;
    mayor=999;
    for(i=1; i<11; i++){
        printf("Intento numero [%d]: ", (i), numIngresado);
        scanf("%d", &numIngresado);
        if(numIngresado<numSecreto){
            printf("\nEl numero ingresado es menor. \nNUEVO RANGO : %d - %d\n\n", numIngresado, mayor);
            printf("----------------------------------------------------------------------------------\n\n");
            menor=numIngresado;
            puntaje--;
			}
			if(numIngresado>numSecreto){
            printf("\nEl numero ingresado es mayor. \nNUEVO RANGO : %d - %d\n\n", menor, numIngresado);
            printf("----------------------------------------------------------------------------------\n\n");
              mayor=numIngresado;
            puntaje--;
        }
        if(numIngresado==numSecreto){
            printf("Acertaste! Puntaje obtenido: %d", puntaje);
            i=11;
