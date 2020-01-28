/*
 * Nome: 
 * Scopo:  Calcola la cifra di controllo dei codici a barre
 * Data:   27/01/2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>
#define MAX_DIGIT 11

void initArray(int *);

int main(void){
    int first_sum, second_sum, check;
    int array[MAX_DIGIT] ;

    
    printf("\nEnter the digits...\n\n");
    initArray(array);

    first_sum  = array[0] + array[2] + array[4] + array[6] + array[8] + array[10];
    second_sum = array[1] + array[3] + array[5] + array[7] + array[9];
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