//Write a program to find LCM of two numbers 
#include <stdio.h>


int lcm(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max; 
        }
        max++; 
    }
}

int main() {
    int num1, num2, Lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    Lcm = lcm(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, Lcm);

    return 0;
}


