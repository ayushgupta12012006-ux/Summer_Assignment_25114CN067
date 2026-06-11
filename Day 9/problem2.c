// Write a program to Print reverse number 
// triangle. 
 
// 12345 
// 1234 
// 123 
// 12 
// 1
 #include <stdio.h>
 void pattern(int row){
    for(int i=1;i<=row;i++){
        int num=1;
        for(int j=row;j>=i;j--){
            printf("%d",num);
            num++;
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