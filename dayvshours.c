#include<stdio.h>
int main()
{
    int d, n;
    printf("No. of days: ");
    scanf("%d", &n);
    if (n>=365)
    {
        d=n/365;
        n=n%365;
        printf("\n number of years %d",d);
    }
    if(n>=30)
    {
        d=n/30;
        n=n%30;
        printf("\n number of months %d",d);

    }
    if(n>=1)
    {
        d=n/1;
        printf("\n number of days  %d",d);
    }

}

