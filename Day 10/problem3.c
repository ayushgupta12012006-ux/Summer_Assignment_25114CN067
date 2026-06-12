// Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321
#include <stdio.h>
void pattern(int row){
    for(int i=1;i<=row;i++){
        for(int j= row-1;j>=i;j--){
            printf(" ");
        } 
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--){
                printf("%d",l);}
        printf("\n");
    }
        
    }


int main(){
    int a;
    printf("ENter number of rows: ");
    scanf("%d",&a);
    pattern(a);
    return 0;
}