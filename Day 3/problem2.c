//Write a program to print prime numbers in a range
#include<stdio.h>

int Prime(int num)

{

    if(num < 2){

        return 0;

    }

    else

    {  

        

        for(int i = 2; i <= num/2; i++) {                                                                                                                      
            if(num % i == 0)
    {
           return 0;
         }

        }

    }

    return 1;

}

int main()

{

    int n1, n2;

    printf("Enter the lower and upper values: ");

    scanf("%d %d",&n1, &n2);

    for(int i=n1;i <= n2;i++){

        if(Prime(i))

            printf("%d ",i);

    }

    return 0;

}