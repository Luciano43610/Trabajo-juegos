#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>

void MostrarPalabra();
void IniciaJuego();
void IngresoLt(char letra);
void muestra(int v);
void mostrarVidas(int v);
char palabra[30];
char palabraCompleta[30];
char letraErronea[30];
int longitud=0, puntos=0, vidas=0, intentos=1, contador=0;

main(){
    char letraI, letra;
    int i=0, puntajeObtenido=0;
    int c=0, contador=0;
    longitud=0;
    intentos=1;
    puntos=0;
    vidas=0;
    printf("~~~~~~~INGRESE 0 PARA TERMINAR~~~~~~~\n\n\nIngrese la palabra letra por letra (LETRAS MAYUSCULAS): \n");
    _flushall();
    while(letraI!='0'){
    scanf("%c", &letraI);
        if(letraI<'A' || letraI>'Z' || letraI=='0'){
            if(letraI=='0'){
                printf("\nFin de la carga de la palabra.\nLongitud de la palabra: %d\n\n", longitud);
            }
            else{
                _flushall();
                printf("Ingrese un caracter valido.\n");
            }
        }
        else{
            if(letraI!='0'){
                _flushall();
                palabra[longitud]=letraI;
                longitud++;
            }
        }
        c++;
    }
    system("pause");
    system("cls");
    IniciaJuego();
    while(contador<11){
        _flushall();
        printf("Intento N°: %d\n", intentos);
        printf("Ingrese la letra: ");
        scanf("%c",&letra);
        IngresoLt(letra);
        if(puntos==longitud){
            contador=12;
            puntajeObtenido=(50-(2*vidas));
            printf("\n\nPuntos obtenidos: %d", puntajeObtenido);
            printf("\n*GANO*");

        }
        printf("\n_______________________________________________________________\n\n");
    }
}


void IniciaJuego(){
    for(int i=0; i<longitud; i++){
        palabraCompleta[i]='_';
    }
    MostrarPalabra();
    printf("\n\n");
}

void IngresoLt(char letra){
    int vida=0;
    bool coincide=false;
    if(letra<'A' || letra>'Z'){
            _flushall();
            letra=letra-32;
    }
    for(int i=0; i<longitud; i++){
        if(palabra[i]==letra){
        	coincide = true;
        	if(palabraCompleta[i]=='_'){
           		_flushall();
           		palabraCompleta[i]=letra;
	           	puntos++;
	           	intentos++;
        	}
		}
    }
    if(!coincide){
        vidas++;
        intentos++;
        letraErronea[vidas]=letra;
        for(int i=0; i<vidas; i++){
            if(letraErronea[vidas]==letraErronea[i]){
                vidas--;
                contador--;
            }
        }

    }
    mostrarVidas(vidas);
    MostrarPalabra();
}

void MostrarPalabra(){
    if(vidas==11){
        printf("\n\n\t\t\tFIN DEL JUEGO");
    }
    else{
        printf("Adivina: ");
        for(int i=0; i<longitud; i++){
            _flushall();
            printf("%c ", palabraCompleta[i]);
        }
    }
}

void mostrarVidas(int v){
    switch(v){
        case 1:
		_flushall();
		printf("\nVidas: %d \n*CABEZA*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 2:
		_flushall();
		printf("\nVidas: %d \n*CABEZA - TRONCO*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 3:
		_flushall();
		printf("\nVidas: %d \n*CABEZA - TRONCO -  BRAZO IZQUIERDO*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 4:
		_flushall();
		printf("\nVidas: %d \n*CABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 5:
		_flushall();
		printf("\nVidas: %d \n*CABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 6:
		_flushall();
		printf("\nVidas: %d \n*CABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA - PIERNA DERECHA*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 7:
		_flushall();
		printf("\nVidas: %d \nCABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA - PIERNA DERECHA\nMANO IZQUIERDA*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 8:
		_flushall();
		printf("\nVidas: %d \nCABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA - PIERNA DERECHA\nMANO IZQUIERDA - MANO DERECHA*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 9:
		_flushall();
		printf("\nVidas: %d \nCABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA - PIERNA DERECHA\nMANO IZQUIERDA - MANO DERECHA - PIE IZQUIERDO*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 10:
        _flushall();
		printf("\nVidas: %d \nCABEZA - TRONCO -  BRAZO IZQUIERDO - BRAZO DERECHO - PIERNA IZQUIERDA - PIERNA DERECHA\nMANO IZQUIERDA - MANO DERECHA - PIE IZQUIERDO - PIE DERECHO*", (11-vidas));
        printf("\nLetras erroneas: ");
        for(int i=0; i<=vidas;i++){
            printf("%c - ", letraErronea[i]);
        }
        printf("\n");
        break;

        case 11:
        _flushall();
        printf("\nVidas: %d\nPERDIO (AHORCADO :'c) \nSUERTE PARA LA PROXIMA.\nLa palabra oculta era: ", (11-vidas));
        for(int i=0; i<longitud; i++){
            printf("%c ", palabra[i]);
        }
        printf("\nPuntos obtenidos: 0");
        system("pause");
        break;
    }
}
