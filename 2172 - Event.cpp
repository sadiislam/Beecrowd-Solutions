#include<iostream>
using namespace std;
int main()
{
    long long int x, m, e;
    while(1)
    {
        cin >> x >> m;
        if(x==0 && m==0) break;
        e = x * m;
        cout << e << endl;
    }
}
