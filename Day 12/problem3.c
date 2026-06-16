// Write a program to Write function for Fibonacci.
#include <stdio.h>
int fibo(int num){
    int b=1,a=0,term;
    if(num==0)
    return a;
    if(num==1)
    return b;
    int i;
    for(i=2;i<=num;i++){
        term=a+b;
         a=b;
         b=term;
       
        
    }
    return a;

}
int main(){
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Term 1=0\n");
    printf("Term 2=1\n");
    for(int j=3;j<=n;j++){
        printf("Term %d=%d",j,fibo(j));
        printf("\n");
    }
    return 0;
}