// Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     * 
#include <stdio.h>
void pattern(int row){
    for(int i=1;i<=row;i++){
        for(int j= 1;j<=i;j++){
            printf(" ");
        } 
        for(int k=1;k<=11-2*i;k++){
            printf("*");
        }
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