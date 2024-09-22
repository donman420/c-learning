/*
Write a program that prompts the user to enter a number n, 
then prints all even squares between 1 and n. 
For example, if the user enters 100, the program should print the follow­ing:

4 
16 
36 
64 
100
*/

#include <stdio.h>

int main(void)
{
    int n, i, sq;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for(i = 2; i*i <=n; i+= 2)
        {
            printf("\n%d", i * i);
        }

    printf("\n\n");

return 0;

}