#include<stdio.h>
 int main()
{
    int n=0;
    int x=0;
    int n2=0;
    scanf("%d",&n2);
    while(n2!=0)
    {
        x=n2%2;
        n2=n2/2;
        if(x==1)
        n=n+1;
    }
    printf("%d\n",n);
    return 0;
}