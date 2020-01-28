/*
* Nome:   loan.c
* Scopo:  Scrivere un programma che calcoli il saldo rimanente di un prestito, dopo il primo, il secondo e il terzo pagamento mensile
* Data:   26 Gennaio 2020
* Autore: Roberto Vecchio
*/
#include <stdio.h>
#define MONTH_NUMEBR 12
int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Balance remaining after first payment:  %.2f\n", (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR));
    loan_amount = (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR);
    printf("Balance remaining after second payment: %.2f\n", (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR));
    loan_amount = (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR);
    printf("Balance remaining after third payment:  %.2f\n", (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR));
    loan_amount = (loan_amount - monthly_payment)+ (((loan_amount * interest_rate)/100)/MONTH_NUMEBR);

    return 0;
}