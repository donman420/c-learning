
/*
Using the switch statement, write a program 
that converts a numerical grade into a letter grade:

Enter numerical grade: 84 
Letter grade: B

Use the following grading scale: 
A = 90-100, B = 80-89, 
C = 70-79. D = 60-69, 
F = 0-59. 

Print an error message if the grade is larger than 100 or less than 0. 
*/

#include <stdio.h>

int main(void)
{
    int grade, firstDigit;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Error: please enter a valid grade between 0 and 100");
    }

    firstDigit = grade / 10;
    //Not technically the first digit for 100 and 0 but 
    //10 and 0 produce the correct result when grade/10

    switch(firstDigit)
    {
    case 10:    
    case 9: printf("Letter grade: A");
    break;
    
    case 8: printf("Letter grade: B");
    break;
    
    case 7: printf("Letter grade: C");
    break;
    
    case 6: printf("Letter grade: D");
    break;

    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: printf("Letter grade: F");
    break;
    
    
    }
}
