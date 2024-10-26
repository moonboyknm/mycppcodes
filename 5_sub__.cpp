// enter marks in eng,maths,physics,chemistry,physical edu
// percentage is out of 100
// total is x/500*100 =
// Non-functional

#include <stdio.h>

int main (){
    float eng, maths, physics, chemistry,physical,percentage;

    printf("Enter marks obtained in English:");
    scanf("%f",&eng);

    printf("Enter marks obtained in Maths:");
    scanf("%f",&maths);

    printf("Enter marks obtained in Physics:");
    scanf("%f",&physics);

    printf("Enter marks obtained in Chemistry:");
    scanf("%f",&chemistry);

    printf("Enter marks obtained in Physical Education:");
    scanf("%f",&physical);

    percentage = eng+maths+physics+chemistry+physical/500*100;

    printf("The percentage obtained is:%.2f",percentage);

    return 0;
}
