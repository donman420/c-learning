/*

9. Write a program that generates a “random walk" across a 10 x 10 array. 
The array will con­ tain characters (all ’ . ’ initially). The program must randomly “walk” from element to ele­ment; 
always going up, down. left, or right by one element. The elements visited by the program will be 
labeled with the letters A through Z, in the order visited. Here's an example oflhe desired output:

*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COLUMN 10

int main(void)
{
    bool check[ROW][COLUMN] = {false};
    char visual[ROW][COLUMN] = {0};

    int direction, i, j;
    char count;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
           visual[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));

    i = 0; /*Start in ~top left corner*/
    j = 0;
    count = 1;

    visual[i][j] = 'A';

    while(count < 24)
    {

        if((visual[i+1][j] != '.' || (i+1) > ROW)
        && (visual[i][j+1] != '.'|| (j+1) > COLUMN) 
        && (visual[i-1][j] != '.'|| (i-1) > 0) 
        && (visual[i][j-1] != '.' || (j-1) > 0) )
        {
            break;
        }


        direction = rand() % 4;  /* Random direction: 0 = N, 1 = E, 2 = S, 3 = W */
        
        switch(direction)
        {
            case 2:
            {
                if(j-1 < 0)
                {
                    break;
                }
                else if(visual[i][j-1] != '.')
                {
                    break;
                }
                else
                {
                    j--;
                    visual[i][j] = 'A' + count++;
                }
            }
            case 1:
            {
                if(i+1 > 9)
                {
                    break;
                }
                else if(visual[i+1][j] != '.')
                {
                    break;
                }
                else
                {
                    i++;
                    visual[i][j] = 'A' + count++;
                }
            }
            case 0:
            {
                if(j+1 > 9)
                {
                    break;
                }
                else if(visual[i][j+1] != '.')
                {
                    break;
                }
                else
                {
                    j++;
                    visual[i][j] = 'A' + count++;
                }
            }
            case 3:
            {
                if(i-1 > 0)
                {
                    break;
                }
                else if(visual[i-1][j] != '.')
                {
                    break;
                }
                else
                {
                    i--;
                    visual[i][j] = 'A' + count++;
                }
            }
            

        }
         
    }

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
           printf("%3c", visual[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;
}
