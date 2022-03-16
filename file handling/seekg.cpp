#include <iostream>
#include <fstream>7u 2wdc
using namespace std;

int main()
{
   ifstream fin;
   fin.open("text.txt");
   char ch;
   cout << fin.tellg() << endl;
   ;

   cout << char(fin.get()) << " " << fin.tellg() << endl;
   cout << char(fin.get()) << " " << fin.tellg() << endl;

   fin.seekg(6);
   cout << char(fin.get()) << " " << fin.tellg();

   // now get pointer is changed after fin.get();
   cout << " " << fin.tellg();
   // fin.seekg(ios_base::beg);
   // get pointer goes to beginning

   // fin.seekg(ios_base::end);
   // get pointer goes to end

   // fin.seekg(ios_base::cur);
   // get pointer goes to current

   fin.seekg(2, ios_base::cur); // get pointer points to 2 places ahead of current point
   cout << endl
        << fin.tellg();

   fin.seekg(-2, ios_base::end);
   // 2 places back from end
   cout << endl
        << fin.tellg();

   fin.seekg(2, ios_base::beg);
   // 2 places ahead from beginning
   cout << endl
        << fin.tellg();

   fin.close();
}

/*
seekg()
->defined in istream class.
-> syntax:
fin.seekg(int);
fin.seekg(int, iosbase::your_choice)

*/