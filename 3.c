#include <stdio.h>
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);
int main(void)
{
    int numerator, denominator, numerator_reduced, denominator_reduced;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &numerator_reduced, &denominator_reduced);
    printf("In lowest terms: %d/%d\n", numerator_reduced, denominator_reduced);
    return 0;
}
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int remainder;
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    while (denominator != 0)
    {
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }
    *reduced_numerator = *reduced_numerator / numerator;
    *reduced_denominator = *reduced_denominator / numerator;
}
