/*
 * Nome:
 * Scopo:  Scrivere un programma che calcoli quante cifre sono contenute in  un numero
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int number, temp, counter = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;

    while (temp !=0 )
    {
        counter++;
        temp /= 10;
    }

    printf("\nThe number %d ha %d digits\n", number, counter);
    
    return 0;
}