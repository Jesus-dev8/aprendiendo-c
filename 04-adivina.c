#include <stdio.h>

int main(void)
{
    int SecretInt = 2;
    int intento;

    printf("adivina el numero que estoy pensando? (del 0 al 10): ");
    scanf("%d", &intento);

    if (intento == SecretInt)
    {
        printf("Adivinaste! >D\n");
    }
    else if (intento > 10 || intento < 0)
    {
        printf("Te dije del 0 al 10 :/\n");
    }
    else
    {
        printf("Mejor suerte la proxima... era el %d\n", SecretInt);
    }

    return 0;
}