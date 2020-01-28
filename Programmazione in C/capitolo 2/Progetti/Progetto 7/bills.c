/*
* Nome:   bills.c
* Scopo:  scrivere un programma che chieda all'utente di inserire un importo in dollari e poi mostri come pagarlo utilizzando il minor numero di biglietti da
          20$ - 10$ - 5$ - 1$
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int amount;

    printf("Insert the amount: ");
    scanf("%d", &amount);

    printf("20$ bills: %d\n", amount / 20);
    amount -= ((amount / 20)*20);
    printf("10$ bills: %d\n", amount / 10);
    amount -= ((amount / 10)*10);
    printf("5$ bills: %d\n", amount / 5);
    amount -= ((amount / 5)*5);
    printf("1$ bills: %d\n", amount / 1);

    return 0;
}