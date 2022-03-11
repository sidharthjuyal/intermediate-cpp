#include<iostream>
#include<fstream> 
using namespace std;

//ifstream ka object file se data read krne ke liye banate hain
//ofstream ka object ham file me data enter krne ke liye banate hain
//fstream ka object reading or writing dono kar skta hai....

int main()
{
  ofstream fout;
  fout.open("om.txt",ios::app | ios::binary); //open files in 2 or more modes
  string line;
  getline(cin,line);
  fout<<"\n"<<line;
  fout.close();

  ifstream fin;
  fin.open("om.txt");
  fin>>line;
  while(fin)
  {
      cout<<line<<" ";
      fin>>line;
  }
  fin.close();
}

/*
FILE OPENING MODES

-> ios::in       input/read 
(we are opening file to read data)
default opening mode of ifstream objects

-> ios::out      output/write 
(we are opening file to write in file, pre-existing data will be deleted in the file :| )
default opening mode of ofstream objects

-> ios::app      append
(we are opening file to write in file, pre-existing data will not be deleted in the file, instead you will append data. )

-> ios::ate      at end
(Set the initial position at the end of the file.If this flag is not set, the initial position is the beginning of the file.)

-> ios::binary   binary 
open file in binary mode.
*/

//fstream default mode is... 
//("file_name", ios::in | ios::out)