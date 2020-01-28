/*
* Nome:   addfrac.c
* Scopo:  Sommare due frazioni
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int num_1, num_2, den_1, den_2;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num_1, &den_1);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num_2, &den_2);

    printf("The sum is: %d/%d\n", num_1 * den_2 + num_2 * den_1, den_1 * den_2);

    return 0;
}