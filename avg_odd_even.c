#include <stdio.h>

int main() {
    float a, b, average;

    printf("Enter 1st and 2nd number: ");
    scanf("%f %f", &a, &b);

    average = (a + b) / 2;

    if ((int)average % 2 == 0) {
        printf("The average %.2f is even.\n", average);
    } else {
        printf("The average %.2f is odd.\n", average);
    }

    return 0;
}
