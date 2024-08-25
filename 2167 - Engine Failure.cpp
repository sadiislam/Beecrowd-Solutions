#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int r[n];

    for(i=1; i<=n; i++)
    {
        cin >> r[i];
    }

    //printing if next digit less
    for(i=1; i<=n-1; i++)
    {
        if(r[i] > r[i+1])
        {
            cout << i+1 << endl;
            return 0;
        }
    }
        cout << "0" << endl;
}
