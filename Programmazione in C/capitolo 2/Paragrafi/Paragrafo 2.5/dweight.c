/*
* Nome:   dweight.c
* Scopo:  Calcola il peso dimensionale di un pacco dall'input dell'utente
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    // Declarations
    int height, length, width, volume;

    // input / output
    printf("\nEnter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    // Inizialization
    volume = height * length * width;

    // Final output
    printf("\nDimensions of box: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
}