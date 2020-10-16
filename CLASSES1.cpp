#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name,course;
    float sub1,sub2,sub3,total,per;
    char grade;

    public:
        void inputinfo()
        {
        cout<<"enter name"<<endl;
        getline(cin,name);
        cout<<"enter course"<<endl;
        getline(cin,course);
        cout<<"enter roll no"<<endl;
        cin>>rollno;
        cout<<"enter sub.marks"<<endl;
        cin>>sub1>>sub2>>sub3;
        }
        void gradecal()
        {
            total=sub1+sub2+sub3;
            per=(total*100)/300;
            if(per>=90)
                grade='A';
            else if(per>=80)
                grade='B';
            else if(per>=60)
                grade='C';
            else if(per>=4+0)
                grade='D';
            else
             grade='E';
        }
        void showinfo()
        {
            cout<<"name="<<name<<endl;
            cout<<"course="<<course<<endl;
            cout<<"roll no="<<rollno<<endl;
            cout<<"percentage="<<per<<endl;
            cout<<"grade="<<grade<<endl;
        }


};
int main()
{
    student ob;
    ob.inputinfo();
    ob.gradecal();
    ob.showinfo();
}
