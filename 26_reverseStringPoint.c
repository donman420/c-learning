/*
(a) Write a program that reads a message, then prints the reversal ofthe message:

Enter a message: Don’t get mad, get even.
Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar ) and store the characters in
an array. Stop reading when the array is full or the character read is ' \n ’.
(b) Revise the program to use a pointer instead of an integer to keep track of the current
position in the array
*/

// a.

#include <stdio.h>

#define ARRAY_LENGTH 40

void reverse(char *input, char *output, int length);

int main() {
    int i = 0;
    char input[ARRAY_LENGTH];
    char output[ARRAY_LENGTH];
    char c;

    printf("Enter a message: ");

    // Read characters until newline or array is full
    while (i < ARRAY_LENGTH - 1 && (c = getchar()) != '\n') {
        input[i++] = c;
    }
    
    input[i] = '\0'; // Null-terminate the string

    reverse(input, output, i); // Call the reverse function

    printf("Reversal is: %s\n", output);

    return 0;
}

void reverse(char *input, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = input[length - i - 1]; 
    }
    output[length] = '\0'; 
}