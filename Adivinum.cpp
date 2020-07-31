#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void separar(int n, int &s1, int &s2, int &s3, int &s4);

main(){
int n,numAleatorio,numIngresado;
int i=1,s1,s2,s3,s4;
srand(time(NULL));
numAleatorio=(rand()%9000)+1000;
printf("Numero generado: %d\n", numAleatorio);
do{

separar(numAleatorio,s1,s2,s3,s4);
}while(s1==s2 || s1==s3 || s1==s4 || s2==s3 || s2==s4 || s3==s4||
s1==0 || s2==0 || s3==0 || s4==0);
printf("Cifras de un numero valido %d, %d, %d,%d", s1,s2,s3,s4);

for(int i=1; i<11; i++){
	printf("Intento numero *%d*: ", (i), numIngresado);
	scanf("%d",&numIngresado);
}

		
	}


