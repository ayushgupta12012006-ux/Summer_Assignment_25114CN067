// Write a program to count set bits in a number 
#include <stdio.h>


int countSetBits(int num) {
    int count = 0;

   
    while (num > 0) {
        num = num & (num - 1); 
        count++;
    }

    return count;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = countSetBits(n);
    printf("Number of set bits : %d\n", result);

    return 0;
}
