#include <iostream>
using namespace std;

class complex
{
    int a;
public:
    void showData()
    {
        cout << a<<endl;
    }
    complex(int k)
    {
        a=k;
    }
    complex()
    {
      cout<<"Normal Constructor."<<endl;
    }
};

int main()
{
    complex c1;
    int x = 5;

    c1 = x;   //this is equivalent to:
    //c1.complex(x);
    c1.showData();
}

// int,char,float, double,bool = primitive data types
// primitive to class type conversion
//this can be implemented through constructor