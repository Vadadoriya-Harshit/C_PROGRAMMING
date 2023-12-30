#include <stdio.h>

int main() {
    int m, n;

    // Read the value of m
    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Determine the value of n based on the value of m
    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    // Display the value of n
    printf("The value of n is: %d\n", n);

    return 0;
}
