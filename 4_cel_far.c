/*
* Converting Celsius to Farenheit program, introducing constants
*/

#include <stdio.h>

#define FREEZING_POINT  32.0f
#define SCALE_FACTOR  (5.0/9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit tempreture: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("The Celsius equivalent is: %.1f\n", celsius);
 
    return 0;
}