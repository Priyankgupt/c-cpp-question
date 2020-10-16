#include<stdio.h>
int main()
{
    int h,l,i,n,s,t,y;
    printf("enter two  numbers h,l");
    scanf("%d%d",&h,&l);
    for(l=100;l<h;l++)
   {
    n=l;
    s=0;
    while(n!=0)
    {
    t=n%10;
    y=t*t*t;
    n=n/10;
    s=s+y;
    }
    if(s==l)
        printf("\n%d",l);
    }
}
