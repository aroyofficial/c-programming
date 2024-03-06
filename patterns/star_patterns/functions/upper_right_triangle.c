/*
 * Write a C program to print the following pattern.
 * 
 * *
 * **
 * ***
 * ****
 * *****
*/

#include<stdio.h>

void print(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
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