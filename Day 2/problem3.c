//Write a program to find product of digits.
#include<stdio.h>
int product(int num){
    int rem;
    int productnum=1;
   
    while(num>0){
    rem = num%10;
    productnum= productnum*rem;
    num/=10;
    }

    return productnum;

}
int main(){
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    printf("Product of number=%d",product(n));
    return 0;
}