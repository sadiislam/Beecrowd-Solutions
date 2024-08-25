#include<iostream>
using namespace std;
int main()
{
    int qt, i, n, m;
    string a, b, c, d;
    cin >> qt;
    for(i=0; i<qt; i++)
    {
        cin >> a >> b >> c >> d;
        cin >> n >> m;
        if((n+m)%2==0 && b=="PAR" || (n+m)%2!=0 && b=="IMPAR")
        {
            cout << a << endl;
        }
        else if((n+m)%2==0 && d=="PAR" || (n+m)%2!=0 && d=="IMPAR")
        {
            cout << c << endl;
        }
    }
}
