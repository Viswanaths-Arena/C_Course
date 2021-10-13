/*
@File    :   enums.c
@Time    :   2021/10/13
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
	enum gender {male, female};`
	enum gender mygender = male;
	enum gender othergender = female;
	bool isMale = (mygender == othergender);

	char myChar = '\n';
	printf("%c", myChar);
	return 0;
}