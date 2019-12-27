#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    int a[100];
    int i =1;
    int j = 0;
    int b=0;
    int c = 0;
    int temp;
    for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    for(b=0;b<argc-2;b++){
     if(a[b]<a[b+1]) 
{
temp=a[b];
a[b]=a[b+1];
a[b+1]=temp;}
}
printf("The min is：%d\n",a[argc-2]);
return 0;
}