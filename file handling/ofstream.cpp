#include<fstream>//contains declaration of fstream, ifstream, ofstream
#include<iostream>
using namespace std;

int main()
{
   ofstream fout;  //object of ofstream (you made a real life output stream)
   //file me writing krnin hai
   fout.open("file.txt",ios::app);  //open function is a method of ofstream class and object fout is calling it.
   /* 
   -> agr file exist krti hai to open ho jaegi, vrna new file create hogi or tab open hogi.
   -> agr open method me, only file name likhte ho to is file ko, jaha pe aka program hai vaha ki directory me dhunda jaega.
   */
   fout<<"\nHello there Iam sidharth!";
   fout.close();  //close() method of ofstream class 
}

/*
Data persistence
-> life of the data
Data persistence refers to the existence of data in the program. In other words, it means the life of data. Data is the most significant part of a program and it must be stored properly and easily retrieved when required. Before files came into existence, data was being stored in data variables of a program.

STREAMS
-> A C++ stream is a flow of data into or out of a program, for example the data written to cout or read from cin.

FLOWCHART:
                   ----->istream_withassign(cin)
            (>>)   |        
      ---->istream------>ifstream
      |            |
ios----            |-->iostream--->fstream
      |            |
      ---->ostream
      ------>ofstream
            (<<)   |
                   ---->ostream_withassign(cout)

STEPS
-> make your desired stream
-> open file
*/