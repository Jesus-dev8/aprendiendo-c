#include <stdio.h>

int main(void)
{
    int secretint = 3; // antes era 2
    int intento;

    printf("adivina el numero que estoy pensando? (del 0 al 10): ");
    scanf("%d", &intento);

    if (intento == secretint) // condicion si adivinas
    {
        printf("Adivinaste! >D\n");
    }
    else if (intento > 10 || intento < 0) // condicion si te sales del rango
    {
        printf("Te dije del 0 al 10 :/\n");
    }
    else // si no adivinas dentro del rango
    {
        printf("Mejor suerte la proxima... era el %d\n", secretint);
    }

    return 0;
}