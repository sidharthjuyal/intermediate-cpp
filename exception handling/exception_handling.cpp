#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome";
    try
    {
        throw 1;
        cout << "In try"; // agar throw chal gaya to ye line nahi chlegi, if throw works then all the other lines in try block after throw are not executed.
    }
    catch (int e)
    {
        cout << "\nException number: " << e;
    }
    cout << "\nLast line.";

    return 0;
}

/*
EXCEPTIONS:
-> exception is an abnormal behaviour, run time error.
-> exceptions are off beat situations that a program should be ready to handle with an appropriate response.

EXCEPTION HANDLING:
-> C++ provides a built-in error handling mechanism that is called exception handling.
-> using exception handling, you can more easily manage and respond to runtime error.

TRY,CATCH and THROW
-> program statements that you want to check for exceptions are contained in a try block.
-> if any exception occurs within the try block, it is thrown.(using throw).
-> the exception is caught, using catch, and processed.

syntax:

try{

}
catch(type1 arg){

}
catch(type2 arg){

}
...
catch(typeN arg){

}

-> try ke sath catch zroori hai, catch ke sath try zroori hai.
*/