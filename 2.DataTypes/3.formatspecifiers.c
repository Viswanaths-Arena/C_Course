/*
@File    :   formatspecifiers.c
@Time    :   2021/10/13
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	int intvar = 200;
	float floatvar = 333.89;
	double dobvar = 0.98e+19;
	char charvar = 'A';
	_Bool boolvar = 0;
	printf("Integer value = %i\n", intvar);
	printf("Floar Var Value = %f\n", floatvar);
	printf("Double Var Value = %e\n", dobvar);
	printf("Double Var alt Value= %g\n", dobvar);
	printf("Char Value = %c\n", charvar);
	printf("Bool var Value = %i\n", boolvar);

	float somefloat = 96.7589456;
	printf("Rounded float = %.4f", somefloat);
	return 0;
}