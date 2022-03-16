#include <iostream>
using namespace std;

// through constructor

class product
{
    int i, j;

public:
    void setData(int x, int y)
    {
        i = x;
        j = y;
    }
    void showData()
    {
        cout << i << " " << j << endl;
    }

    int getI()
    {
        return i;
    }

    int getJ()
    {
        return j;
    }
};

class item
{
    int a, b;

public:
    item(product p)
    {
        a = p.getI();
        b = p.getJ();
    }
    void showData()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    product p1;
    p1.setData(3, 4);
    p1.showData();
    item i1(p1); // item i1=p1;
    i1.showData();
}

/*
class to class type conversion
->can be done through casting operator.
->can be done through constructor.
*/