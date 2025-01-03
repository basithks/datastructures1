//multiplication table of number//
#include<stdio.h>
int main()
{
    int n;
    printf("eneter the limit");
    scanf("%d",&n);
    for (int i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}