// 1 maymen 2 adivinum 3 warcoin 4 ahorcadito

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//maymen
void maymen();

//adivinum
void adivinum();
void separar(int n, int &s1, int &s2, int &s3, int &s4);

//warcoin
void warcoin();

//ahorcadito
void ahorcadito();
void MostrarPalabra();
void IniciaJuego();
void IngresoLt(char letra);
void muestra(int v);
void mostrarVidas(int v);
char palabra[30];
char palabraCompleta[30];
char letraErronea[30];
int longitud=0, puntos=0, vidas=0, intentos=1, contador=0,puntajeObtenido=0;

main(){
    int juego=0, seguir=0;

    do{
        printf("1- Maymen\n2- Adivinum\n3- Warcoin\n4- Ahorcadito\n\nIngrese un numero para elegir el juego: ");
        scanf("%d", &juego);
        switch(juego){
        case 1:
        system("cls");
        system("pause");
        system("cls");
        maymen();
        system("pause");
        system("cls");
        printf("\nDesea jugar a otro juego\n SI = 1\n NO = 0\n\n");
        scanf("%d", &seguir);
        system("cls");
        break;

        case 2:
        system("cls");
        system("pause");
        system("cls");
        adivinum();
        system("pause");
        system("cls");
        printf("\nDesea jugar a otro juego\n SI = 1\n NO = 0\n\n");
        scanf("%d", &seguir);
        system("cls");
        break;

        case 3:
        system("cls");
        system("pause");
        system("cls");
        warcoin();
        system("pause");
        system("cls");
        printf("\nDesea jugar a otro juego\n SI = 1\n NO = 0\n\n");
        scanf("%d", &seguir);
        system("cls");
        break;

        case 4:
        system("cls");
        system("pause");
        system("cls");
        ahorcadito();
        system("pause");
        system("cls");
        printf("\nDesea jugar a otro juego\n SI = 1\n NO = 0\n\n");
        scanf("%d", &seguir);
        system("cls");
        break;

        default:
        printf("Ingrese un valor valido");
        seguir=1;
        system("cls");
        }
    }while(seguir==1);
    system("cls");
    printf("GRACIAS POR JUGAR");
}


//Funciones maymen
void maymen(){
int numSecreto=0, numIngresado=0, mayor=0, menor=0, puntaje=10;
    int i=1;
    srand(time(NULL));
    numSecreto=(rand()%999)+1; //GENERA UN NUMERO ALEATORIO ENTRE 1 y 999
    menor=1;
    mayor=999;
    printf("________________________________\n\n");
    printf("\n\nBienvenido al juego Maymen\n\n");
    printf("\n\n________________________________\n\n");
    printf("\n--------Presione una tecla para empezar a jugar---------------\n\n");
    system("pause");
    system("cls");
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
        	printf("\n**************************\n");
        	printf("\nFelicidades ganaste\n");
        	printf("\n**************************\n\n");
            printf("Acertaste! Puntaje obtenido: %d", puntaje);
            i=11;
        }
        if(i%3==0){
            system("pause");
            system("cls");
        }
    }
    if(puntaje==0){
    	printf("\n///////////////////////////////////////\n");
    	printf("\nQue lastima perdiste, prueba de nuevo!!!!!\n");
    	printf("\n///////////////////////////////////////\n\n");
        printf("\nEl numero secreto es: %d", numSecreto);
    }
}


//funciones adivinum
void adivinum(){
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
        separar(numAleatorio,s1,s2,s3,s4);
    }while(s1==s2 || s1==s3 || s1==s4 || s2==s3 || s2==s4 || s3==s4||
    s1==0 || s2==0 || s3==0 || s4==0);

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


//funciones warcoin
void warcoin(){

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

    do{
        if(azar==1){
            printf("EL USUARIO");
            printf("\nIngrese la cantidad de monedas a eliminar: ");
            scanf("%d",&retUsu);
            if(retUsu>=rangoMin && retUsu<=rangoMax){

                cantMonedas-=retUsu;
			}
            else{
                printf("\nERROR: se deben desapilar entre %d y %d monedas.",rangoMin,rangoMax);
            }
            printf("\n\n");
            azar=2;
        }
        else{
            printf("LA COMPUTADORA \n");
            srand(time(NULL));
            retPc=rangoMin+(rand()%(rangoMax-rangoMin));
            printf("La computadora saco %d monedas de la pila",retPc);
            cantMonedas-=retPc;
            printf("\n\n");
            azar=1;
        }
    }while(cantMonedas>=rangoMin);

    if(azar==1){
        printf("\n\n~~~~~LA COMPUTADORA GANO~~~~~");
        printf("\nPuntaje: 0");
    }
    else{
        printf("\n\n~~~~~EL USUARIO GANO~~~~~");
        printf("\nPuntaje: 5");
    }
}


//funciones ahorcadito
void ahorcadito(){
    char letraI, letra;
    int i=0;
    int c=0;
    longitud=0;
    intentos=1;
    puntos=0;
    vidas=0;
    puntajeObtenido=0;
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
    while(vidas<11){
        _flushall();
        printf("Intento N°: %d\n", intentos);
        printf("Ingrese la letra: ");
        scanf("%c",&letra);
        IngresoLt(letra);
        if(puntos==longitud){
            vidas=12;
            puntajeObtenido=(50-(2*puntajeObtenido));
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
        puntajeObtenido++;
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
        break;
    }
}
