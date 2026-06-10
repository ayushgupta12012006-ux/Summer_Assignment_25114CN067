// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE
#include <stdio.h>
void alphaptr(int row){
    char ch ='A';
    for(int i=1;i<=row;i++){
        for(int j =1;j <= i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");

    }
}
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    alphaptr(a);
    return 0;
}