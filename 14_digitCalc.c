/*
*
* Let’s write a program that calculates the number of digits in an inte­ger entered by the user:
* 
* Enter a nonnegative integer: 60 
* The number has 2 digit(s).
*
*/

#include <stdio.h>

int main(void)
{
    int digits=0, userint;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &userint);

    do {
        userint /= 10;
        digits++;

    } while (userint != 0);


    printf("The number has %d digit(s).\n", digits);

}