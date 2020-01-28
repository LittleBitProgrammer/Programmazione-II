/*
 * Nome:
 * Scopo:  Scrivere un programma che formatti le informazioni inserite dall'utente. Una sessione del programma deve presentarsi nel seguente modo:
 * 
 *         Enter item number:583
 *         
 *         Enter unit price: 13.5
 *         Enter purchase date (mm/dd//yyyy): 10/24/2010
 *         Item        Unit        Purchase
 *                     Price       Date
 *         583         $13.50      10/24/2010
 * 
 * Data:   26 Gennaio 2020
 * Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int day, month, year;
    int item_number;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("\nEnter unit Price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n\n%d\t%.2f\t%d/%.2d/%d\n", item_number, unit_price, month, day, year);

    return 0;
}