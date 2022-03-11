#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << a << " " << b << endl;
    }

    operator int()
    {
        return (a);
    }
};

int main()
{
    complex c1;
    c1.setData(3, 4);
    c1.showData();

    int x; // int type

    x = c1; // this means that
    // x=c1.operator int()
    cout << x;
}

/*
class to primitive type conversion
-> can be implemented with casting operator.

operator type()
{
    ...
    return(type-data);
}
*/