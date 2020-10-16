#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[100],n,i,c=0;
    cout<<"enter the number greater than 2"<<endl;
    cin>>n;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
        if(a[i]==1)
        {
            c++;
        }
    }
    cout<<"Binary of the given number="<<endl;
    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"number of ones :"<<c<<endl;

    if(c=(c%2==0))
    {
        cout<<"given number is evil number"<<endl;
    }
    else
    {
        cout<<"given number is not evil number"<<endl;
    }


}
