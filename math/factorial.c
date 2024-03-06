/* Write a C program to calculate the factorial of a number. */

#include<stdio.h>

int main() {
    int n;
    long int result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%ld", result);
    return 0;
}