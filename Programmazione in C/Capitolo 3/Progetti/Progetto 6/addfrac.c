/*
* Nome:   addfrac.c
* Scopo:  modificare il programma presente in cartella "paragrafo 3.2" in modo che l'utente immetta allo stesso tempo entrambe le frazioni separate dal segno +
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int num_1, num_2, den_1, den_2;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num_1, &den_1, &num_2, &den_2);

    printf("The sum is: %d/%d\n", num_1 * den_2 + num_2 * den_1, den_1 * den_2);

    return 0;
}