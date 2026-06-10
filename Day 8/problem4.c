// Write a program to Print repeated-number 
// pattern. 
// 1 
// 22 
// 333 
// 4444 
// 55555
 #include <stdio.h>
 void pattern(int row){
    int num =1;
    for ( int i=1;i<=row;i++){
        for(int j =1;j<= i;j++){
            printf("%d",num);
        }
        printf("\n");
        num=num+1;
    }
 }
int main()
 {int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    pattern(a);
    return 0;
 }