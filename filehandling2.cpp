#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int i;
    string line;
    system("cls");
    ofstream fout;
    fout.open("E:/files/def.txt", ios::app);
    if (!fout)
    {
        cout << "File is not created" << endl;
    }
    else
    {
        cout << "File is created successfully" << endl;
        cout << "\nEnter the data : " << endl;
        while (fout)
        {
            getline(cin, line);
            if (line == "-1")
            {
                break;
            }
            fout << line;
            fout << "" << endl;
        }
    }
    fout.close();

    ifstream fin;
    fin.open("E:/files/def.txt", ios::in);
    if (!fin)
    {
        cout << "Error in opening the file" << endl;
    }
    else
    {
        cout << "File opened successfully" << endl;
        while (!fin.eof())
        {
            getline(fin, line);
            cout << line << endl;
        }
    }
    fin.close();

    getch();
}
