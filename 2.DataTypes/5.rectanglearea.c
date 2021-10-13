/*
@File    :   rectanglearea.c
@Time    :   2021/10/13
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	double a,b,p,area;
	printf("Enter the 1st side of rectangle : ");
	scanf("%lf", &a);
	printf("\nEnter the 2nd side of rectangle : ");
	scanf("%lf", &b);
	area = a*b;
	p = 2*(a+b);

	printf("Perimeter of the rectangle with sides %lf and %lf is %.2lf\n",a,b,p);
	printf("Area of the rectangle with sides %lf and %lf is %.4lf",a,b,area);
	return 0;
}