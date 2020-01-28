/*
 * Nome:   inverter.c
 * Scopo:  Scrivere un programma che chieda all'utente di immettere un numero a tre cifre e successimaente lo stampi invertito (senza usare regole aritmetiche).
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>


int main(void)
{
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        printf("%d", number % 10);
        number /= 10;
    }
    
    return 0;
}