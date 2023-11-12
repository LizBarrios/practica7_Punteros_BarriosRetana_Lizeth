/*
   Nombre del archivo: 1.c
   Autor: Lizeth Barrios Retana
   Fecha de creación: 10 de Noviembre de 2023
   Descripción:Este programa toma dos números de punto flotante como argumentos de línea de comandos y realiza operaciones de suma, resta, multiplicación y división,
   mostrando los resultados formateados en la consola..
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float resultado;
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);

    if (argc != 3)
    {
        printf("Uso: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    if (num2 == 0)
    {
        printf("Error: La división por cero no está definida.\n");
        return 1;
    }

    resultado = num1 + num2;
    printf("SUMA DE %.0f y %.0f = %.0f\n", num1, num2, resultado);

    resultado = num2 - num1;
    printf("RESTA DE %.0f y %.0f = %.0f\n", num2, num1, resultado);

    resultado = num2 * num1;
    printf("MULTIPLICACIÓN DE %.0f y %.0f = %.0f\n", num1, num2, resultado);

    resultado = num1 / num2;
    printf("DIVISIÓN DE %.0f y %.0f = %.2f\n", num1, num2, resultado);

    return 0;
}
