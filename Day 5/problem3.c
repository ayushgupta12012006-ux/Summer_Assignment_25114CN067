//Write a program to print fact of a number
#include <stdio.h>
void factofnum(int num){
    
    for(int i=1;i<=num;i++){
        if(num%i==0){
           printf("%d\n",i);

        }

    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
   factofnum(n);
    
    return 0;
}