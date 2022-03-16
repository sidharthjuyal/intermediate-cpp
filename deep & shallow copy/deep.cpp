#include <iostream>
using namespace std;

class box
{
public:
    int *breadth;
    box()
    {
        breadth = new int;
    }
    void setDimension(int x)
    {
        *breadth = x;
    }
    void showDimension()
    {
        cout << "Breadth: " << *breadth << endl;
    }
    box(box &b)
    {
        breadth = new int;
        *breadth = *(b.breadth);
    }
    ~box()
    {
        delete breadth;
    }
};

int main()
{
    box b1;
    b1.setDimension(12);
    b1.showDimension();

    box b2 = b1;
    b2.showDimension();

    *(b1.breadth) = 69;

    b1.showDimension();
    b2.showDimension();
}

/*
DEEP COPY
-> In Deep copy, an object is created by copying data of all variables and it also allocates similar memory resources with the same value to the object


Shallow copy:
-> Copies the member values from one object into another.
-> if you have pointer member variables, then both the original and the copied pointer variable points to the same memory location.

Deep Copy:
-> Copies the member values from one object into another.
-> Any pointer variables are duplicated and points to two different memory location.
*/