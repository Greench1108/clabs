#include<stdio.h>
int main()
{
  unsigned int a=1,n=0,b=1;
  while (a!=0)
  {
    a=a<<1;
    n=n+1;
  }
  while (b>0)
  {
   b=b+1;
  }
  b=b-1;
  printf("%d\n",n);
  printf("%u\n",b);
  return 0;
}