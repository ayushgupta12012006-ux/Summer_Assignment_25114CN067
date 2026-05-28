// Write a program to Print multiplication of a given number 
#include <stdio.h>
int main(){
    int n,t=1,R;
    scanf("%d",&n);
    for(t;t<=10;t++){
        R=n*t;
        printf("%d*%d=%d\n",n,t,R);

    }
    return 0;
}