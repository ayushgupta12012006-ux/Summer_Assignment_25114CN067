#include <stdio.h>


int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    int gcd = GCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
