#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter how many numbers (max 100): ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
