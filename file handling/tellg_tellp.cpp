#include<iostream>
#include<fstream>
using namespace  std;

int main()
{
    ifstream fin;
    fin.open("tellg_tellp.txt");
    int pos;
    char ch;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;

    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin.close();

    ofstream fout;
    fout.open("tellg_tellp.txt",ios::app);
    pos=fout.tellp();
    cout<<endl<<pos;
    fout<<" Siddhuu";
    pos=fout.tellp();
    cout<<pos;
    fout.close();
}

/*
tellg()
-> predefined function
-> defined in istream class
-> syntax:
streampos tellg();
->return the position of the current character in the input stream.
-> gives pos'n of get pointer.

tellp()
-> predefined function
-> defined in ostream class
-> syntax:
streampos tellp();
->return the position of the current character in the output stream.
-> gives pos'n of put pointer.

*/