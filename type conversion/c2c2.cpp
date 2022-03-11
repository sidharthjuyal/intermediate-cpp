#include<iostream>
using namespace std;

//through casting operator

class item{
public:
int a,b;
public:
void showData()
{
    cout<<a<<" "<<b<<endl;
}
};

class product{
int i,j;
public:
void setData(int x,int y)
{
    i=x;    j=y;
}
void showData()
{
    cout<<i<<" "<<j<<endl;
}

operator item()
{
   item temp;
   temp.a=i;
   temp.b=j;
   return temp;
}
};

int main()
{
item i1;
product p1;
p1.setData(3,4);
p1.showData();
i1=p1;
i1.showData();
}

/*
class to class type conversion
->can be done through casting operator.
->can be done through constructor. 
*/