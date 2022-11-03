#include <iostream>
#include <fstream>
using namespace std;
void copyupper()
{
    char ch;
    string line;
    ifstream fin;
    ofstream fout;
    fin.open("E:/files/FIRST.txt");
    fout.open("E:/files/SECOND.txt");
    if (!fin)
        cout << "Error in opening the file" << endl;
    if (!fout)
        cout << "Error in opening or creating the file" << endl;
    else
    {
        cout << "\n******** Reading data in FIRST.txt ********" << endl;
        while (!fin.eof())
        {
            getline(fin, line);
            cout << line << endl;
        }
        fin.seekg(0);
        cout << "\nSECOND.txt File created successfully" << endl;
        while (!fin.eof())
        {
            ch = fin.get();
            ch = toupper(ch);
            fout << ch;
        }
        cout << "Data is copied successfully" << endl;
    }
    fin.close();
    fout.close();
}
int main()
{
    copyupper();
    return 0;
}
