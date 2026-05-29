// Write a program to reverse a number
#include <stdio.h>
int reverse(int num)
{ int remainder=0;
    int reversenum=0;
    while(num>0)
    {
        remainder=num%10;
        reversenum=reversenum*10+remainder;
            num/=10;}
    return reversenum;

}
int main()
{int n;


printf("Enter the number =");
scanf("%d",&n);
printf("Reverse of the number %d",reverse(n));
return 0;}