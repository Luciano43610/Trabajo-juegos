#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


main(){
	
	char *palabras[] = {"Compilador", "Entorno", "Computadora", "Estructura", "Seleccion", "Repeticion", "Directiva", "Algoritmo", "Program", "Ejecucion", "Int", "Float", "Char", "Double", 
	"Long", "If", "For", "While", "Return", "Break", "Switch", "Case", "Main", "Include", "Define", "Struct", "Cin"};
	int numero=0, longitud=0;
	srand(time(NULL));
	numero=rand()%27; // generar un numero aleatorio entre 0 y 27
	longitud=strlen(palabras[numero]); // obtengo la longitud de la palabra elegida aleatoriamente
	//fflush(stdin);
	char seleccionado [longitud];
	printf("Logitud: %d\nPalabra: %s\n", longitud, palabras[numero]);
	strcpy(seleccionado, palabras[numero]); //guardo letro por letra de la palabra elegida aleatoriamente
	for(int i=0; i<longitud; i++){
		printf("\n%c", seleccionado[i]);
	}
}
