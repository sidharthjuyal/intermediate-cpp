#include<iostream>
using namespace std;

template <class X, class Y> auto big(X a,Y b)
{
   return (a>b)?a:b;  
}
//X and Y are placeholders for datatypes
template < class X> X small(X a, X b)
{
     return(a>b)?b:a;
}

int main()
{
   cout<<big(6,5);
   cout<<big(4,5.4);
   cout<<small(2,1);
}

/*
 the keyword template is used to define function template and class template.

 it is a way to make your function or class generalized as far as data type is concerned.

 function tempelate is also known as generic function.
 syntax:

 template < class any_name> any_name Func_name(any_name argu1, any_name argu2....)
*/