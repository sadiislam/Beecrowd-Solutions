#include<iostream>
using namespace std;
int main()
{
    string l;
    getline(cin, l);

    if(l.length() > 80)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
