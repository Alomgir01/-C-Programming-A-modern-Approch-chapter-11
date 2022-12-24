#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones);
int main(void)
{
    int dollars, twenties, tens, fives, ones;
    printf("Enter a amount US dollar: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
    *twenties = dollars/20;
    dollars = dollars - (*twenties * 20);
    *tens = dollars/10;
    dollars = dollars - (*tens * 10);
    *fives = dollars/5;
    dollars = dollars - (*fives * 5);
    *ones = dollars/1;
    dollars = dollars - (*ones * 1);
}
