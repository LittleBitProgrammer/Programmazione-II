/*
* Nome:    tax.c
* Scopo:   Scrivete un programma che chieda all'utente di inserire un importo in dollari e centesimi e successivamente lo stampi conun addizionale del 5% di tasse
* Data:    26 Gennaio 2020
* Autore:  Roberto Vecchio
*/

#include <stdio.h>
#define PERCENT 5

int main(void)
{
    float money;

    printf("Enter an amount: ");
    scanf("%f", &money);

    printf("With tax added: %.2f\n", money + ((money * 5) / 100));

    return 0;
}