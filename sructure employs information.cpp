#include<stdio.h>
int main()
{
    struct emp
    {
        int age;
        char name[20];
        int bsal;
    } ;
    struct emp e[30];
    int i,m,n;
    printf("enter number of records,n \n ");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the name ,age ,salary\n");
        scanf("%s%d%d",&e[i].name,&e[i].age,&e[i].bsal);
    }
    printf("information of employees\n");
    for(i=1;i<=n;i++)
    {
        printf("No. :%d\n,name :%s\n,age :%d\n,bsal :%d\n",i,e[i].name,e[i].age,e[i].bsal);;
    }
}
