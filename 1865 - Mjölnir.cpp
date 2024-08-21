#include<iostream>
using namespace std;
int main()
{
    int C, N;
    string S;
    cin >> C;
    for(int i=0; i<C; i++)
    {
        cin >> S >> N;
        if(S == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}
