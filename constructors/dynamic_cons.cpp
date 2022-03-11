#include<iostream>
using namespace std;

class complex{
    int a,b;
    int *p;
    public:
    complex(int x=0,int y=0, int z=0)
    {
       a=x;
       b=y;
       p=new int;
       *p=z; 
    }
};

int main()
{
    complex c1,c2,c3(3,4,5);
    return 0;
}

/*
DYNAMIC CONSTRUCTOR
->  constructor can allocate dynamically created memory to the object.
-> when allocation of memory is done dynamically using dynamic memory allocator new in a constructor.

q) what is the work of dynamic constructor?
-> to create a memory block which is pointed by a member of the object.
-> used to allocate memory to the objects in run time.

draw diag.
*/