#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n,k,l;
    char ch='A';
    cout<<"enter the limit"<<endl;
   cin>>n;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<ch++;
        }
       cout<<"\n";
    }
}
