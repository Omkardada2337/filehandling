#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int i;
    char ch;
    ifstream fin;
    system("cls");
    fin.open("E:/files/def.txt");
    if (!fin)
    {
        cout << "Error in opening and creating the file" << endl;
    }
    else
    {
        while (!fin.eof())
        {
            ch = fin.get();
            cout << ch;
        }
    }
    fin.close();
    getch();
}
