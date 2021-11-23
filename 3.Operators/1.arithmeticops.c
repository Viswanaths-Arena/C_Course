/*
@File    :   arithmaticops.c
@Time    :   2021/10/14
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	int a = 33;
	int b = 25;
	int mul, add, div, mod, inc, dec, sub;
	mul = a*b;
	add = a+b;
	div = a/b;
	mod = a%b;
	sub = a-b;
	inc = ++a;
	dec = --b;
	printf("Numbers %d and %d\nMultiplication : %d\nDivision : %d\nAddition : %d\nSubstraction : %d\nModulus : %d\nIncrement A : %d\nDecrement B: %d",a,b,mul,div,add,sub,mod,inc,dec);
	return 0;
}