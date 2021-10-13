/*
@File    :   enums(exerise).c
@Time    :   2021/10/13
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(){
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	enum Company var1 = XEROX;
	enum Company var2 = GOOGLE;
	enum Company var3 = EBAY;
	printf("%d\n",var1);
	printf("%d\n",var2);
	printf("%d",var3);
	return 0;
}