#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    int marks;
      class Address{
          int houseno;
          string city;
          string state;
          int pincode;
          
          public:

          void setAddress(int h, string c, string s, int p)
          {
               houseno=h;
               city=c;
               state=s;
               pincode=p;
          }
          void showAddress()
          {
              cout<<"Address: house no. "<<houseno<<", "<<city<<", "<<state<<" ("<<pincode<<")"<<endl;
          }
      };
    Address add;

    public:
      void setStudent(string n, int a, int m)
        {
            name=n;
            age=a;
            marks=m;
        }
      void setAdress(int h,string c, string s, int p)
      {
           add.setAddress(h,c,s,p);
      }
      void showData()
      {
         cout<<"Student details: \n";
         cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl; 
         cout<<"Marks: "<<marks<<endl;
         add.showAddress(); 
      }

};

int main()
{
    //student::Address.a1;
    //if nested address class was public, and you wanted to create it's object.
    student s1;
    s1.setStudent("Sidharth Juyal",69,100);
    s1.setAdress(420,"Kotdwar","Uttarakhand",246149);
    s1.showData();
}

/*
class inside a class is called a nested class.

a nested class is a member and  has the same access rights as any other member.

the members of an enclosing class have no special access to members of a nested class, the usual access rules shall be obeyed.
*/