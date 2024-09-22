/*
Prime number lister. Task for Samira (my gf).
*/

#include <stdio.h>

int main(void)
{
    int inputnum, divider, testnum, primecount;

    printf("This program prints a list of prime numbers up to an input number. \nEnter the input number: ");
    scanf("%d", &inputnum);

    /* 2 is a special prime. And needs to be accounted for. */
    printf("\n2");
    primecount = 1;

    for(testnum = 2; testnum <= inputnum; testnum++)
        {
            for(divider = 2;divider < testnum;)
            {
                if ((testnum % divider) == 0)
                {
                    break;
                }
                else if (divider == testnum - 1)
                {
                    printf("\n%d", testnum);
                    primecount++;
                    break;
                }
                else
                {
                    divider++;
                }
            }
        }

    printf("\n\nThe number of prime numbers up to and including %d is %d.\n\n", inputnum, primecount);

    return 0;
}

/*
Time to complete ~20 minutes
*/