#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   ofstream fout;
   fout.open("text.txt", ios::app | ios::ate);
   cout << fout.tellp();
   fout.seekp(-2, ios_base::cur); // same like seekg()
   cout << fout.tellp();

   fout.close();
}

/*
seekp()
->defined in istream class.
-> syntax:
fin.seekg(int);
fin.seekg(int, iosbase::your_choice)
*/