/* 
* Training for incorporating user input into program formulae
*/

#include <stdio.h> 

int main(void)
{
    int height, width, length, volume, weight;


    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter width of box: ");
    scanf("%d", &width);
    printf("Enter length of box: ");
    scanf("%d", &length);

    /* 
    * troubleshooting as volume output was in the millions
    */


    volume = height * width * length ;
    weight = (volume + 165) / 166;
    /* 
    * weight -> '+ 165' to round up to the nearest whole int in cases of fractions 
    */

    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);


    return 0;

}