/*
   Nombre del archivo: 2.c
   Autor: Lizeth Barrios Retana
   Fecha de creación: 10 de Noviembre de 2023
   Descripción: Este programa en C ordena alfabéticamente las palabras proporcionadas como argumentos de línea de comandos utilizando el algoritmo de burbuja
   para ordenamiento de cadenas.
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int num_de_palabras = 0;
    int i,j,k,l;

    for ( i = 1; argv[i] != NULL; i++)
    {
        num_de_palabras++;
    }

    for ( j = 1; j < num_de_palabras; j++)
    {
        for ( k = 1; k < num_de_palabras - j + 1; k++)
        {
            if (strcmp(argv[k], argv[k + 1]) > 0)
            {
                char *temp = argv[k];
                argv[k] = argv[k + 1];
                argv[k + 1] = temp;
            }
        }
    }

    printf("Palabras ordenadas:\n");

    for ( l = 1; l < num_de_palabras; l++)
    {
        printf("%s\n", argv[l]);
    }

    return 0;
}
