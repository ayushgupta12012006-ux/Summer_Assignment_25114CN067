//  Write a program to print a character pyramid   
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA    
#include <stdio.h>
void pattern(int row){
    for(int i=1;i<=row;i++){
        char ch = 'A';

        for(int j= row-1;j>=i;j--){
            printf(" ");
        } 
        for(int k=1 ;k<=i;k++){
            printf("%c",ch++);
            
        }
        ch-=2;
        for(int l=1;l<i;l++){
                
                printf("%c",ch--);}
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