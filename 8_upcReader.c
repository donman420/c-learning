/*
* Rewrite the u p c . c program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.
* Enter the first 11 digits of a UPC: 01380015173 Check d ig it: 5
*/

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);

    // Calculate the sums according to the UPC check digit rules
    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i2 + i4 + i6 + i8 + i10;

    total = (first_sum * 3) + second_sum;

    total = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", total);

    return 0;
}