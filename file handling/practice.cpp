#include<iostream>
#include<conio.h>
#include<stdlib.h>
 
using namespace std;
int sum(int x, int y)
{
    int num=0;
    while(y>0)
    {
        num=x&y;
        x=x^y;
        y=num<<1;
    }
    return x;
}
int main()
{
 
    cout << "Enter the numbers:";
    int x, y;
    cin >> x >> y;
    cout << "The Sum is: "<< sum(x, y);
}