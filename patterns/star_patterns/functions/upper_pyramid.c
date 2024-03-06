/*
 * Write a C program to print the following pattern.
 * 
 *          *
 *         ***
 *        *****
 *       *******
 *      *********
*/

#include<stdio.h>

void print(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    print(n);
    return 0;
}