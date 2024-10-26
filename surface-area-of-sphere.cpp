//Functional Approach

#include <stdio.h>

int sfa (float radius){
	return 4*3.14*radius*radius;
}

int main (){
        float radius, surfacearea;
        
	printf ("Enter radius of the sphere:");
	scanf("%f",&radius);

	surfacearea = sfa(radius);

	printf("The surface area of the sphere is:%.2f",surfacearea);
	return 0;
}

