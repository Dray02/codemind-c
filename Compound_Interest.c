#include<stdio.h>
#include<math.h>
int main()
{
    int t,p,r;
    float ci,x;
    scanf("%d%d%d",&p,&r,&t);
    ci=(p*(pow(1+(r)/100.0,t)));
    x=ci-p;
    printf("%.2f",x);
}