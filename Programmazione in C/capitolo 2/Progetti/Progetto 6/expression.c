/*
* Nome:   expression.c
* Scopo:  Scrivere un programma che chieda all'utente di inserire un valore per x e visualizzi il valore del seguente polinomio:
          ((((3x+2)x-5)x-1)x+7)x-6
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Value of x: ");
    scanf("%d", &x);

    printf("value of ((((3x+2)x-5)x-1)x+7)x-6 ---> %d\n", (((((3 * x) + 2) * x - 5) * x -1) * x + 7) * x - 6);
    
    return 0;
}