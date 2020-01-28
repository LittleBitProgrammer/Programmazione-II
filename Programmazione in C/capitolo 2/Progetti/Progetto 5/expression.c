/*
* Nome:   expression.c
* Scopo:  Scrivere un programma che chieda all'utente di inserire un valore per x e visualizzi il valore del seguente polinomio:
          3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/

#include <stdio.h>

int power(int,int);

int main(void)
{
    int x;
    
    printf("Value of x: ");
    scanf("%d", &x);

    printf("value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 ---> %d\n", ((3 * power(x,5)) + (2 * power(x,4)) - (5 * power(x,3)) - power(x,2) + (7 * x) - 6));
    return 0;
}

int power(int number, int exponent)
{
    int i,base = number;

    for (i = 0; i < (exponent - 1); i++)
    {
        number *= base;
    }
    
    return number;
}