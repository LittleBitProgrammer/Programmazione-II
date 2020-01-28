/*
 * Nome:   date.c
 * Scopo:  Scrivere un programma che accetti la data dall'utente nella forma mm/dd/yyyy e poi stamparla nella forma yyyy/mm/dd
 * Data:   26 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a day (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date (yyyy/mm/dd): %d/%.2d/%d\n", year, month, day);

    return 0;
}