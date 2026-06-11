// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE
#include <stdio.h>
void pattern (int row){
    char ch= 'A';
  
    for(int i=1;i<=row;i++){
          
        for(int j = 1;j<=i;j++){
            printf("%c",ch);
           
        }
        printf("\n");
         ch++;
    }
}
int main (){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    pattern(a);
}