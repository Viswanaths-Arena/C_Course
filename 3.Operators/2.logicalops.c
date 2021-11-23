/*
@File    :   logicalops.c
@Time    :   2021/10/14
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	_Bool a = 0;
	_Bool b = 1;
	_Bool or,and,not;
	or = a || b;
	and = a && b;
	not = !a;
	printf("OR : %d\nAND :%d\nNOT of a : %d", or,and,not);
	return 0;
}