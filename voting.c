#include <stdio.h>

int main (){
    float age;

    printf("what is your age:");
    scanf("%f",&age);

    if ((int)age<18){
        printf("you are ineligible for voting");
    } else {
        printf("you are eligible for voting");
    }

    return 0;
}
