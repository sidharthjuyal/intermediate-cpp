#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    string str;
    fin.open("file.txt");
    char ch;

    while (!fin.eof())
    {
        fin >> str;
        cout << str << " ";
        // ch=fin.get();
        // cout<<ch;
    }

    fin.close();
}

/*
NOTES

Header files available in C++ for Input/Output operations are:

-> iostream: iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.
-> iomanip: iomanip stands for input-output manipulators. The methods declared in these files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
-> fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

*/