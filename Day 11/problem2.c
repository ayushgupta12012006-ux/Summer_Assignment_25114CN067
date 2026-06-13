// Write a program to Write function to find maximum. 
#include <stdio.h>
int max(int a, int b);
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int output=max(a,b);
    printf("Max of two number is :%d ",output);
    return 0;
}
int max(int a,int b){
    if (a>b){
        return a;
    }
    else {
        return b;
    }
}