#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
    private:
    int pan;
    float tax,taxincome;
    char name[30];
    public:
        void inputinfo();
        void taxcalc();
        void displayinfo();
};

        void employee::taxcalc()
    {
         int diff=0;
         if(taxincome<250000)
            tax=0;
         else if(taxincome>250000&&taxincome<300000)
          {
            diff=taxincome-250000;
            tax=diff*0.1;
          }
         else if(taxincome>=300000&&taxincome<400000)
          {
            diff=taxincome-300000;
            tax=(diff*.2)+5000;
          }
         else if(taxincome>=400000&&taxincome<400000)
          {
                diff=taxincome-400000;
                tax=(diff*.2)+25000;
          }
        }
        void employee::inputinfo()
        {
           cout<<"enter pan number:"<<endl;
           cin>>pan;
           cout<<endl<<"enter name:";
           fflush(stdin);
           gets(name);
           cout<<endl<<"enter annual taxable income:";
           cin>>taxincome;
           taxcalc();
        }
        void employee::displayinfo()
        {
            cout<<"Pan number="<<pan<<endl;
            cout<<"\nname="<<name<<endl;
            cout<<"\nTax income="<<taxincome<<endl;
            cout<<"\nTax="<<tax<<endl;

        }



int main()
{
    employee el;
    el.taxcalc();
    el.inputinfo();
    el.displayinfo();

}

