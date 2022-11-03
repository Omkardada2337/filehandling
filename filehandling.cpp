#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int i;
    string line;
    ofstream fout;
    fout.open("E:/files/abc.txt", ios::app);
    if (!fout)
    {
        cout << "File is not created" << endl;
    }
    else
    {
        cout << "File is created successfully" << endl;
        cout << "Enter the data : " << endl;
        while (fout)
        {
            getline(cin, line);
            if (line == "-1")
            {
                break;
            }
            fout << endl;
            fout << line;
        }
    }
    fout.close();

    ifstream fin;
    fin.open("E:/files/abc.txt");
    while (!fin.eof())
    {
        getline(fin, line); // ek ek line file se input lega aur buffer me dalega(i.e. in line )
        cout << line << endl;
    }
    fin.close();

    getch();
    return 0;
}
