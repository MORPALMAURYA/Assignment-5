// Q.8 	Write a program to print squares of the first N natural numbers 

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf(" %d\n",i*i);
    return 0;
}
