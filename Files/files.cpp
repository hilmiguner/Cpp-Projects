#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // "fin" for read, "fout" for write.
    ifstream fin;
    ofstream fout;

    // "ios::in" for reading.
    // "ios::out" for writing and every time it opens a file, file's data gets erased.
    // "ios::app" for writing but it appends the data to end of the file.
    fin.open("txt", ios::in);
    fin.close();

    // Reading or writing one character:
    char ch1 = 'A';
    char ch2;
    fout.open("txt");
    fout.put(ch1);
    fout.close();
    fin.open("txt");
    fin.get(ch2);
    fin.close();
    cout<<"ch2: "<<ch2<<endl;

    // Reading or writing one line:
    string txt1 = "Hello World !";
    string txt2;
    fout.open("txt");
    fout<<txt1;
    fout.close();
    fin.open("txt");
    getline(fin, txt2);
    fin.close();
    cout<<"txt2: "<<txt2<<endl;

    // Let's write some texts.
    fout.open("txt");
    fout<<"Hello World!\n";
    fout<<"Weather is cold.\n";
    fout<<"I'm freezing.\n";
    fout<<"Please get me a jacket.\n";
    fout.close();

    // Read it line by line.
    fin.open("txt");
    string txt3;
    while(!fin.eof())
    {
        getline(fin, txt3);
        cout<<txt3<<endl;
    }
    fin.close();
}