#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;

    //! attention here
    cout << ch << endl;

    char *c = &ch[0];
    //! prints entire string
    cout << c << endl;
    //! Move pointer to point the next char in the string to now rather than pointing index to 0 , its pointing at index = 1
    c = c+1;
    cout<<c<<endl<<endl;

    char temp = 'z';
    char *p = &temp;
    
    //! Imp see video to understand this output
    cout << p << endl;
    cout<<endl;


    cout<<"----------------------------------------------------------------------------"<<endl;

    string str = "ayush";
    // cout<<str[0]<<endl;

    // for(int i=0;i<str.size();i++)
    // {
    //     cout<<str[i]<<endl;
    // }

    char *ptr = &str[0];

    cout<<ptr<<endl<<endl;

    cout<<*ptr<<endl;

    return 0;
}