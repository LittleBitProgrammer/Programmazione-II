/*
 * Nome: 
 * Scopo:  Calcola la cifra di controllo dei codici a barre
 * Data:   27/01/2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>
#define MAX_DIGIT 5

void initArray(int *);

int main(void){
    int single_digit, first_sum, second_sum, check;
    int first_array[MAX_DIGIT], second_array[MAX_DIGIT] ;

    printf("Enter the first (single) digit: ");
    scanf("%d", &single_digit);
    printf("\nEnter the first group of five digits...\n\n");
    initArray(first_array);
    printf("\ncode inverter.center the second group of five digits...\n\n");
    initArray(second_array);

    first_sum  = single_digit + first_array[1] + first_array[3] + second_array[0] + second_array[2] + second_array[4];
    second_sum = first_array[0] + first_array[2] + first_array[4] + second_array[1] + second_array[3];
    check = 9 - (((first_sum * 3) + second_sum)-1)%10;

    printf("\nCheck digit: %d\n", check);

    return 0;
}

void initArray(int *array)
{
    int i;

    for(i = 0; i < MAX_DIGIT; i++)
    {
        printf("Enter position [%d] = ", i + 1);
        scanf("%d", &array[i]);
    }
}