/*
* Nome:    ball.c
* Scopo:   Modificate il progetto originale in modo che all'utente sia chiesto di inserire il raggio dela sfera
* Data:    26 Gennaio 2020
* Autore:  Roberto Vecchio
*/

#include <stdio.h>
#include <math.h>
#define SPHERE_COSTANT (4.0f / 3.0f)

int power(int,int);

int main(void)
{
    float radius;

    printf("Radius of sphere: ");
    scanf("%f", &radius);

    printf("The volume of sphere: %f\n", SPHERE_COSTANT * M_PI * power(radius,3));

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