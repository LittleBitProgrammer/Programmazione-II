/*
 * Nome:   Beafour.c
 * Scopo:  Data la seguente versione semplificata della scala di beafourt:
 * 
 *         Velocità(nodi)    Descrizione
 *         minore di 1       Calmo
 *         1-3               Bava di vento
 *         4-27              Brezza
 *         28-47             Burrasca
 *         48-63             Tempesta
 *         oltre 63          Uragano
 * 
 *         Scrivere un programma che chieda all'utente di immettere un valore di velocità del vento (in nodi) e visualizzi di conseguenza la descrizione corrispondente
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    float node_speed;

    printf("Enter the speed (in nodes): ");
    scanf("%f", &node_speed);

    if (node_speed < 1)
    {
        printf("You have a calm weather");
    }
    else if (node_speed < 3)
    {
        printf("You have a \"bava di vento\"");
    }
    else if (node_speed < 27)
    {
        printf("You have a breeze");
    }
    else if (node_speed < 47)
    {
        printf("You have a gale");
    }
    else if (node_speed < 27)
    {
        printf("You have a storm");
    }
    else
    {
        printf("You have a hurricane, run baby, run!");
    }
    
    
    return 0;
}