#include <iostream>
using namespace std;

namespace number1
{
     int x = 5;
     void getX()
     {
          cout << " " << x << endl;
     }
}
namespace n1 = number1; // you can use alias now

namespace number2
{
     int x = 6;
     void getX()
     {
          cout << " " << x << endl;
     }
}

using namespace number2; // now you dont have to use scope resolution operator

int main()
{
     cout << n1::x; // alias
     n1::getX();

     cout << x;
     getX();
}
/*
-> header file contains the declaration of idetifiers such as predefined functions, objects, macros etc;

library files conatins the definition of these predefined functions, objects, macros etc.
ex-
std namespace.

preprocessor directives are the directives, which give instruction to the compiler to process the information before the actual compilation starts.

#include directive
Tells the preprocessor to include the contents of a specified file at the point where the directive appears.


 NAMESPACE
-> it is a container for idetifiers.
-> it puts the names of its members in a distinct space so that they dont conflict with the names in other namespaces or global namespaces

-> namespace definition doesnt end with semicolon like classes.
-> the namespace definition must be at global scope or nested inside other namespace.
-> you can use alias.
for ex:   namespace ms=MySpace;

*/