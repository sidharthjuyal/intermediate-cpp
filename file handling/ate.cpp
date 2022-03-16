#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  system("cls");

  ofstream fout;
  ifstream fin;

  fout.open("ate.txt", ios::ate | ios::app);
  fin.open("ate.txt", ios::ate | ios::app);

  int pos = fout.tellp();
  cout << pos;

  int loc = fin.tellg();
  cout << loc;

  fout.close();
  fin.close();
}