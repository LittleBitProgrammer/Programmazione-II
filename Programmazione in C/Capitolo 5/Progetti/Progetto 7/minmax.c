/*
 * Nome:   minmax.c
 * Scopo:  Scrivete un programma in grado di trovare il minimo e il massimo tra quattro numeri immessi dall'utente
 * Data:   28 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int i,min,max;
    int array_size;

    printf("Enter how many number you want to insert: ");
    scanf("%d", &array_size);

    int array[array_size];
    
    for (i = 0; i < array_size; i++)
    {
        printf("Enter %d number: ", i+1);
        scanf("%d", &array[i]);
    }

    min = max = array[0];

    for (i = 0; i < array_size; i++)
    {
        min = min > array[i] ? array[i] : min;
        max = max < array[i] ? array[i] : max;
    }

    printf("Largest: %d\n",max);
    printf("Smallest: %d\n",min);
    return 0;
}