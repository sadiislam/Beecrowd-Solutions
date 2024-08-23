#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b && b<=c) cout << ":)" << endl;
    else if(a<b && b>=c) cout << ":(" << endl;
    else if(a<b && b<c)
    {
        if((b-a)>(c-b)) cout << ":(" << endl;
        else cout << ":)" << endl;
    }
    else if(a<b && b<c)
    {
        if((b-a)<(c-b)) cout << ":)" << endl;
        else cout << ":(" << endl;
    }
    else if(a>b && b>c)
    {
        if((a-b)>(b-c)) cout << ":)" << endl;
        else cout << ":(" << endl;
    }
    else if(a>b && b>c)
    {
        if((a-b)<(b-c)) cout << ":(" << endl;
        else cout << ":)" << endl;
    }
    else if(a==b && b<c) cout << ":)" << endl;
    else if(a==b && b>c) cout << ":(" << endl;
    else cout << ":(" << endl;
}
