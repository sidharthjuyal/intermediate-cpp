#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  system("cls");

  ofstream fout;
  fout.open("if_off.txt", ios::app);
  string line;
  cout << "Enter line to write in file: \n";
  getline(cin, line);
  cout << endl;
  fout << line;
  fout.close();

  ifstream fin;
  fin.open("if_off.txt");
  cout << endl;
  while (!fin.eof())
  {
    fin >> line;
    cout << line << " ";
  }
  fin.close();
}