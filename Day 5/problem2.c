//Write a program to check strong number
#include <stdio.h>
int strongnum(int num){
    int rem,i,sum=0;
    while(num!=0){
        rem=num%10;
        
        int fact =1;
        for(i=1;i<=rem;i++){
            fact*=i;}
            sum+=fact;
            num /=10;}
 
            return sum;

    }
    int main(){
        int n;
        printf("Enter the number:");
        scanf("%d",&n);
        if(n<=0){
            printf("Its not a strong num.");
        }
        else if(n==strongnum(n)){
            printf("Its a strong number");

        }
    else{
        printf("Its not a strong number");
    }
    return 0;
    
 }
