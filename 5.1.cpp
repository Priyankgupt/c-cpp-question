#include<iostream>
#include<string>
using namespace std;
int main()
{
    int k,i,n;
    cout<<"enter the operator key"<<endl;
    cin>>k;
    switch(k)
    {
    case 1:
        {
            cout<<"enter the nunber"<<endl;
            cin>>n;
            if(n%2==0&&n%1==0)
            {
                cout<<"number is composite "<<endl;
            }
            else
            {
                 cout<<"number is not composite "<<endl;
            }
            break;
        }
    case 2:
        {
            cout<<"enter the  number"<<endl;
            cin>>n;
            int smallest=9;
            while(n)
            {
                int r=n%10;
                smallest=min(r,smallest);
                n=n/10;
            }
            cout<<"smallest"<<smallest<<endl;
            break;


        }
    case 3:
        {
            cout<<"choose correct option"<<endl;
        }
    }
}
