#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens,
                 int *fives, int *ones);

int main(void)
{
    int dollars = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;

    printf("Enter a dollar amount: ");
    if (scanf("%d", &dollars) > 0) {
        pay_amount(dollars, &twenties, &tens, &fives, &ones);
        printf("$20 bills: %d\n", twenties);
        printf("$10 bills: %d\n", tens);
        printf(" $5 bills: %d\n", fives);
        printf(" $1 bills: %d\n", ones);

    } else {
        printf("Invalid input. Please enter number\n");
    }

    return 0; 
}

void pay_amount (int dollars, int *twenties, int *tens,
        int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars / 1;
}
