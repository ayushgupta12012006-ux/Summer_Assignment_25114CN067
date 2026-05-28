//Write a program to Find factorial of a number
#include <stdio.h>
int fact(int n){
    if (n==0||n==1)
    return 1;
    else 
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Write the number you want to get factorial of=");
    scanf("%d",&n);
    printf("Factorial of number is %d",fact(n));
    return 0;}
