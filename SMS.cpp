#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    char gender;
    char mail[30];
    char address[50];
    int marks;
    float result;

public:
    void getdetails (void);
    void putdetails (void); 
}

void Student::getdetails (void)
{   cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age;
    cout<<"\nEnter Gender:";
    cin>>gender;
    cout<<"\nEnter E-mail:";
    cin>>mail;
    cout<<"\nEnter Address:";
    cin>>address;
    cout<<"\nEnter Marks Out Of 500:";
    cin>>marks;
    cout<<"\n";
    result=(float)marks/500*100;
};

void Student::putdetails (void)
{   cout<<"Student Details:\n";
    cout<<"Name:"<<name<<"\nAge:"<<age<<"\nGender:"<<gender<<"\nE-mail:"<<mail<<"\nAddress:"<<address<<"\nTotal Marks:"<<marks<<"\nResult:"<<result<<"%";
}

int main(){
    Student std[5];
    int n,loop;
    cout<<"Enter total number of students:";
    cin>>n;
    for (loop=0; loop<n; loop++){
        cout<<"Enter Details Of Each Student:"<<loop+1<<"\n";
        std[loop].getdetails();

    }
    cout<<endl;
    for(loop=0; loop<n; loop++){
        cout<<"Details Of Students:"<<loop+1<<"\n";
        std[loop].putdetails();
    }
    return 0;
}