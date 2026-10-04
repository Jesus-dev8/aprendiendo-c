#include <stdio.h>

int main(void)
{
    int edad;
    printf("¿cual es tu edad? \n");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("puedes pasar\n");
    }
    else
    {
        printf("eres muy menor\n");
    }
    return 0;
}
