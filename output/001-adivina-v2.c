#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int numero = 4;
    int intento;
    int encendido = 1;
    int accion = 677;
    
    printf("adivina el numero que pienso: ");

    while (encendido == 1)
    {
        printf("=======hola que quieres hacer?=======\n");

        if (accion == 677)
        {
            printf("informacion: \n");
        }
        else if (accion < 1 || accion > 3)
        {
            printf("informacion: no existe una opcion para eso\n\n");
        }
        else if (accion == 1)
        {
            printf("informacion: enserio crees que podria poner musica?\n\n");
        }
        else 
        {
            printf("informacion: \n");
        }

        printf("1. Escuchar musica\n");
        printf("2. Jugar\n");
        printf("3. Apagar\n\n");

        printf("Que haras: ");

        scanf(" %d", &accion);

        if (accion == 1)
        {
            system("cls");
        }
        else if (accion == 2)
        {
            
        }
    }
    

    while (intento != numero)
    {
        scanf("%d", &intento);
        
    }
    

}