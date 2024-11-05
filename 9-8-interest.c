#include <stdio.h>

int main () {
    float amount,interestRate;

    printf("Enter the amount to be borrowed (in INR):");
    scanf("%f",&amount);

    if (amount<10000){
        interestRate = 9.0;
    } else {
        interestRate = 8.0;
    }

    printf("The interest rate for borrowing %.2f INR is %.1f%%.\n",amount,interestRate);

    return 0;
}
