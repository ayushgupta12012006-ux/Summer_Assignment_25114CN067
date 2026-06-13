// Write a program to Write function to find sum of two numbers. 
#include <stdio.h>
int sum(int a,int b);
int main (){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int output = sum(a,b);
    printf("sum of two number: %d",output);
}
int sum(int a,int b){
    return a+ b;
}