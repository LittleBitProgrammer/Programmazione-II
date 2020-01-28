/*
 * Nome:   revenue.c
 * Scopo:  Date le seguenti imposte sul reddito:
 * 
 *         Reddito                 Ammontare imposta
 *         non superiore a 750$    1% del reddito
 *         750$ - 2.250$           7,50$ più 2% della quota sopra i 750$
 *         2.250$ - 3.750$         37,50$ più il 3% della quota sopra i 2.250$
 *         3.750$ - 5.250$         82,50$ più il 4% della quota sopra i 3.750$
 *         5.250$ - 7.000$         142,50$ più il 5% della quota sopra i 5.250$
 *         oltre i 7.000$          230,00$ più il 6% della quota sopra i 7.000$
 * 
 *         Scrivere un programma che chieda all'utente di immettere il suo reddito imponibile e successivamente visualizzi l'imposta dovuta
 * 
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    float revenue, tax;

    printf("Enter your revenue: ");
    scanf("%f", &revenue);

    if (revenue < 750.0f)
    {
        tax = (revenue * 1.0f) / 100;
    }
    else if (revenue < 2250.0f)
    {
        tax = ((revenue * 2.0f) / 100) + 7.50f;
    }
    else if (revenue < 3750.0f)
    {
        tax = ((revenue * 3.0f) / 100) + 37.50f;
    }
    else if (revenue < 5250.0f)
    {
        tax = ((revenue * 4.0f) / 100) + 82.50f;
    }
    else if (revenue < 7000.0f)
    {
        tax = ((revenue * 5.0f) / 100) + 142.50f;
    }
    else
    {
        tax = ((revenue * 6.0f) / 100) + 230.00f;
    }

    printf("Your tax are equal to: %.2f", tax);
    
    return 0;
}