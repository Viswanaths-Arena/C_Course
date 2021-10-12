/*
@File    :   scanf.c
@Time    :   2021/09/31
@Author  :   Chandra Kiran Viswanath Balusu
*/
#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a Value\n");
    scanf("%s %d", str, &i);
    printf("Entered Values are : %s %d", str, i);
    return 0;
}
