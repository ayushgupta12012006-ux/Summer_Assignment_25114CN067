// Write a program to check whether a number is palindrome
#include <stdio.h>
#include <stdbool.h>
bool palindrome(int num){
    int rem;
    int reversenum=0;
    int original = num;
    while(num>0){
        rem = num%10;
        reversenum=reversenum*10 + rem;
        num/=10;
    }
    if(original==reversenum){
        return true;
    
    }
    else 
    return false;
}
int main(){
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    if(palindrome(n))
    printf("Palindrome");
    else 
    printf("Not Palindrome");
    return 0;

}