// Convert binary to decimal
#include <stdio.h>
int binarytodecimal(int num){
   int rem,base =1,decimal;
   while (num>0){
    rem =num%10;
    decimal += rem*base;
    num/=10;
    base *=2;

   }
   return decimal;
}
int main (){
    int n;
    printf("Enter the binary: ");
    scanf("%d",&n);
    printf("The decimal of the number is %d",binarytodecimal(n));
    return 0;
}