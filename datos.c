#include <stdio.h>
 // con 'chcp 65001' para arreglar los caracteres bizarros
int main(void)
{
    int edad;
    char inicial;

    printf("¿Cuantos años tienes? \n");
    scanf("%d", &edad);

    printf("¿Y cual es tu inicial? \n");
    scanf(" %c", &inicial); // espacio para ignorar el buffer del guion o espacios

    printf("Wow %c, tienes %d años!\n", inicial, edad);

    return 0;
}