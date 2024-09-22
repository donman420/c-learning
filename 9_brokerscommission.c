/*
* Calculate a brokers comission according to the following breakdown
*
*/

#include <stdio.h>

int main(void)

{
    float tradeValue;

    printf("Enter value of trade: $");
    scanf("%f", &tradeValue);

    if(tradeValue<2500.00f)
        printf("Commission: $%.2f\n", 30 + (tradeValue*0.017f));

    else if(2500.00f <= tradeValue && tradeValue < 6250.00f)
        printf("Commission: $%.2f\n", 56 + (tradeValue*0.0066f));

    else if(6250.00f <= tradeValue && tradeValue < 20000.00f)
        printf("Commission: $%.2f\n", 76 + (tradeValue*0.0034f));

    else if(20000.00f <= tradeValue && tradeValue < 50000.00f)
        printf("Commission: $%.2f\n", 100 + (tradeValue*0.0022f));

    else if(50000.00f <= tradeValue && tradeValue < 500000.00f)
        printf("Commission: $%.2f\n", 155 + (tradeValue*0.0011f));

    else if(500000.00f <= tradeValue)
        printf("Commission: $%.2f\n", 255 + (tradeValue*0.0009f));

    return 0;
}

// After the face I realised upper bounds were unnecessary for the if statements:
// if (tradeValue < 2500.00) {
//        printf("Commission: %.2f\n", 30 + (tradeValue * 0.017));
// ^This is how I would format future tiered problems