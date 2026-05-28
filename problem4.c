// Write a program to count digit in a number 
#include <stdio.h>


int count(int n) {
    int count = 0;

    // Handle the case where the number is 0
    if (n == 0) {
        return 1;
    }

    // Make the number positive if it's negative
    if (n < 0) {
        n = -n;
    }

    // Loop until the number becomes 0
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the counter
    }

    return count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = count(num);
    printf("Number of digits: %d\n", result);

    return 0;
}
