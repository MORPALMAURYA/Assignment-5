// write a program to print first N even natural numbers.

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    if(i%2==0)
    printf("%d\n",i);
    return 0;
}