/*
 * Nome:   Broker.c
 * Scopo:  Calcola la commissione di un broker
 * Data:   27 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    float trade;

    printf("\n%-30s%-12s\n", "Dimensione della transazione", "Commissione");
    printf("%-30s%-12s\n","sotto i 2.500$","30$ + 1,7%");
    printf("%-30s%-12s\n","2.500$ - 6.250$","50$ + 0,66%");
    printf("%-30s%-12s\n","6.250$ - 20.000$","76$ + 0,34%");
    printf("%-30s%-12s\n","20.000$ - 50.000$","100$ + 0,22%");
    printf("%-30s%-12s\n","50.000$ - 500.000$","155$ + 0,11%");
    printf("%-30s%-12s\n","Oltre i 500.000$","255$ + 0,09%");

    printf("\ninserisci valore della transazione: ");
    scanf("%f", &trade);

    if(trade < 2500.0f)
    {
        printf("Commissione: %.2f", 30.0f + ((trade * 1.7f)/100));
    }
    else if(trade < 6250.0f)
    {
        printf("Commissione: %.2f", 50.0f + ((trade * 0.66f)/100));
    }
    else if(trade < 20000.0f)
    {
        printf("Commissione: %.2f", 76.0f + ((trade * 0.34f)/100));
    }
    else if(trade < 50000.0f)
    {
        printf("Commissione: %.2f", 100.0f + ((trade * 0.22f)/100));
    }
    else if(trade < 500000.0f)
    {
        printf("Commissione: %.2f", 155.0f + ((trade * 0.11f)/100));
    }
    else
    {
        printf("Commissione: %.2f", 255.0f + ((trade * 0.09f)/100));
    }

    return 0;
}