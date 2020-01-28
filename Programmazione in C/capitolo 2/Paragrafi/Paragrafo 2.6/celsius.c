/*
* Nome:    celsius.c
* Scopo:   converte una temperatura Farenheit in Celsius
* Data:    26 Gennaio 2020
* Autore:  Roberto Vecchio
*/

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    //declaration
    float farenheit;

    //instructions
    printf("Enter Farenheit temperature: ");
    scanf("%f", & farenheit);

    //output
    printf("Celsius equivalent: %.1f\n", (farenheit - FREEZING_PT) * SCALE_FACTOR);

    return 0;
}