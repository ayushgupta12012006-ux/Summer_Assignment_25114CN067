//Write a program to find largest prime factor 
#include <stdio.h>
int largestprime(int num){
 int Lprime=1;
 if(num%2){
    Lprime = 1;
    while(num%2==0)
    num/=2;
 }
 for(int i=3;i<=num;i++){
    if(num%i==0){
        Lprime=i;
        while(num%i==0)
        num/=i;
    }

 }
 if(num>2){
    Lprime=num;
 }
 return Lprime;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Largest prime factor=%d",largestprime(n));
    return 0;
}