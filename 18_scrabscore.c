/*

In lhe SCRABBLE Crossword Game, players form words using small tiles, 
each containing a letter and a face value. 
The face value varies from one letter to another, based on the let­ter’s rarity. 

(Here are the face values: 
1: AEILNORSTU. 2: DG. 3: BCMP 4: FHVWY. 5: K. 8: JX, l0: QZ.) 

Write a program that computes the value of a word by 
summing the values of its letters:

Enter a word: pitfall 
Scrabble value: 12

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char input;
    short scrabvalue;

    scrabvalue = 0;

    printf("Enter a word: ");

    while((input = getchar()) != '\n')
    {
        switch(toupper(input))
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': 
                    case '0': case 'R': case 'S': case 'T': case 'U': 
                scrabvalue += 1;
                break;
            case 'D': case 'G':
                scrabvalue += 2;
                break;
            case 'B': case 'C':case 'M': case 'P':
                scrabvalue += 3;
                break;
            case 'F': case 'H': case 'V': case 'W':case 'Y': 
                scrabvalue += 4;
                break;
            case 'K': 
                scrabvalue += 5;
                break;
            case 'J': case 'X': 
                scrabvalue += 8;
                break;
            case 'Q':case 'Z': 
                scrabvalue += 10;
                break;

        }
    }

    printf("Scrabble value: %d", scrabvalue);


    return 0;
        
}