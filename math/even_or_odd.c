/* Write a C program to check whether a number is even or odd. */

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Odd") : printf("Even");
    return 0;
}