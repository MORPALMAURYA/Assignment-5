//Q.3 write a program to print the first n natural number in reverse order.

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}