// Write a program to Write function to find factorial. 
#include <stdio.h>

int calculateFactorial(int n);

int main() {
    int number;
    int factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        factorial = calculateFactorial(number);
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return 0;
}

int calculateFactorial(int n) {
    int fact = 1;
    
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    
    return fact;
}
