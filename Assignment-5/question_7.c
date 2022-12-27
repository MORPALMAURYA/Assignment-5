// write a program to print first N even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    if(i%2==0)
    printf("%d\n",i);
    return 0;
}