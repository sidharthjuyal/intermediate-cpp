#include <iostream>
using namespace std;

template <class T, class U>
class A
{
    T x;
    T y;

public:
    A() { cout << "Constructor Called" << endl; }

    T show(U a, U b)
    {
        return a + b;
    }
};

int main()
{
    A<double, double> a;
    A<double, int> b;
    cout << b.show(4, 4) << endl;
    cout << a.show(4.5, 4.5);
    return 0;
}