/*
 * Nome:
 * Scopo: Scrivere un programma che chieda all'utente un orario nel formato a 24 ore e successivamente visualizzi lo stesso orario nel formato a 12 facendo attenzione che
 *        12:00 am non venga visualizzato come 00:00
 * Data:  27 Gennaio 2020
 * Autore Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int hour, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    if (hour > 12)
    {
        hour -= 12;
        printf("Equivalent 12-hour time: %.2d:%.2d%-2s", hour, minutes, "PM");
    }
    else
    {
        printf("Equivalent 12-hour time: %.2d:%.2d%-2s", hour, minutes, "AM");
    }

    return 0;
}