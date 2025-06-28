#include <stdio.h>

// Function to print multiplication table
void printTable(int num) {
    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printTable(number);

    return 0;
}


