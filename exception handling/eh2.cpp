#include <iostream>
using namespace std;

int main()
{
  double num, div, result;
again:
  cout << "\n\nEnter a positive number: ";
  cin >> num;
  cout << "Enter divisor: ";
  cin >> div;

  result = num / div;

  try
  {
    if (num < 0)
      throw -1; // can be float or string also
    if (div == 0)
      throw 0;
  }
  catch (int e)
  {
    if (e == -1)
    {
      cout << "Exception: Negative number encountered.\nEnter again...";
      goto again;
    }
    if (e == 0)
    {
      cout << "Exception: Divide by zero.\nEnter again...";
      goto again;
    }
  }
  cout << "\nResult: " << result;
}