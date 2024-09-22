/*
The program will first prompt the user to enter a number n. 
The program then print n lines of output, with each line 
con­taining a number between l and n together with its square:

This program prints a table of squares. 
Enter number of entries in table: 5
11
*/

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("This program prints a table of squares\n");
    printf("Please enter a number of entries in the table: ");
    scanf("%d", &n);

   
    i = 1;

    while (i<=n)
    {
        printf("\t%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}