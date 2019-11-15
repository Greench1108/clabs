#include<stdio.h>
#include<string.h>
int strindex (char m[], char n[])
{
    int x,y,z,pos=0;
    for(x = 0;m[x] !='\0'; x++){
        for(y = x,z=0;n[z]!='\0'&& m[y]==n[z];y++,z++);
        if(n[z]=='\0'){
        pos = x+1;
    }
    }
    if(pos >0)
    return pos-1;
    return -1;
}
main(){
    char a[100];
    char b[100];
    printf("please input the chain of characters\n");
    scanf("%s %s", a,b);
    printf("%d\n",strindex(b,a));
}