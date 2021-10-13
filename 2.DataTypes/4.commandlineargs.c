/*
@File    :   commandlineargs.c
@Time    :   2021/10/13
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main(int argc, char *argv[]){
	int noarg = argc;
	char *char1 = argv[0];
	char *char2 = argv[1];
	char *char3 = argv[2];

	printf("Number of args : %d\n", noarg);
	printf("Arg1 is : %s\n", char1);
	printf("Arg2 is : %s\n", char2);
	printf("Arg3 is : %s\n", char3);
	return 0;
}