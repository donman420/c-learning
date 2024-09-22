/* Checks if a Universal Product Code scan is valid*/ 


#include <stdio.h>
int main(void) 
{
int d, il, i2, i3, i4, i5, jl, j2, j3, j4, j5, printed_check, math_check, first_sum, second_sum, total; 

    printf("Enter the first (single) digit: ");
    scanf("%ld", &d); 

    printf("Enter first group of five digits: "); 
    scanf("%ld%ld%ld%ld%ld", &il, &i2, &i3, &i4, &i5); 

    printf("Enter second group of five digits: "); 
    scanf("%ld%ld%ld%ld%ld", &jl, &j2, &j3, &j4, &j5);

    printf("Enter the check digit: ");
    scanf("%ld", &printed_check); 

    first_sum = d + i2 + i4 + jl + j3 + j5; 
    second_sum = il + i3 + i5 + j2 + j4; 
    total = 3 * first_sum + second_sum;

    math_check = 9 - ((total - 1) % 10);


    
    if (printed_check == math_check)
    {
        printf("VALID");
    }
    else
    {
        printf("NOT VALID");
    }


    return 0;

}