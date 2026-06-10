// Write a program to Print number triangle.
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>
void pattern(int row){
    int num =1 ;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
        printf("%d",j);
       
        
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    pattern(a);
    return 0;
}