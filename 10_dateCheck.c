/*

Write a program that prompts the user lo enter two dates and 
then indicates which date comes earlier on the calendar:
Enter first date (mm/dd/yy): 3/6/08 
Enter second date (mm/dd/yy): 5/17/07 

5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main(void)

{
    int m1, d1, y1, m2, d2, y2;

    printf("\nEnter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("\nEnter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1>=y2)
    { 
        if (y1==y2)
        {
            if(m1>=m2)
            {
                if(m1==m2)
                {
                    if(d1>=d2)
                    {
                        if(d1==d2)
                            {
                                printf("%d/%d/%d is the same date as %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
                            }
                        else
                        {
                            printf("%d/%d/%d is the same date as %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
                        }
                    }
                    else
                    {
                        printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
                    }
                }
                else
                {
                    printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
                }
            }
            else
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
            }

        }
        else
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);

    }
    else
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
    }
    
    return 0;

    //Extremely proud of this one. Maybe not the cleanest code but I was
    //was struggling with the logic and I figured it out with grit on my own
    //Very satisfying!!

}