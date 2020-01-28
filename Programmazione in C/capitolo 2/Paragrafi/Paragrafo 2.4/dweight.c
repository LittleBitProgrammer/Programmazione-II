/*
* Nome:    dweight.c
* Scopo:   Calcola il peso volumetrico di un pacco 12 x 10 x 8
* Data:    25 Gennaio 2020
* Autore:  Roberto Vecchio
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int height = 8;
    int length = 12;
    int width  = 10;
    int volume = height * length * width;
    int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}