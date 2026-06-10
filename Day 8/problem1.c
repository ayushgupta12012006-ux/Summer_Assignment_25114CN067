// Half pyramid pattern
#include <stdio.h>
void halfpyramid(int row){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    halfpyramid(a);
    return 0;}