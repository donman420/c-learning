/*
* Write a program that accepts a date from the user in the form 
* and dis­plays it in the form yyyymmdd 
* Enter a date (mm/dd/yyyy): 2/17/2011 
* You entered the date 20110217
*/

#include <stdio.h>

int main(void)

{
    int month, year, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date: %d%.2d%.2d", year, month, day);

    
    return 0;
}