#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();  // Ignore the newline character
    for(int i=0; i<n; i++)
    {
        cin >> s;
        getline(cin, s);   // Read the entire line

    }
    cout << "Ciencia da Computacao" << endl;
}

