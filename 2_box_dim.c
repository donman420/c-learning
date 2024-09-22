/* 
* Introduction to functions and formatting
* Excersize is to compute dimesional weights for a box in a shipping company
*/

#include <stdio.h> 

int main(void)
{
    int height, width, length, volume, weight;

    height = 10 ;
    width = 12 ;
    length = 23 ;
    volume = height * width * length ;
    weight = (volume + 165) * 166;
    /* 
    * weight -> '+ 165' to round up to the nearest whole int in cases of fractions 
    */

    printf("Dimensions: %d*%d*%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}