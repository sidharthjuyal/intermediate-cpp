#include<iostream>
using namespace std;

class Dummy
{
    public:
    const int x;
    int &y;

    Dummy(int i,int j):x(i),y(j)  //used to initialize constant and reference member variales, if you do not wish to initialize them at the time of declaration.
    //(we have to initialize them at the time of declaration.)
    { 
        
    }
};

int main()
{
   Dummy d(4,5); 
}

/*
INITIALIZER LIST
-> used to initialize data members of a class.
-> the list of members to be initialized is indicated with constructor as a comma separated list followed by a colon.
*/