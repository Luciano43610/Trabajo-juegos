#include <stdlib.h>
#include <stdio.h>


void MostrarPalabra();
void IniciaJuego();
void IngresoLt(char letra);
void muestra(int v);
char palabra[15];
char palabraCompleta[15];
int longitud=0;
main(){
    char letraI, letra;
    int i=0;
    int c=0;
    printf("~INGRESE 0 PARA TERMINAR~\n\n\nIngrese la palabra letra por letra: \n");

    while(letraI!='0'){
    scanf("%c", &letraI);
        if(letraI<'A' || letraI>'Z' || letraI=='0'){
            _flushall();
            if(letraI=='0'){
                printf("\nFin de la carga de la palabra.\nLongitud de la palabra: %d\n\n", longitud);
            }
            else{
                if(letraI!='0'){
                _flushall();
                palabra[c]=letraI;
                longitud++;
                }
                else{
                    if(letraI<'A' || letraI>'Z'){
                        printf("Ingrese un caracter valido.\n");
                    }
                }
            }
        }
        c++;
