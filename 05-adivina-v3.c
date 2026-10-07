#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    printf("pensando en un numero...\n\n\n"); // experiencia de usuario

    srand(time(NULL)); // nueva semilla para que el numero no sea el mismo en cada ejecucion

    int secretint = rand() % 11; // ahora es random del 0 al 10
    int intento = -1; // elimina ahora posibilidad de comparar con basura

    while (intento != secretint)
    {
        printf("adivina el numero que estoy pensando? (del 0 al 10): ");
        scanf("%d", &intento);
        printf("\n\n");

        if (intento == secretint) // condicion si adivinas
        {
            printf("Adivinaste! >D\n");
        }
        else if (intento > 10 || intento < 0) // condicion si te sales del rango
        {
            printf("Te dije del 0 al 10 :/\n");
        }
        else if (intento < secretint) // condicion si no adivinas y es mas alto
        {
            printf("nah te falto, es mas alto\n");
        } 
        else // misma condicion pero si es mas bajo
        {
            printf("nah te pasaste, es mas bajo\n");
        }
    }
    
    

    return 0;
}