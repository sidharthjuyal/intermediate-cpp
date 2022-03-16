#include <iostream>

namespace Myspace
{
    int a = 10, b = 10;
    void f1()
    {
        std::cout << a << " " << b << std::endl;
    }
}

namespace Myspace
{ // this doesnt means redefinition or overriding, it simply means that we are adding on to the code.
    int x = 11, y = 11;

    // int a=89;
    // this will give error as you cannot override the already existing data from the previously same named namespace

    void f2()
    {
        std::cout << x << " " << y << std::endl;
    }
}

int main()
{
    Myspace::f1();
    Myspace::f2();
}

/*
-> a namespace definition can be continued and extended over multiple files, they are not redefined or overridden.
*/
