/* Write a C program to check whether a number is even or odd. */

#include<stdio.h>

int isEven(int n) {
    return n % 2 == 0 ? 1 : 0;
}

int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = isEven(n);
    result == 0 ? printf("Odd") : printf("Even");
    return 0;
}