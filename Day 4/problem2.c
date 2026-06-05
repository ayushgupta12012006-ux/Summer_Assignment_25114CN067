#include<stdio.h>
int nfibo(int num){
    int a=0,b=1,term;
    if(num==0)
return a;
if(num==0)
return b;
    for(int i =3;i<=num;i++){
        term=a+b;
        a=b;
        b=term;
        

    }
     return term;

}
int main(){
    int n;
    printf ("Enter the term you want: ");
    scanf("%d",&n);
    printf("Term %d=%d",n,nfibo(n));
    return 0;
}