// Write a program to Print reverse star pattern. 
// ***** 
// **** 
// *** 
// ** 
// * 
#include <stdio.h>
void pattern ( int row ){
    for(int i=1;i<=row;i++){
        for(int j =row;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    pattern(a);
}