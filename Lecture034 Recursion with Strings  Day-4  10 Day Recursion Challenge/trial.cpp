#include <iostream>
#include <string>
using namespace std;
void startup(string &);
void outputfile(string);
int main()
{
    string filename;
    startup(filename);
    outputfile(filename);
}
void startup(string &name)
{
    cin >> name;
}
void outputfile(string name)
{
    cout<<endl;
    cout << name;
}