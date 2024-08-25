#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s;
    cin >> s;
    for(i=s.length()-1; i>=0; i--)
    {
        cout << s[i];
    }
    cout << endl;
}


