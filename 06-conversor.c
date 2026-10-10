#include <stdio.h>
#include <stdlib.h> // libreria para usar system("cls")

float celtofaren(float celsius) // Definicion de la funcion antes de main.
{
    return (celsius * 9.0 / 5.0 ) + 32; /*
    las divisiones llevan .0 porque si no seria division entera
    y devolveria un int, entonces 9/5 devolveria 1 y no 1.8000
    ya que C no interpreta solo numeros sino tambien el tipo de dato
    */
}

float farentocel(float fahrenheit); // prototipo de funcion para despues de main

int main(void)
{
    int encendido = 1;
    int accion = -1;
    float grados = 0.00;

    while (encendido == 1) // mientras la variable encendido sea uno hacer el programa funcional
    {
        printf("bienvenido al conversor\n\n");

        printf("1. salir\n");
        printf("2. convertir: Celsius a Fahrenheit\n");
        printf("3. convertir: Fahrenheit a Celsius\n\n");

        printf("Que quieres hacer: ");
        /* scanf devuelve la cantidad de asignaciones exitosas.
        Si espera un int y recibe "2", devuelve 1.
        Si recibe "hey", devuelve 0 porque no puede convertirlo a int. */
        if (scanf(" %d", &accion) != 1) 
        {
            while (getchar() != '\n'); /* si escribes 'hey' scanf intenta buscar un entero y falla al encontrar
            la 'h' y deja la entrada sin consumir, con getchar consumimos los caracteres hasta llegar al \n (salto de linea)
            y comienza la proxima lectura */

            system("cls");
            printf("Entrada invalida. Escribe un numero.\n\n");
            continue; // continue es deja de ejecutar el resto y regresa al inicio del bucle (el inicial en este caso)
        }

        if (accion < 1 || accion > 3) // condicion si se salio del rango
        {
            system("cls");
            printf("esa accion no existe \n\n");
        }
        else if (accion == 1) // condicion para apagar
        {
            system("cls");
            encendido = 0;
            printf("\n\n Adios!");
        }
        else if (accion == 2) // condicion para convertir Celsius a Fahrenheits
        {
            system("cls");
            printf("Temperatura en Celsius: ");
            if (scanf(" %f", &grados) != 1) 
            {
                while (getchar() != '\n');

                system("cls");
                printf("Entrada invalida. Escribe un numero.\n\n");
                continue; // toca volver al inicio porque volver aqui es muy complicado
            }
            printf("\nTemperatura en Fahrenheit: %.2f\n\n", celtofaren(grados));
            printf("Presiona Enter para continuar...");
            while (getchar() != '\n'); // lo mismo de abajo
            getchar();
            system("cls");
        }
        else // condicion para convertir Fahrenheit a Celsius
        {
            system("cls");
            printf("Temperatura en fahrenheit: ");
            if (scanf(" %f", &grados) != 1) 
            {
                while (getchar() != '\n');

                system("cls");
                printf("Entrada invalida. Escribe un numero.\n\n");
                continue; // toca volver al inicio porque volver aqui es muy complicado
            }
            printf("\nTemperatura en Celsius: %.2f\n\n", farentocel(grados));
            printf("Presiona Enter para continuar...");
            while (getchar() != '\n'); // lee caracter y mientras no sea \n repite
            getchar(); // una vez ya se consumio el \n cuando introduciste los grados ahora espera otro para avanzar
            system("cls");
        }
        /*
        Aunque se pudieron mejorar las condiciones poniendo las primeras tres opciones
        (1, 2, 3) y si no se seleccionaba ninguna es porque ya era menor que 1 o 
        mayor que 3
        */ 
    }
    return 0; // se me olvido
}

float farentocel(float fahrenheit) // Definicion de la funcion despues de main, usando un prototipo.
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}