#include<stdio.h>
int main()
{
    float C,F;
    float lower,upper,step;
    lower=0;
    upper=100;
    step=5;

    C=lower;
    while(C<=upper){
        F=C*9/5+32;
        printf("%f\t%f\n,C,F");
        C=C+step;
    }
}