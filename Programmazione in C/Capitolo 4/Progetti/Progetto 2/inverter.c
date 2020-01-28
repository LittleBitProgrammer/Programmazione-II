/*
 * Nome:   inverter.c
 * Scopo:  Scrivere un programma che chieda all'utente di immettere un numero a tre cifre e successimaente lo stampi invertito.
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    printf("The reversal is: %d%d%d", number % 10, (number % 100) / 10, number / 100);
    return 0;
}