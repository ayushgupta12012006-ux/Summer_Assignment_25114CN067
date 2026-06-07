#include <stdio.h>
int perfectnum(int num){
    int i=1,sum=0;

    for (i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
        
    }
    return sum;

}
int main(){
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Its not a perfect number");
    }
    else if(n==perfectnum(n)){
        printf("Number is a perfect number.");
    }
    else {
        printf("Its not a perfect number.");
    }
          return 0;
}