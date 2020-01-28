/*
 * Nome:   inverter.c
 * Scopo:  Scrivere un programma che chieda all'utente di immettere un numero a tre cifre e successimaente lo stampi invertito (senza usare regole aritmetiche array o cicli).
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>


int main(void)
{
    int number;
    int first, second, third, fourth, fifth;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    fifth = number % 8;
    number /= 8;
    fourth = number % 8;
    number /= 8;
    third = number % 8;
    number /= 8;
    second = number % 8;
    number /= 8;
    first = number % 8;
    number /= 8;

    printf("In octal, your number is: %d%d%d%d%d", first, second, third, fourth, fifth);

    return 0;
}