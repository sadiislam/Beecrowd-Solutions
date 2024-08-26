#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3, t1, t2, t3;
    cin >> a1 >> a2 >> a3;
    t1 = a2*2 + a3*4;
    t2 = a1*2 + a3*2;
    t3 = a2*2 + a1*4;

    if(t1<=t2 && t1<=t3) cout << t1 << endl;
    else if(t2<=t1 && t2<=t3) cout << t2 << endl;
    else cout << t3 << endl;
}
