#include<iostream>
using namespace std;

void fun()  //zroori nhi ki throw try ke andar hi ho...function definition me bhi ho sakta hai.
{
throw;
}

int main()
{
   cout<<"Welcome\n";
   int i=1;
   try{
       if(i==1)
          fun();

       cout<<"In try";  
   } 
   catch(int e)
   {
       cout<<"\nException number: "<<e;
   }
   cout<<"\nLast line.";

   return 0;
}

/*
CATCH
-> when an exception is caught, arg will recieve its value.
-> you can specify only type in catch as arg is optional.
-> any type of data can be caught (int, double bool, string), including calsses that we create.

THROW
-> must be executed either within the try block or from any function which is called in try block.
if throw doesnt throw anything 
this output comes:
terminate called without any active exception.
*/