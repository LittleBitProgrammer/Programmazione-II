/*
 * Nome:
 * Scopo:  Scrivere un programma che chieda all'utente di inserire i numeri da 1 a 16 in ordine casuale e poi li visualizzi in una matricee 4 x 4.
 *         La matrice dovrà essere seguita dalla somma delle righe, delle colonne e delle diagonali. ritornare inoltre se il quadrato è un "quadrato magico"
 *         ovvero se le somme delle righe, delle colonne e delle diagonali sono uguali.
 * Data:   26 Gennaio 2020
 * Autore: Roberto Vecchio 
*/

#include <stdio.h>
#define MAX_ROW 4
#define MAX_COLUMN 4
typedef enum {false,true} bool;

void shuffleMatrix(int [*][*]);
void printMatrix(int[*][*]);
void sumColumn(int[*][*],bool *);
void sumRow(int[*][*],bool *);
int sumFirstDiagonal(int[*][*]);
int sumSecondDiagonal(int[*][*]);

int main(void)
{
    bool is_magic_square = true;
    int first_diag, second_diag;
    int matrix[MAX_ROW][MAX_COLUMN];

    printf("Enter the numbers from 1 to 16 in any order: \n");
    shuffleMatrix(matrix);
    printf("\n");
    printMatrix(matrix);
    printf("\n");
    sumRow(matrix,&is_magic_square);
    printf("\n");
    sumColumn(matrix,&is_magic_square);
    printf("\n");
    first_diag = sumFirstDiagonal(matrix);
    printf("\n");
    second_diag = sumSecondDiagonal(matrix);

    if(first_diag != second_diag){
        is_magic_square = false;
    }

    if(is_magic_square)
    {
        printf("The matrix is a magic square\n");
    }
    else
    {
        printf("The matrix is not a magic square\n");
    }

    return 0;
}

void shuffleMatrix(int matrix[MAX_ROW][MAX_COLUMN])
{
    int i,j;
    for(i = 0;i < MAX_ROW; i++)
    {
        for(j = 0; j < MAX_COLUMN; j++)
        {
            printf("Enter position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_ROW][MAX_COLUMN])
{
    int i,j;
    for(i = 0;i < MAX_ROW; i++)
    {
        for(j = 0; j < MAX_COLUMN; j++)
        {
            if(j!= 0 && (j%3) == 0)
            {
                printf("%-3d\n", matrix[i][j]);
            }
            else
            {
                printf("%-3d", matrix[i][j]);
            }
        }
    }
}

void sumRow(int matrix[MAX_ROW][MAX_COLUMN], bool *is_magic)
{
    int i,j;
    int temp,sum;
    for(i = 0;i < MAX_ROW; i++)
    {
        temp = 0;
        for(j = 0; j < MAX_COLUMN; j++)
        {
            temp += matrix[i][j];
        }
        if(i !=0 && sum != temp)
        {
            *is_magic = false;
        }
        sum=temp;
        printf("The %d row is equal to: %d\n", i, sum);
    }
}

void sumColumn(int matrix[MAX_ROW][MAX_COLUMN], bool *is_magic)
{
    int i,j;
    int temp,sum;
    for(i = 0;i < MAX_ROW; i++)
    {
        temp = 0;
        for(j = 0; j < MAX_COLUMN; j++)
        {
            temp += matrix[j][i];
        }
        if(i !=0 && sum != temp)
        {
            *is_magic = false;
        }
        sum=temp;
        printf("The %d colum is equal to: %d\n", i, sum);
    }
}

int sumFirstDiagonal(int matrix[MAX_ROW][MAX_COLUMN])
{
    int i,j;
    int sum = 0;
    for(i = 0;i < MAX_ROW; i++)
    {
        for(j = 0; j < MAX_COLUMN; j++)
        {
            if(i==j)
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("The first diagonal is equal to: %d\n", sum);
    return sum;
}

int sumSecondDiagonal(int matrix[MAX_ROW][MAX_COLUMN])
{
    int i,j;
    int sum = 0;
    for(i = 0;i < MAX_ROW; i++)
    {
        for(j = 0; j < MAX_COLUMN; j++)
        {
            if(i == (MAX_COLUMN - j - 1))
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("The second diagonal is equal to: %d\n", sum);
    return sum;
}