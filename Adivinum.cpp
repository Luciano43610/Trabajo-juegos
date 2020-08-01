#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void separar(int n, int &s1, int &s2, int &s3, int &s4);

main(){
int n,numAleatorio,numIngresado,numMismaPos=0, numIgual=0;
int i=1,s1=0,s2=0,s3=0,s4=0;
int n1=0, n2=0,n3=0,n4=0;
int puntuacion=10;
srand(time(NULL));
printf("\n***********************************\n");
printf("\nBienvenido al juego Adivinum\n");
printf("\n***********************************\n");
printf("\n____________________________________________\n");
printf("\nPresione una tecla para empezar a jugar\n");
printf("\n____________________________________________\n");
system("Pause");
system ("cls");
do{
numAleatorio=(rand()%9000)+1000;
//printf("Numero generado: %d\n", numAleatorio);
separar(numAleatorio,s1,s2,s3,s4);

}while(s1==s2 || s1==s3 || s1==s4 || s2==s3 || s2==s4 || s3==s4||
s1==0 || s2==0 || s3==0 || s4==0);
//printf("Cifras de un numero valido %d, %d, %d,%d", s1,s2,s3,s4);

for(int i=1; i<11; i++){
	printf("\n\nIntento numero *%d*: ", i);
	scanf("%d",&numIngresado);
	if(numIngresado>=1000 && numIngresado<10000){ //1000^9999
		separar(numIngresado,n1,n2,n3,n4);
		if(s1==n1){
			numMismaPos++;
		}
		if(s2==n2){
			numMismaPos++;
		}
		if(s3==n3){
			numMismaPos++;
		}
		if(s4==n4){
			numMismaPos++;
		}
		
		if(s1==n1 || s2==n1 || s3==n1 || s4==n1){
			numIgual++;
		}
		if(s1==n2 || s2==n2 || s3==n2 || s4==n2){
			numIgual++;
		}
		if(s1==n3 || s2==n3 || s3==n3 || s4==n3){
			numIgual++;
		}
		if(s1==n4 || s2==n4 || s3==n4 || s4==n4){
			numIgual++;
		}
	printf("\nNumeros ingresados iguales con la misma posicion: %d",numMismaPos);
	printf("\nNumeros ingresados iguales %d",numIgual);
	if(numMismaPos==4){
		printf("\nGano la partida\nSu puntuacion es:%d",puntuacion);
		i=11;
	}
	else{
		puntuacion--;
	}
	if(puntuacion==0){
		printf("\n\n**********************************************\n\n");
		printf("\nPerdiste que lastima, vuelve a intentarlo\n");
		printf("\n\nEl numero es: %d", numAleatorio);
		printf("\n\n**********************************************\n\n");
	}
	numIgual=0;
	numMismaPos=0;
	}
	else{
		printf("\nEl numero ingresado no es de 4 cifras.");
		i--;
	}
}
	}
void separar(int n, int &s1, int &s2, int &s3, int &s4){
	s1=n/1000;
	s2=(n-s1*1000)/100;
	s3=(n-(s1*1000+s2*100))/10;
	s4=(n-(s1*1000+s2*100+s3*10));
}


