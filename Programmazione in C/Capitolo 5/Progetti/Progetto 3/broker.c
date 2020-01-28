/*
 * Nome: 
 * Scopo:  Scrivere un programma con le seguenti specifiche:
 *         A) Chiedere all'utente di immettere un numero di azioni e il prezzo per azione invece di chiedere il valore dello scambio
 *         B) Aggiungere le istruzioni per il calcolo della commissione di un broker rivale (33$ e 3 cent ad azione per un volume inferiore a 2000 azioni e 33$ e 2cent per
 *            un volume pari o superiore a 2000 azioni ). Visualizzare sia il valore della commissione del rivale che quella applicata dal broker originale.
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>
#define RIVAL_BROKER_LIMIT      2000
#define RIVAL_BROKER_PRICE_LOW  33.3f
#define RIVAL_BROKER_PRICE_HIGH 33.2f

int main(void)
{
    int action_number;
    float price_per_action, rival_broker_commission;

    printf("Enter number of action: ");
    scanf("%d", &action_number);
    printf("Enter price per action: ");
    scanf("%f", &price_per_action);

    rival_broker_commission = action_number < RIVAL_BROKER_LIMIT ?  RIVAL_BROKER_PRICE_LOW * action_number : RIVAL_BROKER_PRICE_HIGH * action_number;
    
    printf("%-14s%.2f\n", "Your broker: ",action_number * price_per_action);
    printf("%-13s%.2f\n", "Rival broker: ",rival_broker_commission);
    
    return 0;
}