#include "point.h"
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main(void) {
	float x, y;
	Point p1, p2;
	
	printf("POINT 1\n");
	printf("Enter a value for the x: ");
	scanf("%f", &x);
	printf("Enter a value for the y: ");
	scanf("%f", &y);
	
	p1= createPoint(x, y);
	
	printf("POINT2\n");
	printf("Enter a value for the x: ");
	scanf("%f", &x);
	printf("Enter a value for the y: ");
	scanf("%f", &y);
	
	p2= createPoint(x, y);
	
	printf("La distanza tra i due punti inseriti è: %.2f\n", distanza(p1, p2));
	return 0;
}
	

