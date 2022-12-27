//write a program to print the first n odd natural number in reverse order

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        if(i&1)
            printf("%d\n",i);
    return 0;
}
