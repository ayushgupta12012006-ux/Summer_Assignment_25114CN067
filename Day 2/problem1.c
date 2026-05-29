//Write a program to find sum of digits of a number
#include <stdio.h>
int sumdigits(int num){
    int sum =0;
    while (num>0)
{
 
 sum+=num%10;
 num/=10;
}
return sum;

}

int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Sum of didgit of number is %d",sumdigits(n));
    return 0;

}