// Write a program to Write function to check prime. 
#include <stdio.h>
int prime(int a);
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(prime(a)){
        printf("Number is prime");

    }
    else{
        printf("Number is not prime");
    }
    return 0;
}
int prime(int a){
    int count=0;
       for(int i=1;i<=a;i++){
      if(a % i==0){
        count++;
      }
    }
    if(count==2){
        return 1;
    }
    else {
        return 0;
    }
}