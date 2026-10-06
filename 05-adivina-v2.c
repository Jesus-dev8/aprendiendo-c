#include <stdio.h>

int main(void)
{
    int secretint = 3; // antes era 2
    int intento;

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
        else if (intento < secretint)
        {
            printf("nah te falto, es mas alto\n");
        } 
        else
        {
            printf("nah te pasaste, es mas bajo\n");
        }
    }
    
    

    return 0;
}