#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch, w[50],y[50];
    int no[26]={0},n,c,t,x;
    printf("enter some text\n");
    scanf("%s",&w);
    n = strlen(w);
    for(c=0;c<n;c++)
    {
        ch= w[c] - 'a';
        no[ch]++;
    }
    t=0;
    for(ch= 'a';ch<='z';ch++)
    {
        x= ch - 'a';
    for(c=0;c < no[x];c++)
    {
        y[t] = ch;
        t++;
    }
  }
  y[t]='\0';
  printf("%s\n",y);
}
