#include <iostream>
using namespace std;

class Dummy
{
  int a, b;

public:
  Dummy(int x = 0, int y = 0)
  {
    a = x;
    b = y;
  }
  void showData()
  {
    cout << a << " " << b << endl;
  }
  Dummy(Dummy &d)
  {
    a = d.a;
    b = d.b;
  }
};

int main()
{
  Dummy d1(3, 4);
  Dummy d2 = d1; // or Dummy d2=d1;
  d2.showData();
  return 0;
}

/*
shallow copy can be done in two ways:

-> by copy constructor
ex:-
  i)  Dummy d1(d2);   or
  ii) Dummy d1=d2; (during initialization if you assign one object with other,then copy constructor is used)

-> default assignment operator
ex:-
  i)Dummy d1;
    d1=d2;   // this is different(read title)

*) SHALLOW COPY
-> an object is created by simply copying the data of all variables of the original object


Shallow copy:
-> Copies the member values from one object into another.
-> if you have pointer member variables, then both the original and the copied pointer variable points to the same memory location.

Deep Copy:
-> Copies the member values from one object into another.
-> Any pointer objects are duplicated and points to two different memory location.

*/