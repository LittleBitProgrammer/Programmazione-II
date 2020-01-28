/*
 * Nome:
 * Scopo:  Scrivere un programma che chieda all'utente di inserire un numero telefonico nella forma (xxx)xxx-xxxx e successivamente stampi il numero nella forma 
 *         xxx.xxx.xxxx
 * Data:   26 Gennaio 2020
 * Autore: Roberto Vecchio 
*/
#include <stdio.h>

int main(void)
{
    int prefix, suffix, number;

    printf("Enter phone number [(xxx)xxx-xxxx]: ");
    scanf("(%d)%d-%d", &prefix, &suffix, &number);

    printf("You entered: %d.%d.%d\n", prefix, suffix, number);
    return 0;
}