#include <iostream>
using namespace std;

//use of initializer list
class point
{
    int x, y;

public:
    point(int a = 0, int b = 0) : x(a), y(b)//one use
    {
        /* above can also be written as:

        pint(int a=0, int b=0)
        {
            x=a;
            y=b;
        }
        */
    }
    int getX()
    {
        return x;
    };
    int getY() 
    { 
        return y; 
    };
};

int main()
{
    point p(8, 4);
    cout << p.getX() << " ";
    cout << p.getY();
}