#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("text.txt", ios::app | ios::ate);

    ifstream fin;
    fin.open("text.txt");
    char ch;

    for (int i = fin.tellg(); i < fout.tellp(); ch = fin.get(), i = fin.tellg())
    {
        cout << i << " ";
    }

    fin.close();
    fout.close();
}
