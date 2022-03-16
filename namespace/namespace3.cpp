#include <iostream>
using namespace std;

namespace n1
{
    int a = 10;
    void f1();

    class A
    {
    public:
        void f1();
    };
}

void n1::f1()
{
    cout << n1::a;
}

void n1::A::f1()
{
    cout << "\nHello";
}

using namespace n1;

int main()
{
    f1();
    A a;
    a.f1();
}

/*
using keyword
-> it allows you to import a namespace into another namespace or any program.
*/