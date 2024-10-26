#include <stdio.h>

//Functional Approach

float calcircumference(float radius)
{
	return 2*3.14*radius;
}

int main ()
{
	float radius, circumference;
              
	printf("Enter radius of the circle:");
	scanf("%f",&radius);

	circumference = calcircumference(radius);

	printf("The circumference of the circle is:%.2f\n",circumference);

	return 0;
}

