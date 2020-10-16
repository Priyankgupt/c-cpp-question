#include<stdio.h>
int main()
{
    struct day
    {
        int date,month,year;
    };
    struct day today,tommorrow;
    static int dmp[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("enter todays day\n");
    scanf("%d%d%d",&today.date,&today.month,&today.year);
    if(today.date<=dmp[today.month-1])
    {
        if(today.date!=dmp[today.month-1])
        {
            tommorrow.date=today.date+1;
            tommorrow.month=today.month;
            tommorrow.year=today.year;
        }
        else
            if(today.month==12)
        {
            tommorrow.date=1;
            tommorrow.month=1;
            tommorrow.year=today.year+1;

        }
        else
        {
            tommorrow.date=1;
            tommorrow.month=today.month+1;
            tommorrow.year=today.year;
        }
         printf("tommorrow's date is%d/%d/%d\n",tommorrow.date,tommorrow.month,tommorrow.year);
    }
    else
        printf("don,t play with me,enter correct date\n");
}
