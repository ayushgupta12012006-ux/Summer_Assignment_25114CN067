// Write a program to Print hollow square 
// pattern. 
// ***** 
// *      * 
// *      * 
// *      * 
// *****
#include <stdio.h>

void pattern(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
           
            if (i == 1 || i == row || j == 1 || j == row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}

int main() {
    int a;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    pattern(a);
    return 0;
}
