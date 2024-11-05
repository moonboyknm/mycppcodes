#include <stdio.h>

int main () {
    int number;

    printf ("Enter a number:");
    scanf("%d",&number);

    if (number<0){
        printf ("The number %d is negative. \n",number);
    } else {
        printf ("The number %d is not negative \n",number);
    }
    return 0;
}
