/*
* Nome:    ball.c
* Scopo:   Scrivere un programma che calcoli il volume di una sfera con un raggio di 10 metri utilizzando la formula v = 4 / 3 * pi* r^3
* Data:    26 Gennaio 2020
* Autore:  Roberto Vecchio
*/

#include <stdio.h>
#include <math.h>
#define RADIUS_MT 10.0f
#define SPHERE_COSTANT (4.0f / 3.0f)

int power(int,int);

int main(void)
{
    printf("The volume of sphere: %f\n", SPHERE_COSTANT * M_PI * power(RADIUS_MT,3));

    return 0;
}

int power(int number,int exponent)
{
    int i, base = number ;
    for(i = 0; i < (exponent - 1); ++i)
    {
        number *= base;
    }
    return number;
}