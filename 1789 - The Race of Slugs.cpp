#include<iostream>
using namespace std;
int main()
{
    int L, V, Max;
    while(cin >> L)
    {
        if(L==EOF)
        {
            break;
        }
        for(int i=0; i<L; i++)
        {
            cin >> V;
            if(V > Max)
            {
                Max = V;
            }
        }
        if(Max<10)
        {
            cout << "1" << endl;
        }
        else if(Max>=10 && Max<20)
        {
            cout << "2" << endl;
        }
        else if(Max>=20)
        {
            cout << "3" << endl;
        }
        Max=0;
    }
}
