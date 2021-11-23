/*
@File    :   assignmentops.c
@Time    :   2021/10/14
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	int a = 37;
	int b = 26;
	int c;
	c = a+b;
	printf("Sum of a and b : %d\n", c);
	c += a;
	printf("c added with a : %d\n", c);
	c -= b;
	printf("c substracted with b : %d\n", c);
	c *= a;
	printf("c(sum) multiplied with a : %d\n", c);
	return 0;
}