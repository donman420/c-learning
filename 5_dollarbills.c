/*
* Exercise with no assitance:
* Write a program that asks the user to enter a U.S. dollar amount 
*and then shows how to pay that amount using the smallest number of 
* $20, $10, $5, and $1 bills:
* Enter a dollar amount: 93
* $20 bills: 4 $10 bills: 1 $5 bills: 0 $1 bills: 3
*/

#include <stdio.h>

int main(void)
{
    int amount, twenty, ten, five, one;

    printf("Enter a whole dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20 ;
    amount = amount % 20 ;

    ten = amount / 10;
    amount = amount % 10 ;

    five = amount / 5;
    amount = amount % 5; 
    
    one = amount;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}