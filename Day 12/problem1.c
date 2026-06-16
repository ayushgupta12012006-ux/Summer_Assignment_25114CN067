// Write a program to Write function for palindrome. 
#include <stdio.h>

int isPalindrome(int a);

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    if (isPalindrome(a)) {
        printf("%d is a palindrome number.\n", a);
    } else {
        printf("%d is not a palindrome number.\n", a);
    }

    return 0;
}

int isPalindrome(int a) {
    int originalNum = a;
    int revnum = 0;
    int remainder;

    while (a > 0) {
        remainder = a % 10;
        revnum = revnum * 10 + remainder;
        a /= 10;
    }

    return (originalNum == revnum);
}
