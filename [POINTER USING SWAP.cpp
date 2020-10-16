#include<stdio.h>
void swap(int *a,int *b )
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x,y,z;
    printf("\n enter 2 nos.");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("value of x=%d\n",x);
    printf("value of y =%d\n",y);
}
